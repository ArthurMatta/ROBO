#include "cat_behaviour.h"

using namespace std;

void callback(const sensor_msgs::PointCloud& str)
{
	cout << str << endl;
}

int main(int argc, char ** argv)
{
	cout << "Starting Cat Behaviour in C++" << endl;

	string leftWheel_topic = string("/cat/leftWheel_effort_controller/command");
	string rightWheel_topic = string("/cat/rightWheel_effort_controller/command");
	string laser_topic = string("/cat/laser/scan");

	ros::init(argc, argv, "cat");
	ros::NodeHandle nh;

	ros::Subscriber sub = nh.subscribe(laser_topic.c_str(), 1, callback);
	ros::Publisher pub = nh.advertise<std_msgs::Float64>(leftWheel_topic.c_str() , 1);
	ros::Publisher pub2 = nh.advertise<std_msgs::Float64>(rightWheel_topic.c_str() , 1);

	cout << "Building Message" << endl;

	std_msgs::Float64 message;
	message.data = 20;

	ros::Rate(200);
	cout << "Publishing Message" << endl;

	while(ros::ok)
	{
	   pub.publish(message);
	   pub2.publish(message);
	   ros::spinOnce();               
	}
 }


