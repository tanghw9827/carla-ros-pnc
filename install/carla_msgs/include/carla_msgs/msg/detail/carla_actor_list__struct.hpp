// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaActorList.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'actors'
#include "carla_msgs/msg/detail/carla_actor_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaActorList __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaActorList __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaActorList_
{
  using Type = CarlaActorList_<ContainerAllocator>;

  explicit CarlaActorList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CarlaActorList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _actors_type =
    std::vector<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>>::other>;
  _actors_type actors;

  // setters for named parameter idiom
  Type & set__actors(
    const std::vector<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->actors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaActorList_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaActorList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaActorList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaActorList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaActorList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaActorList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaActorList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaActorList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaActorList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaActorList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaActorList
    std::shared_ptr<carla_msgs::msg::CarlaActorList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaActorList
    std::shared_ptr<carla_msgs::msg::CarlaActorList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaActorList_ & other) const
  {
    if (this->actors != other.actors) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaActorList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaActorList_

// alias to use template instance with default allocator
using CarlaActorList =
  carla_msgs::msg::CarlaActorList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__STRUCT_HPP_
