import rclpy
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
import numpy as np
from PIL import Image as PILImage
import cv2

depth_array = np.zeros((480, 640), dtype=np.float32)
hgh = []

def convert_depth_image(msg):
    bridge = CvBridge()
    depth_image = bridge.imgmsg_to_cv2(msg, desired_encoding="passthrough")
    global depth_array
    depth_array = np.array(depth_image, dtype=np.float32)
    im = PILImage.fromarray(depth_array)
    im = im.convert("L")
    pixel_value = depth_array[200, 200]
    im_array = np.array(im)

    cv2.putText(im_array, str(pixel_value), (200, 200), cv2.FONT_HERSHEY_SIMPLEX, 1, color=(0, 255, 255), thickness=1)
    cv2.putText(im_array, str(pixel_value), (310, 200), cv2.FONT_HERSHEY_SIMPLEX, 1, color=(0, 255, 255), thickness=1)
    cv2.imshow("Depth Image", im_array)
    cv2.setMouseCallback("Depth Image", on_mouse_click)

    cv2.waitKey(1)

def on_mouse_click(event, x, y, flags, param):
    global hgh, depth_array

    if event == cv2.EVENT_LBUTTONDOWN:
        global hgh
        print(" at (x={}, y={}): {}".format(x, y, depth_array[y, x]))
        hgh.append([x,y])
        print(len(hgh))
        if len(hgh) == 2:
            x1, y1 = hgh[0]
            x2, y2 = hgh[1]
            d1 = depth_array[y1, x1]
            d2 = depth_array[y2, x2]

            height = ((x2 - x1)/(d2**1.844417954))

            print("Height: ", height)

            hgh = []

def pixel2depth():
    rclpy.init()
    node = rclpy.create_node('pixel2depth')

    subscriber = node.create_subscription(Image, '/camera0/depth/image_rect_raw', convert_depth_image, 10)
    subscriber  # prevent unused variable warning

    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    pixel2depth()