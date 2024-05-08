#!/usr/bin/env python

import rospy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class VideoListenerNode:
    def __init__(self):
        rospy.init_node('video_listener_node', anonymous=True)

        self.bridge = CvBridge()
        self.image_subscriber = rospy.Subscriber('video_frames', Image, self.image_callback)

    def image_callback(self, data):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(data, desired_encoding="bgr8")
            cv2.imshow("Video Frames", cv_image)
            cv2.waitKey(1)
        except Exception as e:
            rospy.logerr(e)

def main():
    node = VideoListenerNode()
    try:
        rospy.spin()
    except KeyboardInterrupt:
        cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
