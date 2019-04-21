// Generated by gencpp from file fsae_electric_vehicle/vehicle_speed.msg
// DO NOT EDIT!


#ifndef FSAE_ELECTRIC_VEHICLE_MESSAGE_VEHICLE_SPEED_H
#define FSAE_ELECTRIC_VEHICLE_MESSAGE_VEHICLE_SPEED_H


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
struct vehicle_speed_
{
  typedef vehicle_speed_<ContainerAllocator> Type;

  vehicle_speed_()
    : value(0.0)  {
    }
  vehicle_speed_(const ContainerAllocator& _alloc)
    : value(0.0)  {
  (void)_alloc;
    }



   typedef float _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> const> ConstPtr;

}; // struct vehicle_speed_

typedef ::fsae_electric_vehicle::vehicle_speed_<std::allocator<void> > vehicle_speed;

typedef boost::shared_ptr< ::fsae_electric_vehicle::vehicle_speed > vehicle_speedPtr;
typedef boost::shared_ptr< ::fsae_electric_vehicle::vehicle_speed const> vehicle_speedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fsae_electric_vehicle

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'fsae_electric_vehicle': ['/home/nvidia/Github/formulaEmbedded/catkin_ws/src/fsae_electric_vehicle/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0aca93dcf6d857f0e5a0dc6be1eaa9fb";
  }

  static const char* value(const ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0aca93dcf6d857f0ULL;
  static const uint64_t static_value2 = 0xe5a0dc6be1eaa9fbULL;
};

template<class ContainerAllocator>
struct DataType< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fsae_electric_vehicle/vehicle_speed";
  }

  static const char* value(const ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 value\n\
";
  }

  static const char* value(const ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct vehicle_speed_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fsae_electric_vehicle::vehicle_speed_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FSAE_ELECTRIC_VEHICLE_MESSAGE_VEHICLE_SPEED_H
