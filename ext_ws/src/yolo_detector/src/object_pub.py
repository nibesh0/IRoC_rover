import os
import rclpy
from rclpy.node import Node
from yolo_msgs.msg import YoloDetection
import sensor_msgs.msg 
from obj_msgs.msg import ObjectMsg
from cv_bridge import CvBridge
import numpy as np
from PIL import Image
import cv2
from geometry_msgs.msg import Point
from std_msgs.msg import String


depth_array = np.zeros((480, 640), dtype=np.float32)
class Object(Node):
    def __init__(self):
        # Get the name of the node from the filename
        node_name = os.path.splitext(os.path.basename(__file__))[0]
        super().__init__(node_name=node_name)
        print("init")
        self.publisher = self.create_publisher(ObjectMsg, '/YoloDetection/ObjectMsgs', 10)
        self.coordinate_publisher = self.create_publisher(Point, '/detected/heightwidth', 10)
        self.coordinate_publisher2 = self.create_publisher(Point, '/detected/center', 10)
        self.string_publisher = self.create_publisher(String, '/detected/cls', 10)
        self.publisher = self.create_publisher(ObjectMsg, '/YoloDetection/ObjectMsgs', 10)
        self.subscription = self.create_subscription(sensor_msgs.msg.Image, '/camera0/depth/image_rect_raw', self.image_callback, 10)
        self.subscriptionYolo = self.create_subscription(YoloDetection, '/YoloDetection/detect', self.depth_call_back, 10)
        self.bridge = CvBridge()
        self.x = None
        self.y = None
        self.cls = None
        self.x1=None
        self.y1=None
        self.x2=None
        self.y2=None
        
    def depth_call_back(self, msg):
        self.x1=(msg.x1*2)
        self.y1=msg.y1*2
        self.x2=(msg.x2*2)
        self.y2=msg.y2*2
        self.x = int(abs(msg.x1 + msg.x2))
        self.y = int(abs(msg.y1 + msg.y2) )
        self.cls = msg.class_name
        print(self.x)
        
    def image_callback(self, msg):
        if self.x is not None and self.y is not None:
            height, width, distance, cls = self.image_process(msg)
            obj_msg = ObjectMsg()
            obj_msg.height = height
            obj_msg.width = width
            obj_msg.distance = distance
            obj_msg.class_name = cls
            obj_msg.x = self.x
            obj_msg.y = self.y
            self.publisher.publish(obj_msg)

            msg = Point()
            msg2 = Point()
            msg2.x=float(self.x)
            msg2.y=float(self.y)
            msg2.z=float(distance)
            msg.x=float(width)
            msg.y=float(height)
            msg.z=float(distance)
            strs=String()
            strs.data =cls
            self.coordinate_publisher.publish(msg)
            self.coordinate_publisher2.publish(msg2)
            self.string_publisher.publish(strs)
            self.publisher.publish(obj_msg)
            self.x = None
            self.y = None
            self.cls = None

    def image_process(self, msg):

        try:
            if (self.x is not None and self.y is not None ): 
                image = self.bridge.imgmsg_to_cv2(msg, "passthrough")
                global depth_image
                depth_image =np.array(image, dtype=np.float32)
                im = Image.fromarray(depth_image)
                
                im = Image.fromarray(depth_image)
                im = im.convert("L")
                im_array = np.array(im)
                pixel_value = depth_image[self.y, self.x]
                # cv2.rectangle(image, (self.x1, self.y1), (self.x2, self.y2), (0, 255, 0), thickness=2)
                # print(x1)
                print(image.shape)
                cv2.putText(im_array, str(pixel_value), (self.x, self.y), cv2.FONT_HERSHEY_SIMPLEX, 1, color=(0, 255, 255), thickness=1)
                cv2.imshow("Depth Image", im_array)
                cv2.waitKey(1)
                return (abs(self.y2-self.y1)*pixel_value)/407.35, 1.1, float(pixel_value), self.cls
            else:
                return None, None, None, None
        except:
            pass

def main(args=None):
    rclpy.init(args=args)
    node = Object()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
