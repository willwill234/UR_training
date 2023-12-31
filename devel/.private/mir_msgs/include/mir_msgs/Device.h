// Generated by gencpp from file mir_msgs/Device.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_DEVICE_H
#define MIR_MSGS_MESSAGE_DEVICE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mir_msgs
{
template <class ContainerAllocator>
struct Device_
{
  typedef Device_<ContainerAllocator> Type;

  Device_()
    : name()
    , serial()  {
    }
  Device_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , serial(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _serial_type;
  _serial_type serial;





  typedef boost::shared_ptr< ::mir_msgs::Device_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::Device_<ContainerAllocator> const> ConstPtr;

}; // struct Device_

typedef ::mir_msgs::Device_<std::allocator<void> > Device;

typedef boost::shared_ptr< ::mir_msgs::Device > DevicePtr;
typedef boost::shared_ptr< ::mir_msgs::Device const> DeviceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::Device_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::Device_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::Device_<ContainerAllocator1> & lhs, const ::mir_msgs::Device_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.serial == rhs.serial;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::Device_<ContainerAllocator1> & lhs, const ::mir_msgs::Device_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::Device_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::Device_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::Device_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::Device_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::Device_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::Device_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::Device_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4914eb207f0463464c48e14410d8a949";
  }

  static const char* value(const ::mir_msgs::Device_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4914eb207f046346ULL;
  static const uint64_t static_value2 = 0x4c48e14410d8a949ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::Device_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/Device";
  }

  static const char* value(const ::mir_msgs::Device_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::Device_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"string serial\n"
;
  }

  static const char* value(const ::mir_msgs::Device_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::Device_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.serial);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Device_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::Device_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::Device_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "serial: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.serial);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_DEVICE_H
