#include "../lib/line_following.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "stdr_line_following", ros::init_options::AnonymousName);
    line_following_robot::LineFollowing obj(argc, argv);
    ros::spin();
    return 0;
}