// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaStatus __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaStatus __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaStatus_
{
  using Type = CarlaStatus_<ContainerAllocator>;

  explicit CarlaStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0ull;
      this->fixed_delta_seconds = 0.0f;
      this->synchronous_mode = false;
      this->synchronous_mode_running = false;
    }
  }

  explicit CarlaStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0ull;
      this->fixed_delta_seconds = 0.0f;
      this->synchronous_mode = false;
      this->synchronous_mode_running = false;
    }
  }

  // field types and members
  using _frame_type =
    uint64_t;
  _frame_type frame;
  using _fixed_delta_seconds_type =
    float;
  _fixed_delta_seconds_type fixed_delta_seconds;
  using _synchronous_mode_type =
    bool;
  _synchronous_mode_type synchronous_mode;
  using _synchronous_mode_running_type =
    bool;
  _synchronous_mode_running_type synchronous_mode_running;

  // setters for named parameter idiom
  Type & set__frame(
    const uint64_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__fixed_delta_seconds(
    const float & _arg)
  {
    this->fixed_delta_seconds = _arg;
    return *this;
  }
  Type & set__synchronous_mode(
    const bool & _arg)
  {
    this->synchronous_mode = _arg;
    return *this;
  }
  Type & set__synchronous_mode_running(
    const bool & _arg)
  {
    this->synchronous_mode_running = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaStatus
    std::shared_ptr<carla_msgs::msg::CarlaStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaStatus
    std::shared_ptr<carla_msgs::msg::CarlaStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaStatus_ & other) const
  {
    if (this->frame != other.frame) {
      return false;
    }
    if (this->fixed_delta_seconds != other.fixed_delta_seconds) {
      return false;
    }
    if (this->synchronous_mode != other.synchronous_mode) {
      return false;
    }
    if (this->synchronous_mode_running != other.synchronous_mode_running) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaStatus_

// alias to use template instance with default allocator
using CarlaStatus =
  carla_msgs::msg::CarlaStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__STRUCT_HPP_
