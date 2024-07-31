// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlCurrent.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_CURRENT__STRUCT_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_CURRENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlCurrent __attribute__((deprecated))
#else
# define DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlCurrent __declspec(deprecated)
#endif

namespace carla_ackermann_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EgoVehicleControlCurrent_
{
  using Type = EgoVehicleControlCurrent_<ContainerAllocator>;

  explicit EgoVehicleControlCurrent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_sec = 0.0f;
      this->speed = 0.0f;
      this->speed_abs = 0.0f;
      this->accel = 0.0f;
    }
  }

  explicit EgoVehicleControlCurrent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_sec = 0.0f;
      this->speed = 0.0f;
      this->speed_abs = 0.0f;
      this->accel = 0.0f;
    }
  }

  // field types and members
  using _time_sec_type =
    float;
  _time_sec_type time_sec;
  using _speed_type =
    float;
  _speed_type speed;
  using _speed_abs_type =
    float;
  _speed_abs_type speed_abs;
  using _accel_type =
    float;
  _accel_type accel;

  // setters for named parameter idiom
  Type & set__time_sec(
    const float & _arg)
  {
    this->time_sec = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__speed_abs(
    const float & _arg)
  {
    this->speed_abs = _arg;
    return *this;
  }
  Type & set__accel(
    const float & _arg)
  {
    this->accel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlCurrent
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlCurrent
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EgoVehicleControlCurrent_ & other) const
  {
    if (this->time_sec != other.time_sec) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->speed_abs != other.speed_abs) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    return true;
  }
  bool operator!=(const EgoVehicleControlCurrent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EgoVehicleControlCurrent_

// alias to use template instance with default allocator
using EgoVehicleControlCurrent =
  carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_ackermann_msgs

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_CURRENT__STRUCT_HPP_
