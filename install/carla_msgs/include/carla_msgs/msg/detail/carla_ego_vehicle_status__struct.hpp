// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__STRUCT_HPP_

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
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'control'
#include "carla_msgs/msg/detail/carla_ego_vehicle_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaEgoVehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaEgoVehicleStatus __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaEgoVehicleStatus_
{
  using Type = CarlaEgoVehicleStatus_<ContainerAllocator>;

  explicit CarlaEgoVehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    acceleration(_init),
    orientation(_init),
    control(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
    }
  }

  explicit CarlaEgoVehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    acceleration(_alloc, _init),
    orientation(_alloc, _init),
    control(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _control_type =
    carla_msgs::msg::CarlaEgoVehicleControl_<ContainerAllocator>;
  _control_type control;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__control(
    const carla_msgs::msg::CarlaEgoVehicleControl_<ContainerAllocator> & _arg)
  {
    this->control = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaEgoVehicleStatus
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaEgoVehicleStatus
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaEgoVehicleStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->control != other.control) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaEgoVehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaEgoVehicleStatus_

// alias to use template instance with default allocator
using CarlaEgoVehicleStatus =
  carla_msgs::msg::CarlaEgoVehicleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__STRUCT_HPP_
