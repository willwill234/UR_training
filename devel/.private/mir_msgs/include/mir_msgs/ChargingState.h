// Generated by gencpp from file mir_msgs/ChargingState.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_CHARGINGSTATE_H
#define MIR_MSGS_MESSAGE_CHARGINGSTATE_H


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
struct ChargingState_
{
  typedef ChargingState_<ContainerAllocator> Type;

  ChargingState_()
    : charging_relay(false)
    , charging_current(0.0)
    , charging_current_raw(0)
    , last_time_current(0.0)
    , charging_voltage(0.0)
    , charging_voltage_raw(0)
    , is_voltage_low(false)
    , last_time_voltage(0.0)  {
    }
  ChargingState_(const ContainerAllocator& _alloc)
    : charging_relay(false)
    , charging_current(0.0)
    , charging_current_raw(0)
    , last_time_current(0.0)
    , charging_voltage(0.0)
    , charging_voltage_raw(0)
    , is_voltage_low(false)
    , last_time_voltage(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _charging_relay_type;
  _charging_relay_type charging_relay;

   typedef double _charging_current_type;
  _charging_current_type charging_current;

   typedef uint32_t _charging_current_raw_type;
  _charging_current_raw_type charging_current_raw;

   typedef double _last_time_current_type;
  _last_time_current_type last_time_current;

   typedef double _charging_voltage_type;
  _charging_voltage_type charging_voltage;

   typedef uint32_t _charging_voltage_raw_type;
  _charging_voltage_raw_type charging_voltage_raw;

   typedef uint8_t _is_voltage_low_type;
  _is_voltage_low_type is_voltage_low;

   typedef double _last_time_voltage_type;
  _last_time_voltage_type last_time_voltage;





  typedef boost::shared_ptr< ::mir_msgs::ChargingState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::ChargingState_<ContainerAllocator> const> ConstPtr;

}; // struct ChargingState_

typedef ::mir_msgs::ChargingState_<std::allocator<void> > ChargingState;

typedef boost::shared_ptr< ::mir_msgs::ChargingState > ChargingStatePtr;
typedef boost::shared_ptr< ::mir_msgs::ChargingState const> ChargingStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::ChargingState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::ChargingState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::ChargingState_<ContainerAllocator1> & lhs, const ::mir_msgs::ChargingState_<ContainerAllocator2> & rhs)
{
  return lhs.charging_relay == rhs.charging_relay &&
    lhs.charging_current == rhs.charging_current &&
    lhs.charging_current_raw == rhs.charging_current_raw &&
    lhs.last_time_current == rhs.last_time_current &&
    lhs.charging_voltage == rhs.charging_voltage &&
    lhs.charging_voltage_raw == rhs.charging_voltage_raw &&
    lhs.is_voltage_low == rhs.is_voltage_low &&
    lhs.last_time_voltage == rhs.last_time_voltage;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::ChargingState_<ContainerAllocator1> & lhs, const ::mir_msgs::ChargingState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::ChargingState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::ChargingState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::ChargingState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::ChargingState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::ChargingState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::ChargingState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::ChargingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1393c08007cacc5b837577273ba19ce7";
  }

  static const char* value(const ::mir_msgs::ChargingState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1393c08007cacc5bULL;
  static const uint64_t static_value2 = 0x837577273ba19ce7ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::ChargingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/ChargingState";
  }

  static const char* value(const ::mir_msgs::ChargingState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::ChargingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool charging_relay\n"
"float64 charging_current\n"
"uint32 charging_current_raw\n"
"float64 last_time_current\n"
"\n"
"float64 charging_voltage\n"
"uint32 charging_voltage_raw\n"
"bool is_voltage_low\n"
"float64 last_time_voltage\n"
"\n"
;
  }

  static const char* value(const ::mir_msgs::ChargingState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::ChargingState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.charging_relay);
      stream.next(m.charging_current);
      stream.next(m.charging_current_raw);
      stream.next(m.last_time_current);
      stream.next(m.charging_voltage);
      stream.next(m.charging_voltage_raw);
      stream.next(m.is_voltage_low);
      stream.next(m.last_time_voltage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChargingState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::ChargingState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::ChargingState_<ContainerAllocator>& v)
  {
    s << indent << "charging_relay: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charging_relay);
    s << indent << "charging_current: ";
    Printer<double>::stream(s, indent + "  ", v.charging_current);
    s << indent << "charging_current_raw: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.charging_current_raw);
    s << indent << "last_time_current: ";
    Printer<double>::stream(s, indent + "  ", v.last_time_current);
    s << indent << "charging_voltage: ";
    Printer<double>::stream(s, indent + "  ", v.charging_voltage);
    s << indent << "charging_voltage_raw: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.charging_voltage_raw);
    s << indent << "is_voltage_low: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_voltage_low);
    s << indent << "last_time_voltage: ";
    Printer<double>::stream(s, indent + "  ", v.last_time_voltage);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_CHARGINGSTATE_H