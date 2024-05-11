import rospy
from std_msgs.msg import String  # Import the String message type

def string_callback(data):
    rospy.loginfo("Received string message: {}".format(data.data))

def subscribe_string():
    # Initialize ROS node
    rospy.init_node('string_subscriber', anonymous=True)

    # Subscribe to the String topic
    rospy.Subscriber('/detected/cls', String, string_callback)  # Replace '/topic_name' with the actual topic name

    # Spin
    rospy.spin()

if __name__ == '__main__':
    subscribe_string()
