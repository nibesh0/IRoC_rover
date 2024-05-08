#!/usr/bin/env python

import rospy
from geometry_msgs.msg import Point

def coordinates_sender():
    rospy.init_node('coordinates_sender', anonymous=True)
    pub = rospy.Publisher('arm_coordinates', Point, queue_size=10)
    rate = rospy.Rate(1) # 1 Hz
    while not rospy.is_shutdown():
        x = 1.0
        y = 2.0
        z = 3.0
        point = Point(x, y, z)
        rospy.loginfo("Sending coordinates: x={}, y={}, z={}".format(x, y, z))
        pub.publish(point)
        rate.sleep()

if __name__ == '__main__':
    try:
        rospy.loginfo("Starting coordinates sender node...")
        coordinates_sender()
    except rospy.ROSInterruptException:
        pass
