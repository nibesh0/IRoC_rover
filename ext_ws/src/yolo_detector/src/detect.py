import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from yolo_msgs.msg import YoloDetection
from cv_bridge import CvBridge
import cv2
from ultralytics import YOLO
import numpy as np

class YoloObjectDetector(Node):
    def __init__(self):
        super().__init__('Yolo')
        print("init")
        self.publisher = self.create_publisher(YoloDetection, '/YoloDetection/detect', 10)
        self.publisher2 = self.create_publisher(Image, '/YoloDetection/detectedvideo', 10)
        self.subscription = self.create_subscription(Image,'/camera0/infra/image_raw',self.image_callback,  10)
        self.bridge = CvBridge()
        self.yolo = YOLO("yolov8m.pt")
    
    def image_callback(self, msg):
        image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        image = cv2.resize(image, (320, 230)) 
        self.detect(image)

    def detect(self, frame):
        results = self.yolo.predict(frame)
        for result in results:
            boxs = result.boxes
            for box in boxs:
                if box.conf > 0.1:
                    xyxy = box.xyxy[0].tolist()
                    x1, y1, x2, y2 = int(xyxy[0]), int(xyxy[1]), int(xyxy[2]), int(xyxy[3])
                    class_name = f'class_{box.cls}'
                    confidence = float(box.conf)
                    

                    cv2.rectangle(frame, (x1, y1), (x2, y2), (0, 255, 0), 2)
                    label = f"{class_name}: {confidence:.2f}"
                    cv2.putText(frame, label, (int((x1+x2)/2), int((y1 +y2)/2)), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
                    ros_img = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
                    self.publisher2.publish(ros_img)
                    detection = YoloDetection()
                    detection.x1 = x1
                    detection.y1 = y1
                    detection.x2 = x2
                    detection.y2 = y2
                    detection.class_name = class_name
                    detection.confidence = confidence
                    self.publisher.publish(detection)
                    print(x1,y1,x2,y2)

        cv2.imshow("frame", frame)
        cv2.waitKey(1)  

def main(args=None):
    rclpy.init(args=args)
    node = YoloObjectDetector()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
