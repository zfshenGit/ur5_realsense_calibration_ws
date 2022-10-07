// Generated by gencpp from file realsense2_camera/DeviceInfoResponse.msg
// DO NOT EDIT!


#ifndef REALSENSE2_CAMERA_MESSAGE_DEVICEINFORESPONSE_H
#define REALSENSE2_CAMERA_MESSAGE_DEVICEINFORESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace realsense2_camera
{
template <class ContainerAllocator>
struct DeviceInfoResponse_
{
  typedef DeviceInfoResponse_<ContainerAllocator> Type;

  DeviceInfoResponse_()
    : device_name()
    , serial_number()
    , firmware_version()
    , usb_type_descriptor()
    , firmware_update_id()
    , sensors()  {
    }
  DeviceInfoResponse_(const ContainerAllocator& _alloc)
    : device_name(_alloc)
    , serial_number(_alloc)
    , firmware_version(_alloc)
    , usb_type_descriptor(_alloc)
    , firmware_update_id(_alloc)
    , sensors(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _device_name_type;
  _device_name_type device_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _serial_number_type;
  _serial_number_type serial_number;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _firmware_version_type;
  _firmware_version_type firmware_version;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _usb_type_descriptor_type;
  _usb_type_descriptor_type usb_type_descriptor;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _firmware_update_id_type;
  _firmware_update_id_type firmware_update_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sensors_type;
  _sensors_type sensors;





  typedef boost::shared_ptr< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DeviceInfoResponse_

typedef ::realsense2_camera::DeviceInfoResponse_<std::allocator<void> > DeviceInfoResponse;

typedef boost::shared_ptr< ::realsense2_camera::DeviceInfoResponse > DeviceInfoResponsePtr;
typedef boost::shared_ptr< ::realsense2_camera::DeviceInfoResponse const> DeviceInfoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace realsense2_camera

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'realsense2_camera': ['/home/zhifeishen/ur5_realsense_calibration_ws/src/ur5_realsense_calibration/realsense-ros/realsense2_camera/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "914e9cfa74a4f66f08c3fe1016943c1b";
  }

  static const char* value(const ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x914e9cfa74a4f66fULL;
  static const uint64_t static_value2 = 0x08c3fe1016943c1bULL;
};

template<class ContainerAllocator>
struct DataType< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "realsense2_camera/DeviceInfoResponse";
  }

  static const char* value(const ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string device_name\n\
string serial_number\n\
string firmware_version\n\
string usb_type_descriptor\n\
string firmware_update_id\n\
string sensors\n\
\n\
";
  }

  static const char* value(const ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.device_name);
      stream.next(m.serial_number);
      stream.next(m.firmware_version);
      stream.next(m.usb_type_descriptor);
      stream.next(m.firmware_update_id);
      stream.next(m.sensors);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeviceInfoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::realsense2_camera::DeviceInfoResponse_<ContainerAllocator>& v)
  {
    s << indent << "device_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.device_name);
    s << indent << "serial_number: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.serial_number);
    s << indent << "firmware_version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.firmware_version);
    s << indent << "usb_type_descriptor: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.usb_type_descriptor);
    s << indent << "firmware_update_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.firmware_update_id);
    s << indent << "sensors: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sensors);
  }
};

} // namespace message_operations
} // namespace ros

#endif // REALSENSE2_CAMERA_MESSAGE_DEVICEINFORESPONSE_H
