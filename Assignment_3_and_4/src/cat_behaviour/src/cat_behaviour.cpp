#include "cat_behaviour.h"

#define max_laser_dist(ang) (0.45 / cos((ang) * (PI/180)))

using namespace std;

namespace cat_robot{

	CatRobot::CatRobot(int argc, char **argv){
		cout << "Starting Cat Behaviour in C++" << endl;

		leftSpinner_topic = string("/cat/cat_leftSpinner_effort_controller/command");
		rightSpinner_topic = string("/cat/cat_rightSpinner_effort_controller/command");
		backleftWheel_topic = string("/cat/cat_leftBWheel_effort_controller/command");
		backrightWheel_topic = string("/cat/cat_rightBWheel_effort_controller/command");
		laser_topic = string("/cat/laser/scan");

		backL = nh.advertise<std_msgs::Float64>(backleftWheel_topic.c_str() , 1);
		backR = nh.advertise<std_msgs::Float64>(backrightWheel_topic.c_str() , 1);
		spinL = nh.advertise<std_msgs::Float64>(leftSpinner_topic.c_str() , 1);
		spinR = nh.advertise<std_msgs::Float64>(rightSpinner_topic.c_str() , 1);

		sub = nh.subscribe(laser_topic.c_str(), 1, &CatRobot::callback, this);
	}

	void CatRobot::printCollision(double dist, double angle){
		cout << fixed << setprecision(2) << "Distance: " << dist << " m " << setprecision(0) << "Angle: " << angle << "°"<< endl;
	}

	void CatRobot::callback(const sensor_msgs::PointCloud& msg){
		
		scan = msg;
		
		bool top = false, mid_1= false, mid_2 = false, mid_3 = false, bot = false;
		double min_angle = 1000.0, max_angle = -1000.0;
		double min_distance = 1000.0;
		std_msgs::Float64 wheel_msg, spinner_msg;
		int time = (int) ros::Time::now().toSec();
		double speed = 40.0;
		double spin = 20.0;

		spinner_msg.data = 0.0;
		wheel_msg.data = speed;

		for(int i = 0 ; i < scan.points.size() ; i++){
			double x = scan.points[i].x;
			double y = scan.points[i].y;
			double dist = sqrt(pow(x, 2) + pow(y, 2)) + 0.16; // Acrescentar 0.16 de range minimo do sensor
			double angle = atan(x/y) * 180 / PI;
			double Bottom_Dist = max_laser_dist(18);
			double Medium_1_Dist = max_laser_dist(36);
			double Medium_2_Dist = max_laser_dist(54);
			double Medium_3_Dist = max_laser_dist(72);
			double Top_Dist = 3;

			if(angle < 0){
				angle = 90 + (90 + angle);
			}
			if(i < 199){ // Ignorar sensor 199 propositadamente
				if(dist < Bottom_Dist - 0.01){ // Remover 0.01 devido a inprecisoes do sensor
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
				if(dist < Medium_1_Dist - 0.01){
					mid_1 = true;
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
			else if (i >= 400 && i < 599){ // Ignorar sensor 399 propositadamente
				if(dist < Medium_2_Dist - 0.01){
					mid_2 = true;
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
			else if (i >= 600 && i < 799){ // Ignorar sensor 399 propositadamente
				if(dist < Medium_3_Dist - 0.01){
					mid_3 = true;
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
			else if (i >= 800 && i < 999){ // Ignorar sensor 599 propositadamente
				if(dist < Top_Dist - 0.01){
					top = true;
					if (dist < 1.0) {
						if (angle < min_angle) {
							min_angle = angle;
						}
						if (angle > max_angle) {
							max_angle = angle;
						}
						if (dist < min_distance) {
							min_distance = dist;
						}
					}
					//CatRobot::printCollision(dist, angle);
				}
			}
		}

		if (time > 0 && time % 5 == 0) {
			spinner_msg.data = spin;
			wheel_msg.data = speed;
		}


		string final;
		if(bot || mid_1 || mid_2 || mid_3 || top){
			if(bot)
				final.append("\nMouse Detected NEAR!");
			if(mid_1)
				final.append("\nMouse Detected Medium 1 Range!");
			if(mid_2)
				final.append("\nMouse Detected Medium 2 Range!");
			if(mid_3)
				final.append("\nMouse Detected Medium 3 Range!");
			if(top)
				final.append("\nWall Detected!");
			cout << final << endl;

			cout << fixed << setprecision(0) << "Angle: [" << min_angle << "°, " << max_angle << "°]" << endl;
			cout << fixed << setprecision(2) << "Distance: " << min_distance << "m" << endl;

			double avg;
			avg = (min_angle + max_angle)/2;
			if (avg > 90) {
				spinner_msg.data = top ? spin : -spin;
				spinner_msg.data *= (avg - 90)/100 + 0.1;
				wheel_msg.data = speed;
			} else if (avg < 90) {
				spinner_msg.data = top ? -spin : spin;
				spinner_msg.data *= (90 - avg)/100 + 0.1;
				wheel_msg.data = speed;
			}

			if (bot && min_distance < 0.5) {
				cout << "CATCHED THE MOUSE!" << endl;
				spinner_msg.data = 0.0;
				wheel_msg.data = 0.0;
			} else if (top && min_distance < 0.5) {
				cout << "COLIDED WITH A WALL" << endl;
				spinner_msg.data = 0.0;
				wheel_msg.data = -speed;
			}
		}
		else{
			cout << "All Clear" << endl;
		}
		bot = false;
		mid_1 = false;
		mid_2 = false;
		mid_3 = false;
		top = false;


		ros::Rate(200);
		//cout << "Publishing Message" << endl;

		backL.publish(wheel_msg);
		backR.publish(wheel_msg);
		spinL.publish(spinner_msg);
		spinR.publish(spinner_msg);

		ros::spinOnce();               
	}
 }


