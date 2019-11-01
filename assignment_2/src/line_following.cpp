#include "../lib/line_following.h"

using namespace std;

namespace line_following_robot
{
    LineFollowing::LineFollowing(int argc, char **argv){

    }

    LineFollowing::~LineFollowing(void){}

    void LineFollowing::callback(const sensor_msgs::LaserScan& msg){

    }

    float LineFollowing::Rad2Deg(float radian)
    {
        return radian * (180/PI);
    }

    float LineFollowing::Deg2Rad(float degree)
    {
        return degree * (PI/180);
    }
}