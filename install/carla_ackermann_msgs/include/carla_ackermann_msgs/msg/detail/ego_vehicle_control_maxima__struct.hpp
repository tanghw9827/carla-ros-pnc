// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__STRUCT_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlMaxima __attribute__((deprecated))
#else
# define DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlMaxima __declspec(deprecated)
#endif

namespace carla_ackermann_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EgoVehicleControlMaxima_
{
  using Type = EgoVehicleControlMaxima_<ContainerAllocator>;

  explicit EgoVehicleControlMaxima_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_steering_angle = 0.0f;
      this->max_speed = 0.0f;
      this->max_accel = 0.0f;
      this->max_decel = 0.0f;
      this->min_accel = 0.0f;
      this->max_pedal = 0.0f;
    }
  }

  explicit EgoVehicleControlMaxima_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_steering_angle = 0.0f;
      this->max_speed = 0.0f;
      this->max_accel = 0.0f;
      this->max_decel = 0.0f;
      this->min_accel = 0.0f;
      this->max_pedal = 0.0f;
    }
  }

  // field types and members
  using _max_steering_angle_type =
    float;
  _max_steering_angle_type max_steering_angle;
  using _max_speed_type =
    float;
  _max_speed_type max_speed;
  using _max_accel_type =
    float;
  _max_accel_type max_accel;
  using _max_decel_type =
    float;
  _max_decel_type max_decel;
  using _min_accel_type =
    float;
  _min_accel_type min_accel;
  using _max_pedal_type =
    float;
  _max_pedal_type max_pedal;

  // setters for named parameter idiom
  Type & set__max_steering_angle(
    const float & _arg)
  {
    this->max_steering_angle = _arg;
    return *this;
  }
  Type & set__max_speed(
    const float & _arg)
  {
    this->max_speed = _arg;
    return *this;
  }
  Type & set__max_accel(
    const float & _arg)
  {
    this->max_accel = _arg;
    return *this;
  }
  Type & set__max_decel(
    const float & _arg)
  {
    this->max_decel = _arg;
    return *this;
  }
  Type & set__min_accel(
    const float & _arg)
  {
    this->min_accel = _arg;
    return *this;
  }
  Type & set__max_pedal(
    const float & _arg)
  {
    this->max_pedal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlMaxima
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlMaxima
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EgoVehicleControlMaxima_ & other) const
  {
    if (this->max_steering_angle != other.max_steering_angle) {
      return false;
    }
    if (this->max_speed != other.max_speed) {
      return false;
    }
    if (this->max_accel != other.max_accel) {
      return false;
    }
    if (this->max_decel != other.max_decel) {
      return false;
    }
    if (this->min_accel != other.min_accel) {
      return false;
    }
    if (this->max_pedal != other.max_pedal) {
      return false;
    }
    return true;
  }
  bool operator!=(const EgoVehicleControlMaxima_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EgoVehicleControlMaxima_

// alias to use template instance with default allocator
using EgoVehicleControlMaxima =
  carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_ackermann_msgs

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__STRUCT_HPP_
