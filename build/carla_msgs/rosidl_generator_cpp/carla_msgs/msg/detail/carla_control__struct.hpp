// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaControl.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_CONTROL__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaControl __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaControl __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaControl_
{
  using Type = CarlaControl_<ContainerAllocator>;

  explicit CarlaControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  explicit CarlaControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  // field types and members
  using _command_type =
    int8_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const int8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t PLAY =
    0;
  static constexpr int8_t PAUSE =
    1;
  static constexpr int8_t STEP_ONCE =
    2;

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaControl
    std::shared_ptr<carla_msgs::msg::CarlaControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaControl
    std::shared_ptr<carla_msgs::msg::CarlaControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaControl_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaControl_

// alias to use template instance with default allocator
using CarlaControl =
  carla_msgs::msg::CarlaControl_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t CarlaControl_<ContainerAllocator>::PLAY;
template<typename ContainerAllocator>
constexpr int8_t CarlaControl_<ContainerAllocator>::PAUSE;
template<typename ContainerAllocator>
constexpr int8_t CarlaControl_<ContainerAllocator>::STEP_ONCE;

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_CONTROL__STRUCT_HPP_
