#!/usr/bin/env python

import rospy
from geometry_msgs.msg import Point

def coordinates_receiver():
    rospy.init_node('coordinates_receiver', anonymous=True)
    rospy.Subscriber('arm_coordinates', Point, callback)
    rospy.spin()

def callback(data):
    rospy.loginfo("Received coordinates: x={}, y={}, z={}".format(data.x, data.y, data.z))

if __name__ == '__main__':
    try:
        rospy.loginfo("Starting coordinates receiver node...")
        coordinates_receiver()
    except rospy.ROSInterruptException:
        pass
