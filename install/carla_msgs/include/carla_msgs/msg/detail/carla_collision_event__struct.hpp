// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaCollisionEvent.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_COLLISION_EVENT__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_COLLISION_EVENT__STRUCT_HPP_

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
// Member 'normal_impulse'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaCollisionEvent __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaCollisionEvent __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaCollisionEvent_
{
  using Type = CarlaCollisionEvent_<ContainerAllocator>;

  explicit CarlaCollisionEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    normal_impulse(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->other_actor_id = 0ul;
    }
  }

  explicit CarlaCollisionEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    normal_impulse(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->other_actor_id = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _other_actor_id_type =
    uint32_t;
  _other_actor_id_type other_actor_id;
  using _normal_impulse_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _normal_impulse_type normal_impulse;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__other_actor_id(
    const uint32_t & _arg)
  {
    this->other_actor_id = _arg;
    return *this;
  }
  Type & set__normal_impulse(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->normal_impulse = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaCollisionEvent
    std::shared_ptr<carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaCollisionEvent
    std::shared_ptr<carla_msgs::msg::CarlaCollisionEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaCollisionEvent_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->other_actor_id != other.other_actor_id) {
      return false;
    }
    if (this->normal_impulse != other.normal_impulse) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaCollisionEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaCollisionEvent_

// alias to use template instance with default allocator
using CarlaCollisionEvent =
  carla_msgs::msg::CarlaCollisionEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_COLLISION_EVENT__STRUCT_HPP_
