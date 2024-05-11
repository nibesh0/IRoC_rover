import rospy
from sensor_msgs.msg import Image, PointCloud
from cv_bridge import CvBridge
import cv2
import numpy as np
import tf2_ros
import tf2_geometry_msgs
import geometry_msgs.msg

class DepthPointCloudMapper:
    def __init__(self):
        rospy.init_node('depth_point_cloud_mapper', anonymous=True)

        # Initialize OpenCV bridge
        self.bridge = CvBridge()

        # Initialize TF2 listener
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer)

        # Variables to store selected points
        self.selected_points = []

        # Subscribe to depth image and point cloud topics
        rospy.Subscriber('/camera0/depth/image_raw', Image, self.depth_image_callback)
        rospy.Subscriber('/camera0/depth/points', PointCloud, self.point_cloud_callback)

    def depth_image_callback(self, data):
        try:
            # Convert ROS Image message to OpenCV image
            depth_image = self.bridge.imgmsg_to_cv2(data, desired_encoding='passthrough')
            
            # Process depth image (example: display it)
            cv2.imshow('Depth Image', depth_image)
            cv2.waitKey(1)

            # Capture two points from the depth image
            if len(self.selected_points) < 2:
                cv2.setMouseCallback('Depth Image', self.mouse_callback, depth_image)
            
        except Exception as e:
            rospy.logerr(e)

    def mouse_callback(self, event, x, y, flags, depth_image):
        if event == cv2.EVENT_LBUTTONDOWN:
            depth_value = depth_image[y, x]  # Depth value at the clicked point
            self.selected_points.append((x, y, depth_value))
            rospy.loginfo("Selected point: (%d, %d) with depth: %f", x, y, depth_value)
            if len(self.selected_points) == 2:
                rospy.loginfo("Calculating distance...")
                distance = self.calculate_distance()
                if distance is not None:
                    rospy.loginfo("Distance between points in point cloud frame: %f meters", distance)

    def calculate_distance(self):
        if len(self.selected_points) == 2:
            try:
                # Get transform from depth frame to point cloud frame
                transform = self.tf_buffer.lookup_transform('camera0_depth_optical_frame', 'camera0_depth_optical_frame',
                                                            rospy.Time(0), rospy.Duration(1.0))
                
                # Convert point cloud message to numpy array
                data = rospy.wait_for_message('/camera0/depth/points', PointCloud)
                pc = np.asarray(data.points)
                
                # Map selected points to point cloud frame
                mapped_points = []
                for point in self.selected_points:
                    x, y, depth = point
                    point_3d = geometry_msgs.msg.PointStamped()
                    point_3d.point.x = pc[y * data.width + x].x
                    point_3d.point.y = pc[y * data.width + x].y
                    point_3d.point.z = pc[y * data.width + x].z
                    point_3d.header.frame_id = data.header.frame_id

                    # Transform point to point cloud frame
                    transformed_point = tf2_geometry_msgs.do_transform_point(point_3d, transform)

                    mapped_points.append((transformed_point.point.x, transformed_point.point.y, transformed_point.point.z))

                # Calculate distance between the two mapped points
                distance = np.linalg.norm(np.array(mapped_points[0]) - np.array(mapped_points[1]))
                return distance
            except Exception as e:
                rospy.logerr(e)
                return None
        else:
            return None

    def point_cloud_callback(self, data):
        pass  # Not needed for distance calculation

if __name__ == '__main__':
    try:
        # Initialize mapper node
        depth_point_cloud_mapper = DepthPointCloudMapper()
        rospy.spin()

    except rospy.ROSInterruptException:
        pass
