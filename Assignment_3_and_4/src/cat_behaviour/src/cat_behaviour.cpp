#include "cat_behaviour.h"

using namespace std;

namespace cat_robot{

	CatRobot::CatRobot(int argc, char **argv){
		cout << "Starting Cat Behaviour in C++" << endl;

		leftSpinner_topic = string("/cat/leftSpinner_effort_controller/command");
		rightSpinner_topic = string("/cat/rightSpinner_effort_controller/command");
		backleftWheel_topic = string("/cat/leftBWheel_effort_controller/command");
		backrightWheel_topic = string("/cat/righBtWheel_effort_controller/command");
		laser_topic = string("/cat/laser/scan");

		
		sub = nh.subscribe(laser_topic.c_str(), 1, &CatRobot::callback, this);
		backL = nh.advertise<std_msgs::Float64>(backleftWheel_topic.c_str() , 1);
		backR = nh.advertise<std_msgs::Float64>(backrightWheel_topic.c_str() , 1);
		spinL = nh.advertise<std_msgs::Float64>(backleftWheel_topic.c_str() , 1);
		spinR = nh.advertise<std_msgs::Float64>(backrightWheel_topic.c_str() , 1);
	}

	void CatRobot::callback(const sensor_msgs::PointCloud& str){
		//cout << str << endl;
		//cout << "Building Message" << endl;

		std_msgs::Float64 message;
		message.data = 20;

		ros::Rate(200);
		//cout << "Publishing Message" << endl;

		backL.publish(message);
		backR.publish(message);
		spinL.publish(message);
		spinR.publish(message);

		ros::spinOnce();               
	}
 }


