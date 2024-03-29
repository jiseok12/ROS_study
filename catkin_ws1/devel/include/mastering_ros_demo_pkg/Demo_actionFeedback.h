// Generated by gencpp from file mastering_ros_demo_pkg/Demo_actionFeedback.msg
// DO NOT EDIT!


#ifndef MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_ACTIONFEEDBACK_H
#define MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_ACTIONFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mastering_ros_demo_pkg
{
template <class ContainerAllocator>
struct Demo_actionFeedback_
{
  typedef Demo_actionFeedback_<ContainerAllocator> Type;

  Demo_actionFeedback_()
    : current_number(0)  {
    }
  Demo_actionFeedback_(const ContainerAllocator& _alloc)
    : current_number(0)  {
  (void)_alloc;
    }



   typedef int32_t _current_number_type;
  _current_number_type current_number;





  typedef boost::shared_ptr< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct Demo_actionFeedback_

typedef ::mastering_ros_demo_pkg::Demo_actionFeedback_<std::allocator<void> > Demo_actionFeedback;

typedef boost::shared_ptr< ::mastering_ros_demo_pkg::Demo_actionFeedback > Demo_actionFeedbackPtr;
typedef boost::shared_ptr< ::mastering_ros_demo_pkg::Demo_actionFeedback const> Demo_actionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator1> & lhs, const ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.current_number == rhs.current_number;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator1> & lhs, const ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mastering_ros_demo_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a34d09927bdf6eea84e4ff079b190b1d";
  }

  static const char* value(const ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa34d09927bdf6eeaULL;
  static const uint64_t static_value2 = 0x84e4ff079b190b1dULL;
};

template<class ContainerAllocator>
struct DataType< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mastering_ros_demo_pkg/Demo_actionFeedback";
  }

  static const char* value(const ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"int32 current_number\n"
"\n"
;
  }

  static const char* value(const ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Demo_actionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mastering_ros_demo_pkg::Demo_actionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "current_number: ";
    Printer<int32_t>::stream(s, indent + "  ", v.current_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_ACTIONFEEDBACK_H
