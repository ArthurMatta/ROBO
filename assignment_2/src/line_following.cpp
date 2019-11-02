#include "../lib/line_following.h"

using namespace std;

namespace line_following_robot
{
    /**
     * @brief Default constructor
     * @param argc [int] Arguments Count
     * @param argv [char **] Arguments Value
     * @return void
     */
    LineFollowing::LineFollowing(int argc, char **argv){
        if (argc != 3)
        {
            ROS_ERROR("Usage: line_following_robot <robot_id> <laser_id>");
            exit(-1);
        }

        laser_topic = string("/") + string(argv[1]) + string("/") + string(argv[2]);
        speeds_topic = string("/") + string(argv[1]) + string("/cmd_vel");
        subscriber = n.subscribe(laser_topic.c_str(), 1, &LineFollowing::callback, this);
        cmd_vel_pub = n.advertise<geometry_msgs::Twist>(speeds_topic.c_str, 1);
    }

    /**
     * @brief Default destructor
     * @return void
     */
    LineFollowing::~LineFollowing(void){}

    /**
     * @brief Callback function for the ROS laser message
     * @param msg [const sensor_msgs::LaserScan] Laser scan message
     * @return void
     */
    void LineFollowing::callback(const sensor_msgs::LaserScan& msg){
        scan = msg;
        geometry_msgs::Twist cmd;
        map<string, float> distances;
        distances.insert(make_pair("Front", numeric_limits<float>::max()));
        distances.insert(make_pair("Left", numeric_limits<float>::max()));
        distances.insert(make_pair("Right", numeric_limits<float>::max()));
        float robotAngle = 0.0;
        float distance;
        float angle;
        float alpha;
        float turningAngle = 0;
        const float K = 15;
        const float idealDistance = 1.5;

        for (size_t i = 0; i < scan.ranges.size(); i++)
        {
            distance = scan.ranges[i];
            angle = Rad2Deg(scan.angle_min) + Rad2Deg(scan.angle_increment) * i;

            // Front
            if (angle >= -15 && angle <= 15)
            {
                if (distance < distances["Front"])
                {
                    distances["Front"] = distance;
                }
            }
            // Left side
            if (angle >= 0 && angle <= 120)
            {
                if (distance < distances["Left"])
                {
                    robotAngle = angle;
                    distances["Left"] = distance;
                }
            }
            // Right side
            else if (angle >= -120 && angle <= 0)
            {
                if (distance < distances["Right"])
                {
                    robotAngle = angle;
                    distances["Right"] = distance;
                }
            }
        }

        distance = min(distances["Left"], distances["Right"]);
        alpha = 90.0 - abs(robotAngle);
    
        // Within sensor's range
        if (distance <= scan.range_max)
        {
            cout << "========== Walking ==========" << endl
                 << "Distance from wall = " << distance << endl
                 << "Alpha = " << alpha << endl;

            cmd.linear.x = 0.5;
            cmd.angular.z = -K * (sin(Deg2Rad(alpha)) - (distance - idealDistance)) * cmd.linear.x;
        }
        // Initial movement
        else
        {
           cmd.linear.x = 0.5;
           cmd.angular.z = 0.0; 
        }
        
        if (distances["Front"] <= idealDistance &&
            distances["Left"] < scan.range_max &&
            distances["Right"] < scan.range_max)
        {
            cout << "========= Stoping ==========" << endl
                << "Distances:" << endl
                << "Front = " << distances["Front"] << endl
                << "Left = " << distances["Left"] << endl
                << "Right = " << distances["Right"] << endl;
            cmd.linear.x = 0.0;
            cmd.angular.z = 0.0;
        }

        // Send movement command
        cmd_vel_pub.publish(cmd);
    }

    /**
     * @brief Converts Radians to Degrees
     * @param radian [float] Value in radians
     * @return [float] Value in degrees
     */
    float LineFollowing::Rad2Deg(float radian)
    {
        return radian * (180/PI);
    }

    /**
     * @brief Converts Degrees to Radians
     * @param degree [float] Value in degrees
     * @return [float] Value in radians
     */
    float LineFollowing::Deg2Rad(float degree)
    {
        return degree * (PI/180);
    }
}