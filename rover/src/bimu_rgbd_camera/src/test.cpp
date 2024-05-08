#include "ros/ros.h"
#include "ros/time.h"
#include "std_msgs/String.h"

#include <sstream>

#include <sensor_msgs/image_encodings.h>
#include <sensor_msgs/Image.h>
main(){

    ros::init(argc, argv, "bimu_rgbd_camera");  
	ros::NodeHandle n;
	ros::Publisher img_pub = n.advertise<sensor_msgs::Image>("bimu_rgbd_camera", 1000);
	ros::Publisher depth_pub = n.advertise<sensor_msgs::Image>("bimu_depth_camera", 1000);

}