// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pnc_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef PNC_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
#define PNC_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'points'
#include "pnc_msgs/msg/detail/trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pnc_msgs__msg__Trajectory __attribute__((deprecated))
#else
# define DEPRECATED__pnc_msgs__msg__Trajectory __declspec(deprecated)
#endif

namespace pnc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trajectory_
{
  using Type = Trajectory_<ContainerAllocator>;

  explicit Trajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Trajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _points_type =
    std::vector<pnc_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<pnc_msgs::msg::TrajectoryPoint_<ContainerAllocator>>::other>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<pnc_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<pnc_msgs::msg::TrajectoryPoint_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pnc_msgs::msg::Trajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const pnc_msgs::msg::Trajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pnc_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pnc_msgs::msg::Trajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pnc_msgs::msg::Trajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pnc_msgs::msg::Trajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pnc_msgs::msg::Trajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pnc_msgs::msg::Trajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pnc_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pnc_msgs::msg::Trajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pnc_msgs__msg__Trajectory
    std::shared_ptr<pnc_msgs::msg::Trajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pnc_msgs__msg__Trajectory
    std::shared_ptr<pnc_msgs::msg::Trajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectory_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectory_

// alias to use template instance with default allocator
using Trajectory =
  pnc_msgs::msg::Trajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pnc_msgs

#endif  // PNC_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
