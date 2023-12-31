// Generated by gencpp from file mir_msgs/HookStatus.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_HOOKSTATUS_H
#define MIR_MSGS_MESSAGE_HOOKSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mir_msgs/Trolley.h>

namespace mir_msgs
{
template <class ContainerAllocator>
struct HookStatus_
{
  typedef HookStatus_<ContainerAllocator> Type;

  HookStatus_()
    : available(false)
    , length(0.0)
    , height(0.0)
    , angle(0.0)
    , braked(false)
    , trolley_attached(false)
    , trolley()  {
    }
  HookStatus_(const ContainerAllocator& _alloc)
    : available(false)
    , length(0.0)
    , height(0.0)
    , angle(0.0)
    , braked(false)
    , trolley_attached(false)
    , trolley(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _available_type;
  _available_type available;

   typedef float _length_type;
  _length_type length;

   typedef float _height_type;
  _height_type height;

   typedef float _angle_type;
  _angle_type angle;

   typedef uint8_t _braked_type;
  _braked_type braked;

   typedef uint8_t _trolley_attached_type;
  _trolley_attached_type trolley_attached;

   typedef  ::mir_msgs::Trolley_<ContainerAllocator>  _trolley_type;
  _trolley_type trolley;





  typedef boost::shared_ptr< ::mir_msgs::HookStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::HookStatus_<ContainerAllocator> const> ConstPtr;

}; // struct HookStatus_

typedef ::mir_msgs::HookStatus_<std::allocator<void> > HookStatus;

typedef boost::shared_ptr< ::mir_msgs::HookStatus > HookStatusPtr;
typedef boost::shared_ptr< ::mir_msgs::HookStatus const> HookStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::HookStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::HookStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::HookStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::HookStatus_<ContainerAllocator2> & rhs)
{
  return lhs.available == rhs.available &&
    lhs.length == rhs.length &&
    lhs.height == rhs.height &&
    lhs.angle == rhs.angle &&
    lhs.braked == rhs.braked &&
    lhs.trolley_attached == rhs.trolley_attached &&
    lhs.trolley == rhs.trolley;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::HookStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::HookStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::HookStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::HookStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::HookStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::HookStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::HookStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::HookStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::HookStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1bce86e4d0caff20e36c78d3bd47f560";
  }

  static const char* value(const ::mir_msgs::HookStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1bce86e4d0caff20ULL;
  static const uint64_t static_value2 = 0xe36c78d3bd47f560ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::HookStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/HookStatus";
  }

  static const char* value(const ::mir_msgs::HookStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::HookStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool available\n"
"float32 length\n"
"float32 height\n"
"float32 angle\n"
"bool braked\n"
"\n"
"bool trolley_attached\n"
"Trolley trolley\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/Trolley\n"
"int32 id\n"
"float32 length\n"
"float32 width\n"
"float32 height\n"
"float32 offset_locked_wheels\n"
;
  }

  static const char* value(const ::mir_msgs::HookStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::HookStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.available);
      stream.next(m.length);
      stream.next(m.height);
      stream.next(m.angle);
      stream.next(m.braked);
      stream.next(m.trolley_attached);
      stream.next(m.trolley);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HookStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::HookStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::HookStatus_<ContainerAllocator>& v)
  {
    s << indent << "available: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.available);
    s << indent << "length: ";
    Printer<float>::stream(s, indent + "  ", v.length);
    s << indent << "height: ";
    Printer<float>::stream(s, indent + "  ", v.height);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "braked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.braked);
    s << indent << "trolley_attached: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.trolley_attached);
    s << indent << "trolley: ";
    s << std::endl;
    Printer< ::mir_msgs::Trolley_<ContainerAllocator> >::stream(s, indent + "  ", v.trolley);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_HOOKSTATUS_H
