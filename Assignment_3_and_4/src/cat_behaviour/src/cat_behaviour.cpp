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
		spinL = nh.advertise<std_msgs::Float64>(leftSpinner_topic.c_str() , 1);
		spinR = nh.advertise<std_msgs::Float64>(rightSpinner_topic.c_str() , 1);
	}

	void CatRobot::callback(const sensor_msgs::PointCloud& msg){
		
		//cout << msg << endl;

		scan = msg;

		//cout << scan.points.size() << endl;
		
		bool top = false, mid = false, bot = false;

		for(int i = 0 ; i < scan.points.size() ; i++){
			double x = scan.points[i].x;
			double y = scan.points[i].y;
			double dist = sqrt(pow(x, 2) + pow(y, 2));
			if(i < 200){
				if(dist < 0.2){
					bot = true;
				}
			}
			else if (i >= 200 && i < 400){
				if(dist < 0.6){
					mid = true;
				}
			}
			else if (i >= 400 && i < 600){
				if(dist < 2.6){
					top = true;
					cout << dist << endl;
				}
			}
		}
		string final;
		if(bot || mid || top){
			if(bot)
				final.append("Mouse Detected NEAR!");
			if(mid)
				final.append("Mouse Detected Medium Range!");
			if(top)
				final.append("Wall Detected!");
			cout << final << endl;
		}
		else{
			cout << "All Clear" << endl;
		}
		bot = false;
		mid = false;
		top = false;

		std_msgs::Float64 message;
		message.data = 50;

		ros::Rate(200);
		//cout << "Publishing Message" << endl;

		//backL.publish(message);
		//backR.publish(message);
		//spinL.publish(message);
		//spinR.publish(message);

		ros::spinOnce();               
	}
 }


