#include "cat_behaviour.h"

using namespace std;

namespace cat_robot{

	CatRobot::CatRobot(int argc, char **argv){
		cout << "Starting Cat Behaviour in C++" << endl;

		leftSpinner_topic = string("/cat/cat_leftSpinner_effort_controller/command");
		rightSpinner_topic = string("/cat/cat_rightSpinner_effort_controller/command");
		backleftWheel_topic = string("/cat/cat_leftBWheel_effort_controller/command");
		backrightWheel_topic = string("/cat/cat_righBtWheel_effort_controller/command");
		laser_topic = string("/cat/laser/scan");

		sub = nh.subscribe(laser_topic.c_str(), 1, &CatRobot::callback, this);
		backL = nh.advertise<std_msgs::Float64>(backleftWheel_topic.c_str() , 1);
		backR = nh.advertise<std_msgs::Float64>(backrightWheel_topic.c_str() , 1);
		spinL = nh.advertise<std_msgs::Float64>(leftSpinner_topic.c_str() , 1);
		spinR = nh.advertise<std_msgs::Float64>(rightSpinner_topic.c_str() , 1);
	}

	void CatRobot::printCollision(double dist, double angle){
		cout << fixed << setprecision(2) << "Distance: " << dist << " m " << setprecision(0) << "Angle: " << angle << "°"<< endl;
	}

	void CatRobot::callback(const sensor_msgs::PointCloud& msg){
		
		scan = msg;
		
		bool top = false, mid = false, bot = false;
		double min_angle = 1000.0, max_angle = -1000.0;
		double min_distance = 1000.0;
		std_msgs::Float64 message, left_msg, right_msg;

		for(int i = 0 ; i < scan.points.size() ; i++){
			double x = scan.points[i].x;
			double y = scan.points[i].y;
			double dist = sqrt(pow(x, 2) + pow(y, 2)) + 0.16; // Acrescentar 0.16 de range minimo do sensor
			double angle = atan(x/y) * 180 / PI;
			double minBotDist = 0.45 / cos(30*(PI/180));
			double minMidDist = 0.45 / cos(60*(PI/180));
			double minTopDist = 3;

			if(angle < 0){
				angle = 90 + (90 + angle);
			}
			if(i < 199){ // Ignorar sensor 199 propositadamente
				if(dist < minBotDist - 0.01){ // Remover 0.01 devido a inprecisoes do sensor
					bot = true;
					if (angle < min_angle) {
						min_angle = angle;
					}
					if (angle > max_angle) {
						max_angle = angle;
					}
					if (dist < min_distance) {
						min_distance = dist;
					}
					//CatRobot::printCollision(dist, angle);
				}
			}
			else if (i >= 200 && i < 399){ // Ignorar sensor 399 propositadamente
				if(dist < minMidDist - 0.01){
					mid = true;
					if (angle < min_angle) {
						min_angle = angle;
					}
					if (angle > max_angle) {
						max_angle = angle;
					}
					if (dist < min_distance) {
						min_distance = dist;
					}
					//CatRobot::printCollision(dist, angle);
				}
			}
			else if (i >= 400 && i < 599){ // Ignorar sensor 599 propositadamente
				if(dist < minTopDist - 0.01){
					top = true;
					//CatRobot::printCollision(dist, angle);
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

			cout << fixed << setprecision(0) << "Angle: [" << min_angle << "°, " << max_angle << "°]" << endl;
			cout << fixed << setprecision(2) << "Distance: " << min_distance << "m" << endl;

			if (min_distance < 0.35) {
				cout << "CATCHED THE MOUSE!" << endl;
			}
		}
		else{
			cout << "All Clear" << endl;
		}
		bot = false;
		mid = false;
		top = false;


		if (((min_angle + max_angle)/2) > 90) {
			left_msg.data = -50;
			right_msg.data = -50;
		} else if (((min_angle + max_angle)/2) < 90) {
			left_msg.data = 50;
			right_msg.data = 50;
		} else {
			left_msg.data = 0;
			right_msg.data = 0;
		}

		
		message.data = 50;

		ros::Rate(200);
		cout << "Publishing Message" << endl;

		backL.publish(message);
		backR.publish(message);
		spinL.publish(left_msg);
		spinR.publish(right_msg);

		ros::spinOnce();               
	}
 }


