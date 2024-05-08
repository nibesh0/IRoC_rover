#!/usr/bin/env python

import rospy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from picamera2 import Picamera2

class VideoPublisherNode:
    def __init__(self):
        rospy.init_node('video_publisher_node', anonymous=True)

        self.publisher = rospy.Publisher('video_frames', Image, queue_size=10)
        self.bridge = CvBridge()
        self.picam = Picamera2()
        self.picam.start()

    def publish_frame(self):
        im = self.picam.capture_array()
        rospy.loginfo('Publishing video frame')
        image_msg = self.bridge.cv2_to_imgmsg(im, encoding="bgr8")
        self.publisher.publish(image_msg)

def main():
    node = VideoPublisherNode()
    try:
        rate = rospy.Rate(30)  # 30 FPS
        while not rospy.is_shutdown():
            node.publish_frame()
            rate.sleep()
    except rospy.ROSInterruptException:
        pass

if __name__ == '__main__':
    main()
