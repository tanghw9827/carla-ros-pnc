// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfoWheel.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaEgoVehicleInfoWheel __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaEgoVehicleInfoWheel __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaEgoVehicleInfoWheel_
{
  using Type = CarlaEgoVehicleInfoWheel_<ContainerAllocator>;

  explicit CarlaEgoVehicleInfoWheel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tire_friction = 0.0f;
      this->damping_rate = 0.0f;
      this->max_steer_angle = 0.0f;
      this->radius = 0.0f;
      this->max_brake_torque = 0.0f;
      this->max_handbrake_torque = 0.0f;
    }
  }

  explicit CarlaEgoVehicleInfoWheel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tire_friction = 0.0f;
      this->damping_rate = 0.0f;
      this->max_steer_angle = 0.0f;
      this->radius = 0.0f;
      this->max_brake_torque = 0.0f;
      this->max_handbrake_torque = 0.0f;
    }
  }

  // field types and members
  using _tire_friction_type =
    float;
  _tire_friction_type tire_friction;
  using _damping_rate_type =
    float;
  _damping_rate_type damping_rate;
  using _max_steer_angle_type =
    float;
  _max_steer_angle_type max_steer_angle;
  using _radius_type =
    float;
  _radius_type radius;
  using _max_brake_torque_type =
    float;
  _max_brake_torque_type max_brake_torque;
  using _max_handbrake_torque_type =
    float;
  _max_handbrake_torque_type max_handbrake_torque;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__tire_friction(
    const float & _arg)
  {
    this->tire_friction = _arg;
    return *this;
  }
  Type & set__damping_rate(
    const float & _arg)
  {
    this->damping_rate = _arg;
    return *this;
  }
  Type & set__max_steer_angle(
    const float & _arg)
  {
    this->max_steer_angle = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__max_brake_torque(
    const float & _arg)
  {
    this->max_brake_torque = _arg;
    return *this;
  }
  Type & set__max_handbrake_torque(
    const float & _arg)
  {
    this->max_handbrake_torque = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaEgoVehicleInfoWheel
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaEgoVehicleInfoWheel
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaEgoVehicleInfoWheel_ & other) const
  {
    if (this->tire_friction != other.tire_friction) {
      return false;
    }
    if (this->damping_rate != other.damping_rate) {
      return false;
    }
    if (this->max_steer_angle != other.max_steer_angle) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->max_brake_torque != other.max_brake_torque) {
      return false;
    }
    if (this->max_handbrake_torque != other.max_handbrake_torque) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaEgoVehicleInfoWheel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaEgoVehicleInfoWheel_

// alias to use template instance with default allocator
using CarlaEgoVehicleInfoWheel =
  carla_msgs::msg::CarlaEgoVehicleInfoWheel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__STRUCT_HPP_
