#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/Range.h>

using namespace std;

int main(int argc, char ** argv)
{
	cout << "Starting Cat Behaviour in C++" << endl;

	string leftWheel_topic;
	string rightWheel_topic;
	string laser_topic;

	leftWheel_topic = string("/cat/leftWheel_effort_controller/command");
	rightWheel_topic = string("/cat/rightWheel_effort_controller/command");
	laser_topic = string("/cat/laser/scan");

	cout << leftWheel_topic.c_str() << endl;
	cout << rightWheel_topic.c_str() << endl;

	cout << "Building Message" << endl;

	ros::init(argc, argv, "cat");
	ros::NodeHandle nh;
	//Listener listener;
	//ros::Publisher lasers = n.advertise<geometry_msgs::Twist>(speeds_topic.c_str(), 1);
	//ros::Subscriber sub = nh.subscribe(laser_topic.c_str(), 1, &listener::callback, &listener);
	ros::Publisher pub = nh.advertise<std_msgs::Float64>(leftWheel_topic.c_str() , 1);
	ros::Publisher pub2 = nh.advertise<std_msgs::Float64>(rightWheel_topic.c_str() , 1);

	std_msgs::Float64 message;
	message.data = 100;

	ros::Rate(200);
	cout << "Publishing Message" << endl;

	while(ros::ok)
	{
	   pub.publish(message);
	   pub2.publish(message);
	   ros::spinOnce();               
	}

 }
