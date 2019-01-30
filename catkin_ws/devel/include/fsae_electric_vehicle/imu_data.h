// Generated by gencpp from file fsae_electric_vehicle/imu_data.msg
// DO NOT EDIT!


#ifndef FSAE_ELECTRIC_VEHICLE_MESSAGE_IMU_DATA_H
#define FSAE_ELECTRIC_VEHICLE_MESSAGE_IMU_DATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fsae_electric_vehicle
{
template <class ContainerAllocator>
struct imu_data_
{
  typedef imu_data_<ContainerAllocator> Type;

  imu_data_()
    : gyro_x(0.0)
    , gyro_y(0.0)
    , gyro_z(0.0)
    , gyro_time()
    , accel_x(0.0)
    , accel_y(0.0)
    , accel_z(0.0)
    , accel_time()
    , compass_x(0.0)
    , compass_y(0.0)
    , compass_z(0.0)
    , compass_time()  {
    }
  imu_data_(const ContainerAllocator& _alloc)
    : gyro_x(0.0)
    , gyro_y(0.0)
    , gyro_z(0.0)
    , gyro_time(_alloc)
    , accel_x(0.0)
    , accel_y(0.0)
    , accel_z(0.0)
    , accel_time(_alloc)
    , compass_x(0.0)
    , compass_y(0.0)
    , compass_z(0.0)
    , compass_time(_alloc)  {
  (void)_alloc;
    }



   typedef float _gyro_x_type;
  _gyro_x_type gyro_x;

   typedef float _gyro_y_type;
  _gyro_y_type gyro_y;

   typedef float _gyro_z_type;
  _gyro_z_type gyro_z;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _gyro_time_type;
  _gyro_time_type gyro_time;

   typedef float _accel_x_type;
  _accel_x_type accel_x;

   typedef float _accel_y_type;
  _accel_y_type accel_y;

   typedef float _accel_z_type;
  _accel_z_type accel_z;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _accel_time_type;
  _accel_time_type accel_time;

   typedef float _compass_x_type;
  _compass_x_type compass_x;

   typedef float _compass_y_type;
  _compass_y_type compass_y;

   typedef float _compass_z_type;
  _compass_z_type compass_z;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _compass_time_type;
  _compass_time_type compass_time;





  typedef boost::shared_ptr< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> const> ConstPtr;

}; // struct imu_data_

typedef ::fsae_electric_vehicle::imu_data_<std::allocator<void> > imu_data;

typedef boost::shared_ptr< ::fsae_electric_vehicle::imu_data > imu_dataPtr;
typedef boost::shared_ptr< ::fsae_electric_vehicle::imu_data const> imu_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fsae_electric_vehicle::imu_data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fsae_electric_vehicle

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'fsae_electric_vehicle': ['/home/nvidia/Desktop/jetsonTx2/catkin_ws/src/fsae_electric_vehicle/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "96e2fc03b6486059b9ae94e0a184b112";
  }

  static const char* value(const ::fsae_electric_vehicle::imu_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x96e2fc03b6486059ULL;
  static const uint64_t static_value2 = 0xb9ae94e0a184b112ULL;
};

template<class ContainerAllocator>
struct DataType< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fsae_electric_vehicle/imu_data";
  }

  static const char* value(const ::fsae_electric_vehicle::imu_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 gyro_x \n\
float32 gyro_y \n\
float32 gyro_z \n\
string gyro_time\n\
float32 accel_x \n\
float32 accel_y \n\
float32 accel_z \n\
string accel_time\n\
float32 compass_x \n\
float32 compass_y \n\
float32 compass_z \n\
string compass_time\n\
";
  }

  static const char* value(const ::fsae_electric_vehicle::imu_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gyro_x);
      stream.next(m.gyro_y);
      stream.next(m.gyro_z);
      stream.next(m.gyro_time);
      stream.next(m.accel_x);
      stream.next(m.accel_y);
      stream.next(m.accel_z);
      stream.next(m.accel_time);
      stream.next(m.compass_x);
      stream.next(m.compass_y);
      stream.next(m.compass_z);
      stream.next(m.compass_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct imu_data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fsae_electric_vehicle::imu_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fsae_electric_vehicle::imu_data_<ContainerAllocator>& v)
  {
    s << indent << "gyro_x: ";
    Printer<float>::stream(s, indent + "  ", v.gyro_x);
    s << indent << "gyro_y: ";
    Printer<float>::stream(s, indent + "  ", v.gyro_y);
    s << indent << "gyro_z: ";
    Printer<float>::stream(s, indent + "  ", v.gyro_z);
    s << indent << "gyro_time: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.gyro_time);
    s << indent << "accel_x: ";
    Printer<float>::stream(s, indent + "  ", v.accel_x);
    s << indent << "accel_y: ";
    Printer<float>::stream(s, indent + "  ", v.accel_y);
    s << indent << "accel_z: ";
    Printer<float>::stream(s, indent + "  ", v.accel_z);
    s << indent << "accel_time: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.accel_time);
    s << indent << "compass_x: ";
    Printer<float>::stream(s, indent + "  ", v.compass_x);
    s << indent << "compass_y: ";
    Printer<float>::stream(s, indent + "  ", v.compass_y);
    s << indent << "compass_z: ";
    Printer<float>::stream(s, indent + "  ", v.compass_z);
    s << indent << "compass_time: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.compass_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FSAE_ELECTRIC_VEHICLE_MESSAGE_IMU_DATA_H
