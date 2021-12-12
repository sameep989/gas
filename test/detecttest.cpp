#include"ros/ros.h"
#include <gtest/gtest.h>
#include "detection.hpp"




// Test to validate bill location
// TEST(TestDetection1, testbillloc) {
//   ros::NodeHandle nh
//   detect det(nh);
//   EXPECT_EQ(det.bill_x, 0.452);
//   EXPECT_EQ(det.bill_y, -1.0);
// }

// Test to spot red color in image
TEST(TestDetection2, reddetection) {
  ros::NodeHandle nh;
  detect dete(nh);
  cv::Mat img;
  img = cv::imread("/red.jpg");
  dete.spot_image(img);
  EXPECT_TRUE(dete.spotted);
}

/*// Test to get the location of red color
TEST(TestDetection3, reddetectionloc) {
  ros::NodeHandle n;
  Detect det(n);
  cv::Mat img;
  img = cv::imread("/red.jpg");
  det.spot_image(img);
  double locx, locy;
  locx = 0.0;
  locy = 0.0;
  EXPECT_EQ(locx, det.pos[0]);
  EXPECT_EQ(locy, det.pos[1]);
}

// Test to check if robot is rotating once on no object found
// TEST(TestDetection4, checkrot) {
//   ros::NodeHandle ns;
//   Detect de(ns);
//   cv::Mat img;
//   img = cv::imread("/black.jpg");
//   de.robot_motion(img);
//   de.spotted = false
//   EXPECT_EQ(1, de.rotate);
// }

// // Test to check publisher of robot
// TEST(TestNavigateRobot, teststartdetect) {
// //  initialise the test object
// detect det ;

// ros::NodeHandle nh;
// //  Create a publisher on the topic
// ros::Publisher motorpub = nh.advertise<geometry_msgs::Twist>("/cmd_vel", 2);
// ros::Subscriber camsub = n.subscribe("/camera/rgb/image_raw", 1, &detect::process_image_callback, this);
// ros::Subscriber odomsub = n.subscribe("odom", 1000, &detect::odomCallback, this);
// ros::Subscriber scansub = n.subscribe<sensor_msgs::LaserScan>("/scan", 1, &detect::LaserCallback, this);
// EXPECT_EQ(1, motorpub.getNumPublishers());
// EXPECT_EQ(1, camsub.getNumPublishers());
// EXPECT_EQ(1, odomsub.getNumPublishers());
// EXPECT_EQ(1, scansub.getNumPublishers());
// }*/


