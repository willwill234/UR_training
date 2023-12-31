// Generated by gencpp from file mir_msgs/BatteryCurrents.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_BATTERYCURRENTS_H
#define MIR_MSGS_MESSAGE_BATTERYCURRENTS_H


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
struct BatteryCurrents_
{
  typedef BatteryCurrents_<ContainerAllocator> Type;

  BatteryCurrents_()
    : battery1_current(0.0)
    , battery2_current(0.0)  {
    }
  BatteryCurrents_(const ContainerAllocator& _alloc)
    : battery1_current(0.0)
    , battery2_current(0.0)  {
  (void)_alloc;
    }



   typedef double _battery1_current_type;
  _battery1_current_type battery1_current;

   typedef double _battery2_current_type;
  _battery2_current_type battery2_current;





  typedef boost::shared_ptr< ::mir_msgs::BatteryCurrents_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::BatteryCurrents_<ContainerAllocator> const> ConstPtr;

}; // struct BatteryCurrents_

typedef ::mir_msgs::BatteryCurrents_<std::allocator<void> > BatteryCurrents;

typedef boost::shared_ptr< ::mir_msgs::BatteryCurrents > BatteryCurrentsPtr;
typedef boost::shared_ptr< ::mir_msgs::BatteryCurrents const> BatteryCurrentsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::BatteryCurrents_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::BatteryCurrents_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::BatteryCurrents_<ContainerAllocator1> & lhs, const ::mir_msgs::BatteryCurrents_<ContainerAllocator2> & rhs)
{
  return lhs.battery1_current == rhs.battery1_current &&
    lhs.battery2_current == rhs.battery2_current;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::BatteryCurrents_<ContainerAllocator1> & lhs, const ::mir_msgs::BatteryCurrents_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::BatteryCurrents_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::BatteryCurrents_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::BatteryCurrents_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::BatteryCurrents_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::BatteryCurrents_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::BatteryCurrents_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::BatteryCurrents_<ContainerAllocator> >
{
  static const char* value()
  {
    return "99e76fe5e1c8183e9d7ded8c13ebdf16";
  }

  static const char* value(const ::mir_msgs::BatteryCurrents_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x99e76fe5e1c8183eULL;
  static const uint64_t static_value2 = 0x9d7ded8c13ebdf16ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::BatteryCurrents_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/BatteryCurrents";
  }

  static const char* value(const ::mir_msgs::BatteryCurrents_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::BatteryCurrents_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 battery1_current\n"
"float64 battery2_current\n"
;
  }

  static const char* value(const ::mir_msgs::BatteryCurrents_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::BatteryCurrents_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.battery1_current);
      stream.next(m.battery2_current);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BatteryCurrents_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::BatteryCurrents_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::BatteryCurrents_<ContainerAllocator>& v)
  {
    s << indent << "battery1_current: ";
    Printer<double>::stream(s, indent + "  ", v.battery1_current);
    s << indent << "battery2_current: ";
    Printer<double>::stream(s, indent + "  ", v.battery2_current);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_BATTERYCURRENTS_H
