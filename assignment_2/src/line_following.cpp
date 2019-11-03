#include "../include/line_following.h"

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
            ROS_ERROR("Usage: robot_linefollow_node <robot_id> <laser_id>");
            exit(-1);
        }

        laser_topic = string("/") + string(argv[1]) + string("/") + string(argv[2]);
        speeds_topic = string("/") + string(argv[1]) + string("/cmd_vel");
        subscriber = n.subscribe(laser_topic.c_str(), 1, &LineFollowing::callback, this);
        cmd_vel_pub = n.advertise<geometry_msgs::Twist>(speeds_topic.c_str(), 1);
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

        // Set distances as maximum value
        map<string, float> distances;
        distances.insert(make_pair("Front", numeric_limits<float>::max()));
        distances.insert(make_pair("Left", numeric_limits<float>::max()));
        distances.insert(make_pair("Right", numeric_limits<float>::max()));

        // Robot parameters
        float robotAngle;
        float robotDistance;
        float alpha;

        // Sensor parameters
        float sensorDistance;
        float sensorAngle;

        // Constants
        const float K = 15;
        const float idealDistance = 1.0;

        for (size_t i = 0; i < scan.ranges.size(); i++)
        {
            sensorDistance = scan.ranges[i];
            sensorAngle = Rad2Deg(scan.angle_min) + Rad2Deg(scan.angle_increment) * i;

            // Frontal sensors
            if (sensorAngle >= -15 && sensorAngle <= 15)
            {
                if (sensorDistance < distances["Front"])
                {
                    distances["Front"] = sensorDistance;
                }
            }
            // Left side sensors
            else if (sensorAngle > 15 && sensorAngle <= 100)
            {
                if (sensorDistance < distances["Left"])
                {
                    robotAngle = sensorAngle;
                    distances["Left"] = sensorDistance;
                }
            }
            // Right side sensors
            else if (sensorAngle >= -100 && sensorAngle < -15)
            {
                if (sensorDistance < distances["Right"])
                {
                    robotAngle = sensorAngle;
                    distances["Right"] = sensorDistance;
                }
            }
        }

        robotDistance = min(distances["Left"], distances["Right"]);
        alpha = 90.0 - abs(robotAngle);
    
        // Wall is within sensor's range
        if (robotDistance <= scan.range_max)
        {
            cout << "====================" << endl
                 << "Action = Walking" << endl
                 << "Wall distance = " << robotDistance << "m" << endl
                 << "Alpha = " << alpha << endl;

            cmd.linear.x = 0.5;
            cmd.angular.z = -K * (sin(Deg2Rad(alpha)) - (robotDistance - idealDistance)) * cmd.linear.x;
        }
        // Initial movement
        else
        {
            cout << "====================" << endl
                 << "Action = Wandering" << endl
                 << "Wall distance = " << robotDistance << "m" << endl
                 << "Alpha = " << alpha << endl;

            cmd.linear.x = 0.5;
            cmd.angular.z = 0.0;
        }
        
        if (distances["Front"] <= idealDistance &&
            distances["Left"] < scan.range_max &&
            distances["Right"] < scan.range_max)
        {
            cout << "====================" << endl
                 << "Action = Cornering" << endl
                 << "Wall distance = " << robotDistance << "m" << endl
                 << "Alpha = " << alpha << endl;
            cmd.linear.x = 0.1;
            cmd.angular.z = -K * (sin(Deg2Rad(alpha)) - (robotDistance - idealDistance)) * cmd.linear.x;
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