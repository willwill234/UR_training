// Generated by gencpp from file mir_msgs/Encoders.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_ENCODERS_H
#define MIR_MSGS_MESSAGE_ENCODERS_H


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
struct Encoders_
{
  typedef Encoders_<ContainerAllocator> Type;

  Encoders_()
    : time_delta(0.0)
    , left_wheel(0)
    , right_wheel(0)  {
    }
  Encoders_(const ContainerAllocator& _alloc)
    : time_delta(0.0)
    , left_wheel(0)
    , right_wheel(0)  {
  (void)_alloc;
    }



   typedef float _time_delta_type;
  _time_delta_type time_delta;

   typedef int32_t _left_wheel_type;
  _left_wheel_type left_wheel;

   typedef int32_t _right_wheel_type;
  _right_wheel_type right_wheel;





  typedef boost::shared_ptr< ::mir_msgs::Encoders_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::Encoders_<ContainerAllocator> const> ConstPtr;

}; // struct Encoders_

typedef ::mir_msgs::Encoders_<std::allocator<void> > Encoders;

typedef boost::shared_ptr< ::mir_msgs::Encoders > EncodersPtr;
typedef boost::shared_ptr< ::mir_msgs::Encoders const> EncodersConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::Encoders_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::Encoders_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::Encoders_<ContainerAllocator1> & lhs, const ::mir_msgs::Encoders_<ContainerAllocator2> & rhs)
{
  return lhs.time_delta == rhs.time_delta &&
    lhs.left_wheel == rhs.left_wheel &&
    lhs.right_wheel == rhs.right_wheel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::Encoders_<ContainerAllocator1> & lhs, const ::mir_msgs::Encoders_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::Encoders_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::Encoders_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::Encoders_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::Encoders_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::Encoders_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::Encoders_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::Encoders_<ContainerAllocator> >
{
  static const char* value()
  {
    return "265d820a2b35c4bff51c4a1d293ad5c0";
  }

  static const char* value(const ::mir_msgs::Encoders_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x265d820a2b35c4bfULL;
  static const uint64_t static_value2 = 0xf51c4a1d293ad5c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::Encoders_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/Encoders";
  }

  static const char* value(const ::mir_msgs::Encoders_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::Encoders_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 time_delta # Time since last encoder update.\n"
"int32 left_wheel  # Encoder counts (absolute or relative)\n"
"int32 right_wheel # Encoder counts (absolute or relative)\n"
;
  }

  static const char* value(const ::mir_msgs::Encoders_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::Encoders_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_delta);
      stream.next(m.left_wheel);
      stream.next(m.right_wheel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Encoders_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::Encoders_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::Encoders_<ContainerAllocator>& v)
  {
    s << indent << "time_delta: ";
    Printer<float>::stream(s, indent + "  ", v.time_delta);
    s << indent << "left_wheel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.left_wheel);
    s << indent << "right_wheel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.right_wheel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_ENCODERS_H
