// Generated by gencpp from file ur_msgs/ToolDataMsg.msg
// DO NOT EDIT!


#ifndef UR_MSGS_MESSAGE_TOOLDATAMSG_H
#define UR_MSGS_MESSAGE_TOOLDATAMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_msgs
{
template <class ContainerAllocator>
struct ToolDataMsg_
{
  typedef ToolDataMsg_<ContainerAllocator> Type;

  ToolDataMsg_()
    : analog_input_range2(0)
    , analog_input_range3(0)
    , analog_input2(0.0)
    , analog_input3(0.0)
    , tool_voltage_48v(0.0)
    , tool_output_voltage(0)
    , tool_current(0.0)
    , tool_temperature(0.0)
    , tool_mode(0)  {
    }
  ToolDataMsg_(const ContainerAllocator& _alloc)
    : analog_input_range2(0)
    , analog_input_range3(0)
    , analog_input2(0.0)
    , analog_input3(0.0)
    , tool_voltage_48v(0.0)
    , tool_output_voltage(0)
    , tool_current(0.0)
    , tool_temperature(0.0)
    , tool_mode(0)  {
  (void)_alloc;
    }



   typedef int8_t _analog_input_range2_type;
  _analog_input_range2_type analog_input_range2;

   typedef int8_t _analog_input_range3_type;
  _analog_input_range3_type analog_input_range3;

   typedef double _analog_input2_type;
  _analog_input2_type analog_input2;

   typedef double _analog_input3_type;
  _analog_input3_type analog_input3;

   typedef float _tool_voltage_48v_type;
  _tool_voltage_48v_type tool_voltage_48v;

   typedef uint8_t _tool_output_voltage_type;
  _tool_output_voltage_type tool_output_voltage;

   typedef float _tool_current_type;
  _tool_current_type tool_current;

   typedef float _tool_temperature_type;
  _tool_temperature_type tool_temperature;

   typedef uint8_t _tool_mode_type;
  _tool_mode_type tool_mode;



  enum {
    ANALOG_INPUT_RANGE_CURRENT = 0,
    ANALOG_INPUT_RANGE_VOLTAGE = 1,
    TOOL_BOOTLOADER_MODE = 249u,
    TOOL_RUNNING_MODE = 253u,
    TOOL_IDLE_MODE = 255u,
  };


  typedef boost::shared_ptr< ::ur_msgs::ToolDataMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_msgs::ToolDataMsg_<ContainerAllocator> const> ConstPtr;

}; // struct ToolDataMsg_

typedef ::ur_msgs::ToolDataMsg_<std::allocator<void> > ToolDataMsg;

typedef boost::shared_ptr< ::ur_msgs::ToolDataMsg > ToolDataMsgPtr;
typedef boost::shared_ptr< ::ur_msgs::ToolDataMsg const> ToolDataMsgConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_msgs::ToolDataMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_msgs::ToolDataMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ur_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ur_msgs': ['/home/zhifeishen/ur5_realsense_calibration_ws/src/ur5_realsense_calibration/universal_robot/ur_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::ToolDataMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::ToolDataMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::ToolDataMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::ToolDataMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::ToolDataMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::ToolDataMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_msgs::ToolDataMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "404fc266f37d89f75b372d12fa94a122";
  }

  static const char* value(const ::ur_msgs::ToolDataMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x404fc266f37d89f7ULL;
  static const uint64_t static_value2 = 0x5b372d12fa94a122ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_msgs::ToolDataMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_msgs/ToolDataMsg";
  }

  static const char* value(const ::ur_msgs::ToolDataMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_msgs::ToolDataMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This data structure contains the ToolData structure\n\
# used by the Universal Robots controller\n\
\n\
int8 ANALOG_INPUT_RANGE_CURRENT = 0\n\
int8 ANALOG_INPUT_RANGE_VOLTAGE = 1\n\
\n\
int8 analog_input_range2 # one of ANALOG_INPUT_RANGE_*\n\
int8 analog_input_range3 # one of ANALOG_INPUT_RANGE_*\n\
float64 analog_input2\n\
float64 analog_input3\n\
float32 tool_voltage_48v\n\
uint8 tool_output_voltage\n\
float32 tool_current\n\
float32 tool_temperature\n\
\n\
uint8 TOOL_BOOTLOADER_MODE = 249\n\
uint8 TOOL_RUNNING_MODE = 253\n\
uint8 TOOL_IDLE_MODE = 255\n\
\n\
uint8 tool_mode # one of TOOL_*\n\
";
  }

  static const char* value(const ::ur_msgs::ToolDataMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_msgs::ToolDataMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.analog_input_range2);
      stream.next(m.analog_input_range3);
      stream.next(m.analog_input2);
      stream.next(m.analog_input3);
      stream.next(m.tool_voltage_48v);
      stream.next(m.tool_output_voltage);
      stream.next(m.tool_current);
      stream.next(m.tool_temperature);
      stream.next(m.tool_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ToolDataMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_msgs::ToolDataMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_msgs::ToolDataMsg_<ContainerAllocator>& v)
  {
    s << indent << "analog_input_range2: ";
    Printer<int8_t>::stream(s, indent + "  ", v.analog_input_range2);
    s << indent << "analog_input_range3: ";
    Printer<int8_t>::stream(s, indent + "  ", v.analog_input_range3);
    s << indent << "analog_input2: ";
    Printer<double>::stream(s, indent + "  ", v.analog_input2);
    s << indent << "analog_input3: ";
    Printer<double>::stream(s, indent + "  ", v.analog_input3);
    s << indent << "tool_voltage_48v: ";
    Printer<float>::stream(s, indent + "  ", v.tool_voltage_48v);
    s << indent << "tool_output_voltage: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tool_output_voltage);
    s << indent << "tool_current: ";
    Printer<float>::stream(s, indent + "  ", v.tool_current);
    s << indent << "tool_temperature: ";
    Printer<float>::stream(s, indent + "  ", v.tool_temperature);
    s << indent << "tool_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tool_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_MSGS_MESSAGE_TOOLDATAMSG_H
