#!/usr/bin/env python

import rospy
from obj_msgs.msg import ObjectMsg

def publish_object():
    # Initialize ROS node
    rospy.init_node('object_publisher', anonymous=True)

    # Create a publisher for the ObjectMsg topic
    pub = rospy.Publisher('object_topic', ObjectMsg, queue_size=10)

    # Create an ObjectMsg message
    object_msg = ObjectMsg()
    object_msg.x = 10
    object_msg.y = 20
    object_msg.height = 1.5
    object_msg.width = 2.0
    object_msg.distance = 3.5
    object_msg.class_name = "Example"

    rate = rospy.Rate(1) # 1 Hz
    while not rospy.is_shutdown():
        # Publish the message
        pub.publish(object_msg)
        rate.sleep()

if __name__ == '__main__':
    try:
        publish_object()
    except rospy.ROSInterruptException:
        pass
