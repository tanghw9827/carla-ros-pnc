// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_waypoint_types:msg/CarlaWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__STRUCT_HPP_
#define CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_waypoint_types__msg__CarlaWaypoint __attribute__((deprecated))
#else
# define DEPRECATED__carla_waypoint_types__msg__CarlaWaypoint __declspec(deprecated)
#endif

namespace carla_waypoint_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaWaypoint_
{
  using Type = CarlaWaypoint_<ContainerAllocator>;

  explicit CarlaWaypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_id = 0l;
      this->section_id = 0l;
      this->lane_id = 0l;
      this->lane_width = 0.0;
      this->is_junction = false;
    }
  }

  explicit CarlaWaypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_id = 0l;
      this->section_id = 0l;
      this->lane_id = 0l;
      this->lane_width = 0.0;
      this->is_junction = false;
    }
  }

  // field types and members
  using _road_id_type =
    int32_t;
  _road_id_type road_id;
  using _section_id_type =
    int32_t;
  _section_id_type section_id;
  using _lane_id_type =
    int32_t;
  _lane_id_type lane_id;
  using _lane_width_type =
    double;
  _lane_width_type lane_width;
  using _is_junction_type =
    bool;
  _is_junction_type is_junction;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__road_id(
    const int32_t & _arg)
  {
    this->road_id = _arg;
    return *this;
  }
  Type & set__section_id(
    const int32_t & _arg)
  {
    this->section_id = _arg;
    return *this;
  }
  Type & set__lane_id(
    const int32_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__lane_width(
    const double & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__is_junction(
    const bool & _arg)
  {
    this->is_junction = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_waypoint_types__msg__CarlaWaypoint
    std::shared_ptr<carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_waypoint_types__msg__CarlaWaypoint
    std::shared_ptr<carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaWaypoint_ & other) const
  {
    if (this->road_id != other.road_id) {
      return false;
    }
    if (this->section_id != other.section_id) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->is_junction != other.is_junction) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaWaypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaWaypoint_

// alias to use template instance with default allocator
using CarlaWaypoint =
  carla_waypoint_types::msg::CarlaWaypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_waypoint_types

#endif  // CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__STRUCT_HPP_
