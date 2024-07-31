// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaTrafficLightStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaTrafficLightStatus __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaTrafficLightStatus __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaTrafficLightStatus_
{
  using Type = CarlaTrafficLightStatus_<ContainerAllocator>;

  explicit CarlaTrafficLightStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->state = 0;
    }
  }

  explicit CarlaTrafficLightStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->state = 0;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RED =
    0u;
  static constexpr uint8_t YELLOW =
    1u;
  static constexpr uint8_t GREEN =
    2u;
  static constexpr uint8_t OFF =
    3u;
  static constexpr uint8_t UNKNOWN =
    4u;

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaTrafficLightStatus
    std::shared_ptr<carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaTrafficLightStatus
    std::shared_ptr<carla_msgs::msg::CarlaTrafficLightStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaTrafficLightStatus_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaTrafficLightStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaTrafficLightStatus_

// alias to use template instance with default allocator
using CarlaTrafficLightStatus =
  carla_msgs::msg::CarlaTrafficLightStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CarlaTrafficLightStatus_<ContainerAllocator>::RED;
template<typename ContainerAllocator>
constexpr uint8_t CarlaTrafficLightStatus_<ContainerAllocator>::YELLOW;
template<typename ContainerAllocator>
constexpr uint8_t CarlaTrafficLightStatus_<ContainerAllocator>::GREEN;
template<typename ContainerAllocator>
constexpr uint8_t CarlaTrafficLightStatus_<ContainerAllocator>::OFF;
template<typename ContainerAllocator>
constexpr uint8_t CarlaTrafficLightStatus_<ContainerAllocator>::UNKNOWN;

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS__STRUCT_HPP_
