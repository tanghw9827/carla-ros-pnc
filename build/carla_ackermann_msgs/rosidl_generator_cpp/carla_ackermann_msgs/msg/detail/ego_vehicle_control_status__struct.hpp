// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_STATUS__STRUCT_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlStatus __attribute__((deprecated))
#else
# define DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlStatus __declspec(deprecated)
#endif

namespace carla_ackermann_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EgoVehicleControlStatus_
{
  using Type = EgoVehicleControlStatus_<ContainerAllocator>;

  explicit EgoVehicleControlStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->speed_control_activation_count = 0;
      this->speed_control_accel_delta = 0.0f;
      this->speed_control_accel_target = 0.0f;
      this->accel_control_pedal_delta = 0.0f;
      this->accel_control_pedal_target = 0.0f;
      this->brake_upper_border = 0.0f;
      this->throttle_lower_border = 0.0f;
    }
  }

  explicit EgoVehicleControlStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->speed_control_activation_count = 0;
      this->speed_control_accel_delta = 0.0f;
      this->speed_control_accel_target = 0.0f;
      this->accel_control_pedal_delta = 0.0f;
      this->accel_control_pedal_target = 0.0f;
      this->brake_upper_border = 0.0f;
      this->throttle_lower_border = 0.0f;
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_type status;
  using _speed_control_activation_count_type =
    uint8_t;
  _speed_control_activation_count_type speed_control_activation_count;
  using _speed_control_accel_delta_type =
    float;
  _speed_control_accel_delta_type speed_control_accel_delta;
  using _speed_control_accel_target_type =
    float;
  _speed_control_accel_target_type speed_control_accel_target;
  using _accel_control_pedal_delta_type =
    float;
  _accel_control_pedal_delta_type accel_control_pedal_delta;
  using _accel_control_pedal_target_type =
    float;
  _accel_control_pedal_target_type accel_control_pedal_target;
  using _brake_upper_border_type =
    float;
  _brake_upper_border_type brake_upper_border;
  using _throttle_lower_border_type =
    float;
  _throttle_lower_border_type throttle_lower_border;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__speed_control_activation_count(
    const uint8_t & _arg)
  {
    this->speed_control_activation_count = _arg;
    return *this;
  }
  Type & set__speed_control_accel_delta(
    const float & _arg)
  {
    this->speed_control_accel_delta = _arg;
    return *this;
  }
  Type & set__speed_control_accel_target(
    const float & _arg)
  {
    this->speed_control_accel_target = _arg;
    return *this;
  }
  Type & set__accel_control_pedal_delta(
    const float & _arg)
  {
    this->accel_control_pedal_delta = _arg;
    return *this;
  }
  Type & set__accel_control_pedal_target(
    const float & _arg)
  {
    this->accel_control_pedal_target = _arg;
    return *this;
  }
  Type & set__brake_upper_border(
    const float & _arg)
  {
    this->brake_upper_border = _arg;
    return *this;
  }
  Type & set__throttle_lower_border(
    const float & _arg)
  {
    this->throttle_lower_border = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlStatus
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlStatus
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EgoVehicleControlStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->speed_control_activation_count != other.speed_control_activation_count) {
      return false;
    }
    if (this->speed_control_accel_delta != other.speed_control_accel_delta) {
      return false;
    }
    if (this->speed_control_accel_target != other.speed_control_accel_target) {
      return false;
    }
    if (this->accel_control_pedal_delta != other.accel_control_pedal_delta) {
      return false;
    }
    if (this->accel_control_pedal_target != other.accel_control_pedal_target) {
      return false;
    }
    if (this->brake_upper_border != other.brake_upper_border) {
      return false;
    }
    if (this->throttle_lower_border != other.throttle_lower_border) {
      return false;
    }
    return true;
  }
  bool operator!=(const EgoVehicleControlStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EgoVehicleControlStatus_

// alias to use template instance with default allocator
using EgoVehicleControlStatus =
  carla_ackermann_msgs::msg::EgoVehicleControlStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_ackermann_msgs

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_STATUS__STRUCT_HPP_
