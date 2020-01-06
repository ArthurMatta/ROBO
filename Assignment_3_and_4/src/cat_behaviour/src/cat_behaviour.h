#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/Range.h>
#include <sensor_msgs/PointCloud.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

#define PI 3.14159265

namespace cat_robot
{
    class CatRobot
    {
        private:
            ros::Subscriber sub;
            ros::NodeHandle nh;

            sensor_msgs::PointCloud scan;

            std::string leftSpinner_topic;
            std::string rightSpinner_topic;
            std::string backleftWheel_topic;
            std::string backrightWheel_topic;
            std::string laser_topic;

            ros::Publisher backL;
            ros::Publisher backR;
            ros::Publisher spinL;
            ros::Publisher spinR;

        public:
            CatRobot(int argc, char **argv);
            void printCollision(double dist, double angle);
            void callback(const sensor_msgs::PointCloud& str);
    };
}