// Generated by gencpp from file mastering_ros_demo_pkg/demo_srvResponse.msg
// DO NOT EDIT!


#ifndef MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_SRVRESPONSE_H
#define MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_SRVRESPONSE_H


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
struct demo_srvResponse_
{
  typedef demo_srvResponse_<ContainerAllocator> Type;

  demo_srvResponse_()
    : out()  {
    }
  demo_srvResponse_(const ContainerAllocator& _alloc)
    : out(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _out_type;
  _out_type out;





  typedef boost::shared_ptr< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct demo_srvResponse_

typedef ::mastering_ros_demo_pkg::demo_srvResponse_<std::allocator<void> > demo_srvResponse;

typedef boost::shared_ptr< ::mastering_ros_demo_pkg::demo_srvResponse > demo_srvResponsePtr;
typedef boost::shared_ptr< ::mastering_ros_demo_pkg::demo_srvResponse const> demo_srvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator1> & lhs, const ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.out == rhs.out;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator1> & lhs, const ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mastering_ros_demo_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da0977a72deba269ef1a5e91941513be";
  }

  static const char* value(const ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda0977a72deba269ULL;
  static const uint64_t static_value2 = 0xef1a5e91941513beULL;
};

template<class ContainerAllocator>
struct DataType< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mastering_ros_demo_pkg/demo_srvResponse";
  }

  static const char* value(const ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string out\n"
;
  }

  static const char* value(const ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.out);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct demo_srvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mastering_ros_demo_pkg::demo_srvResponse_<ContainerAllocator>& v)
  {
    s << indent << "out: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.out);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_SRVRESPONSE_H
