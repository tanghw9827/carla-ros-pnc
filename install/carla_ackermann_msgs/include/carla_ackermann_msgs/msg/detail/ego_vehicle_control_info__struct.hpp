// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__STRUCT_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__STRUCT_HPP_

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
// Member 'restrictions'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__struct.hpp"
// Member 'target'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__struct.hpp"
// Member 'current'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__struct.hpp"
// Member 'status'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__struct.hpp"
// Member 'output'
#include "carla_msgs/msg/detail/carla_ego_vehicle_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlInfo __attribute__((deprecated))
#else
# define DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlInfo __declspec(deprecated)
#endif

namespace carla_ackermann_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EgoVehicleControlInfo_
{
  using Type = EgoVehicleControlInfo_<ContainerAllocator>;

  explicit EgoVehicleControlInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    restrictions(_init),
    target(_init),
    current(_init),
    status(_init),
    output(_init)
  {
    (void)_init;
  }

  explicit EgoVehicleControlInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    restrictions(_alloc, _init),
    target(_alloc, _init),
    current(_alloc, _init),
    status(_alloc, _init),
    output(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _restrictions_type =
    carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator>;
  _restrictions_type restrictions;
  using _target_type =
    carla_ackermann_msgs::msg::EgoVehicleControlTarget_<ContainerAllocator>;
  _target_type target;
  using _current_type =
    carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator>;
  _current_type current;
  using _status_type =
    carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator>;
  _status_type status;
  using _output_type =
    carla_msgs::msg::CarlaEgoVehicleControl_<ContainerAllocator>;
  _output_type output;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__restrictions(
    const carla_ackermann_msgs::msg::EgoVehicleControlMaxima_<ContainerAllocator> & _arg)
  {
    this->restrictions = _arg;
    return *this;
  }
  Type & set__target(
    const carla_ackermann_msgs::msg::EgoVehicleControlTarget_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__current(
    const carla_ackermann_msgs::msg::EgoVehicleControlCurrent_<ContainerAllocator> & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__status(
    const carla_ackermann_msgs::msg::EgoVehicleControlStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__output(
    const carla_msgs::msg::CarlaEgoVehicleControl_<ContainerAllocator> & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlInfo
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_ackermann_msgs__msg__EgoVehicleControlInfo
    std::shared_ptr<carla_ackermann_msgs::msg::EgoVehicleControlInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EgoVehicleControlInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->restrictions != other.restrictions) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const EgoVehicleControlInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EgoVehicleControlInfo_

// alias to use template instance with default allocator
using EgoVehicleControlInfo =
  carla_ackermann_msgs::msg::EgoVehicleControlInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_ackermann_msgs

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__STRUCT_HPP_
