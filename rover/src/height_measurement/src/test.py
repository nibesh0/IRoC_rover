import rospy
from cv_bridge import CvBridge
import sensor_msgs.msg  
import numpy as np
from PIL import Image
import cv2
import math
# hgh=[]
  # Example value in centimeters, replace with actual measurement
vfov = 60.4  # Vertical field of view in degrees
resolution_height = 460  # Vertical resolution of the camera's depth map
d=0
hgh = []
def convert_depth_image(ros_image):
    bridge = CvBridge()
    depth_image = bridge.imgmsg_to_cv2(ros_image, desired_encoding="passthrough")
    global depth_array 
    depth_array = np.array(depth_image, dtype=np.float32)
    im = Image.fromarray(depth_array)
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
            
            
            height = (abs(y1-y2)*(d1+d2))/(2*407.35)

            
            
            # height2 = (x2 - x1) / d2 * d1
            print("Height: ", height)
            
            hgh = []  


def pixel2depth():
    
    rospy.init_node('pixel2depth', anonymous=True)
    
    rospy.Subscriber("/camera0/depth/image_rect_raw", sensor_msgs.msg.Image, callback=convert_depth_image, queue_size=10)
    
    rospy.spin()

if __name__ == '__main__':
    pixel2depth()
