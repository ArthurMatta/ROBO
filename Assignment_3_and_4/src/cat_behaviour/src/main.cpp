#include "cat_behaviour.h"

using namespace std;

int main(int argc, char ** argv)
{
	ros::init(argc, argv, "cat", ros::init_options::AnonymousName);
	cat_robot::CatRobot obj(argc, argv);
    ros::spin();
	return 0;
 }


