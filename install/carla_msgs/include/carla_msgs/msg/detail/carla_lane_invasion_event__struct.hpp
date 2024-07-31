// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaLaneInvasionEvent.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_LANE_INVASION_EVENT__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_LANE_INVASION_EVENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaLaneInvasionEvent __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaLaneInvasionEvent __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaLaneInvasionEvent_
{
  using Type = CarlaLaneInvasionEvent_<ContainerAllocator>;

  explicit CarlaLaneInvasionEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit CarlaLaneInvasionEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _crossed_lane_markings_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _crossed_lane_markings_type crossed_lane_markings;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__crossed_lane_markings(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->crossed_lane_markings = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t LANE_MARKING_OTHER =
    0;
  static constexpr int32_t LANE_MARKING_BROKEN =
    1;
  static constexpr int32_t LANE_MARKING_SOLID =
    2;

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaLaneInvasionEvent
    std::shared_ptr<carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaLaneInvasionEvent
    std::shared_ptr<carla_msgs::msg::CarlaLaneInvasionEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaLaneInvasionEvent_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->crossed_lane_markings != other.crossed_lane_markings) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaLaneInvasionEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaLaneInvasionEvent_

// alias to use template instance with default allocator
using CarlaLaneInvasionEvent =
  carla_msgs::msg::CarlaLaneInvasionEvent_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t CarlaLaneInvasionEvent_<ContainerAllocator>::LANE_MARKING_OTHER;
template<typename ContainerAllocator>
constexpr int32_t CarlaLaneInvasionEvent_<ContainerAllocator>::LANE_MARKING_BROKEN;
template<typename ContainerAllocator>
constexpr int32_t CarlaLaneInvasionEvent_<ContainerAllocator>::LANE_MARKING_SOLID;

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_LANE_INVASION_EVENT__STRUCT_HPP_
