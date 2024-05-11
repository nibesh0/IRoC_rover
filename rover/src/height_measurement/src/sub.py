#!/usr/bin/env python

import rospy
from obj_msgs.msg import ObjectMsg

def object_callback(data):
    rospy.loginfo("Received object message: x={}, y={}, height={}, width={}, distance={}, class_name={}".format(
        data.x, data.y, data.height, data.width, data.distance, data.class_name))

def subscribe_object():
    # Initialize ROS node
    rospy.init_node('object_subscriber', anonymous=True)

    # Subscribe to the ObjectMsg topic
    rospy.Subscriber('object_topic', ObjectMsg, object_callback)

    # Spin
    rospy.spin()

if __name__ == '__main__':
    subscribe_object()
