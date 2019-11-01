// Generated by gencpp from file stdr_msgs/SpawnRobotActionResult.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_SPAWNROBOTACTIONRESULT_H
#define STDR_MSGS_MESSAGE_SPAWNROBOTACTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalStatus.h>
#include <stdr_msgs/SpawnRobotResult.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct SpawnRobotActionResult_
{
  typedef SpawnRobotActionResult_<ContainerAllocator> Type;

  SpawnRobotActionResult_()
    : header()
    , status()
    , result()  {
    }
  SpawnRobotActionResult_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(_alloc)
    , result(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef  ::stdr_msgs::SpawnRobotResult_<ContainerAllocator>  _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> const> ConstPtr;

}; // struct SpawnRobotActionResult_

typedef ::stdr_msgs::SpawnRobotActionResult_<std::allocator<void> > SpawnRobotActionResult;

typedef boost::shared_ptr< ::stdr_msgs::SpawnRobotActionResult > SpawnRobotActionResultPtr;
typedef boost::shared_ptr< ::stdr_msgs::SpawnRobotActionResult const> SpawnRobotActionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/melodic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/home/parallels/catkin_ws/src/stdr_simulator/stdr_msgs/msg', '/home/parallels/catkin_ws/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f95a810c7b5f2579dca2ec191de2a05c";
  }

  static const char* value(const ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf95a810c7b5f2579ULL;
  static const uint64_t static_value2 = 0xdca2ec191de2a05cULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/SpawnRobotActionResult";
  }

  static const char* value(const ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"SpawnRobotResult result\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/SpawnRobotResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"stdr_msgs/RobotIndexedMsg indexedDescription\n"
"string message\n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/RobotIndexedMsg\n"
"string name\n"
"stdr_msgs/RobotMsg robot\n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/RobotMsg\n"
"geometry_msgs/Pose2D initialPose\n"
"\n"
"stdr_msgs/FootprintMsg footprint\n"
"\n"
"stdr_msgs/LaserSensorMsg[] laserSensors\n"
"stdr_msgs/SonarSensorMsg[] sonarSensors\n"
"stdr_msgs/RfidSensorMsg[] rfidSensors\n"
"stdr_msgs/CO2SensorMsg[] co2Sensors\n"
"stdr_msgs/SoundSensorMsg[] soundSensors\n"
"stdr_msgs/ThermalSensorMsg[] thermalSensors\n"
"\n"
"stdr_msgs/KinematicMsg kinematicModel\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/FootprintMsg\n"
"geometry_msgs/Point[] points\n"
"float32 radius # for circular footprints\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/LaserSensorMsg\n"
"# Laser Sensor description\n"
"float32 maxAngle\n"
"float32 minAngle\n"
"float32 maxRange\n"
"float32 minRange\n"
"int32 numRays\n"
"\n"
"stdr_msgs/Noise noise\n"
"\n"
"float32 frequency\n"
"\n"
"string frame_id\n"
"geometry_msgs/Pose2D pose # sensor pose, relative to robot center\n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/Noise\n"
"bool noise\n"
"float32 noiseMean\n"
"float32 noiseStd\n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/SonarSensorMsg\n"
"# Rfid sensor description\n"
"float32 maxRange\n"
"float32 minRange\n"
"float32 coneAngle\n"
"\n"
"float32 frequency\n"
"stdr_msgs/Noise noise\n"
"\n"
"string frame_id\n"
"geometry_msgs/Pose2D pose # sensor pose, relative to robot center\n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/RfidSensorMsg\n"
"# Rfid sensor description\n"
"float32 maxRange\n"
"float32 angleSpan\n"
"float32 signalCutoff\n"
"\n"
"float32 frequency\n"
"\n"
"string frame_id\n"
"geometry_msgs/Pose2D pose # sensor pose, relative to robot center\n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/CO2SensorMsg\n"
"# Sensor description\n"
"\n"
"float32 maxRange\n"
"float32 frequency\n"
"string frame_id\n"
"\n"
"# sensor pose, relative to robot center\n"
"geometry_msgs/Pose2D pose \n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/SoundSensorMsg\n"
"# Sensor description\n"
"\n"
"float32 maxRange\n"
"float32 frequency\n"
"float32 angleSpan\n"
"string frame_id\n"
"\n"
"# sensor pose, relative to robot center\n"
"geometry_msgs/Pose2D pose \n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/ThermalSensorMsg\n"
"# Sensor description\n"
"\n"
"float32 maxRange\n"
"float32 frequency\n"
"float32 angleSpan\n"
"string frame_id\n"
"\n"
"# sensor pose, relative to robot center\n"
"geometry_msgs/Pose2D pose \n"
"\n"
"================================================================================\n"
"MSG: stdr_msgs/KinematicMsg\n"
"# Container for the kinematic model parameters. The parameters selected/\n"
"# are quite general. For a more accurate motion model a per-kinematic model\n"
"# approach should be followed.\n"
"# Parameters are in the form a_C_D, where C is affected by D.\n"
"# ux is the linear speed\n"
"# uy is the lateral speed (for omni vehicles)\n"
"# w is the angular speed\n"
"# g is a cofficient that directly affects the angular speed\n"
"# For more information check the MotionController::sampleVelocities function.\n"
"\n"
"string type\n"
"float32 a_ux_ux\n"
"float32 a_ux_uy\n"
"float32 a_ux_w\n"
"float32 a_uy_ux\n"
"float32 a_uy_uy\n"
"float32 a_uy_w\n"
"float32 a_w_ux\n"
"float32 a_w_uy\n"
"float32 a_w_w\n"
"float32 a_g_ux\n"
"float32 a_g_uy\n"
"float32 a_g_w\n"
;
  }

  static const char* value(const ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SpawnRobotActionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::SpawnRobotActionResult_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "result: ";
    s << std::endl;
    Printer< ::stdr_msgs::SpawnRobotResult_<ContainerAllocator> >::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_SPAWNROBOTACTIONRESULT_H
