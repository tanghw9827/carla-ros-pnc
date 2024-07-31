// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaWalkerControl.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WALKER_CONTROL__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WALKER_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaWalkerControl __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaWalkerControl __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaWalkerControl_
{
  using Type = CarlaWalkerControl_<ContainerAllocator>;

  explicit CarlaWalkerControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->jump = false;
    }
  }

  explicit CarlaWalkerControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->jump = false;
    }
  }

  // field types and members
  using _direction_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _direction_type direction;
  using _speed_type =
    float;
  _speed_type speed;
  using _jump_type =
    bool;
  _jump_type jump;

  // setters for named parameter idiom
  Type & set__direction(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__jump(
    const bool & _arg)
  {
    this->jump = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaWalkerControl
    std::shared_ptr<carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaWalkerControl
    std::shared_ptr<carla_msgs::msg::CarlaWalkerControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaWalkerControl_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->jump != other.jump) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaWalkerControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaWalkerControl_

// alias to use template instance with default allocator
using CarlaWalkerControl =
  carla_msgs::msg::CarlaWalkerControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WALKER_CONTROL__STRUCT_HPP_
