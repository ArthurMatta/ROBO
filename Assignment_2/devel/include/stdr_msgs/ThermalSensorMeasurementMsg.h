// Generated by gencpp from file stdr_msgs/ThermalSensorMeasurementMsg.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_THERMALSENSORMEASUREMENTMSG_H
#define STDR_MSGS_MESSAGE_THERMALSENSORMEASUREMENTMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct ThermalSensorMeasurementMsg_
{
  typedef ThermalSensorMeasurementMsg_<ContainerAllocator> Type;

  ThermalSensorMeasurementMsg_()
    : header()
    , thermal_source_degrees()  {
    }
  ThermalSensorMeasurementMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , thermal_source_degrees(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _thermal_source_degrees_type;
  _thermal_source_degrees_type thermal_source_degrees;





  typedef boost::shared_ptr< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> const> ConstPtr;

}; // struct ThermalSensorMeasurementMsg_

typedef ::stdr_msgs::ThermalSensorMeasurementMsg_<std::allocator<void> > ThermalSensorMeasurementMsg;

typedef boost::shared_ptr< ::stdr_msgs::ThermalSensorMeasurementMsg > ThermalSensorMeasurementMsgPtr;
typedef boost::shared_ptr< ::stdr_msgs::ThermalSensorMeasurementMsg const> ThermalSensorMeasurementMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/melodic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/home/parallels/Documents/FEUP/ROBO/Assignment_2/src/stdr_simulator/stdr_msgs/msg', '/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4b704fefcd6eb849f164e31d5084251";
  }

  static const char* value(const ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4b704fefcd6eb84ULL;
  static const uint64_t static_value2 = 0x9f164e31d5084251ULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/ThermalSensorMeasurementMsg";
  }

  static const char* value(const ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Sensor measurement description\n"
"\n"
"Header header\n"
"\n"
"float32[] thermal_source_degrees\n"
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
;
  }

  static const char* value(const ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.thermal_source_degrees);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ThermalSensorMeasurementMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::ThermalSensorMeasurementMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "thermal_source_degrees[]" << std::endl;
    for (size_t i = 0; i < v.thermal_source_degrees.size(); ++i)
    {
      s << indent << "  thermal_source_degrees[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.thermal_source_degrees[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_THERMALSENSORMEASUREMENTMSG_H
