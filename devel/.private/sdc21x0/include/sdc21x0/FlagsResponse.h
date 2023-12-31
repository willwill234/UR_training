// Generated by gencpp from file sdc21x0/FlagsResponse.msg
// DO NOT EDIT!


#ifndef SDC21X0_MESSAGE_FLAGSRESPONSE_H
#define SDC21X0_MESSAGE_FLAGSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sdc21x0
{
template <class ContainerAllocator>
struct FlagsResponse_
{
  typedef FlagsResponse_<ContainerAllocator> Type;

  FlagsResponse_()
    : response(false)  {
    }
  FlagsResponse_(const ContainerAllocator& _alloc)
    : response(false)  {
  (void)_alloc;
    }



   typedef uint8_t _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::sdc21x0::FlagsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sdc21x0::FlagsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FlagsResponse_

typedef ::sdc21x0::FlagsResponse_<std::allocator<void> > FlagsResponse;

typedef boost::shared_ptr< ::sdc21x0::FlagsResponse > FlagsResponsePtr;
typedef boost::shared_ptr< ::sdc21x0::FlagsResponse const> FlagsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sdc21x0::FlagsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sdc21x0::FlagsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sdc21x0::FlagsResponse_<ContainerAllocator1> & lhs, const ::sdc21x0::FlagsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.response == rhs.response;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sdc21x0::FlagsResponse_<ContainerAllocator1> & lhs, const ::sdc21x0::FlagsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sdc21x0

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sdc21x0::FlagsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sdc21x0::FlagsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sdc21x0::FlagsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sdc21x0::FlagsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdc21x0::FlagsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdc21x0::FlagsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sdc21x0::FlagsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "003b81baa95ab323fc1ddf3c7d0bee81";
  }

  static const char* value(const ::sdc21x0::FlagsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x003b81baa95ab323ULL;
  static const uint64_t static_value2 = 0xfc1ddf3c7d0bee81ULL;
};

template<class ContainerAllocator>
struct DataType< ::sdc21x0::FlagsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sdc21x0/FlagsResponse";
  }

  static const char* value(const ::sdc21x0::FlagsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sdc21x0::FlagsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool response\n"
"\n"
;
  }

  static const char* value(const ::sdc21x0::FlagsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sdc21x0::FlagsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FlagsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sdc21x0::FlagsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sdc21x0::FlagsResponse_<ContainerAllocator>& v)
  {
    s << indent << "response: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SDC21X0_MESSAGE_FLAGSRESPONSE_H
