// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'wheels'
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__struct.hpp"
// Member 'center_of_mass'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaEgoVehicleInfo __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaEgoVehicleInfo __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaEgoVehicleInfo_
{
  using Type = CarlaEgoVehicleInfo_<ContainerAllocator>;

  explicit CarlaEgoVehicleInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center_of_mass(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = "";
      this->rolename = "";
      this->max_rpm = 0.0f;
      this->moi = 0.0f;
      this->damping_rate_full_throttle = 0.0f;
      this->damping_rate_zero_throttle_clutch_engaged = 0.0f;
      this->damping_rate_zero_throttle_clutch_disengaged = 0.0f;
      this->use_gear_autobox = false;
      this->gear_switch_time = 0.0f;
      this->clutch_strength = 0.0f;
      this->mass = 0.0f;
      this->drag_coefficient = 0.0f;
    }
  }

  explicit CarlaEgoVehicleInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    rolename(_alloc),
    center_of_mass(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = "";
      this->rolename = "";
      this->max_rpm = 0.0f;
      this->moi = 0.0f;
      this->damping_rate_full_throttle = 0.0f;
      this->damping_rate_zero_throttle_clutch_engaged = 0.0f;
      this->damping_rate_zero_throttle_clutch_disengaged = 0.0f;
      this->use_gear_autobox = false;
      this->gear_switch_time = 0.0f;
      this->clutch_strength = 0.0f;
      this->mass = 0.0f;
      this->drag_coefficient = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_type type;
  using _rolename_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rolename_type rolename;
  using _wheels_type =
    std::vector<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>, typename ContainerAllocator::template rebind<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>>::other>;
  _wheels_type wheels;
  using _max_rpm_type =
    float;
  _max_rpm_type max_rpm;
  using _moi_type =
    float;
  _moi_type moi;
  using _damping_rate_full_throttle_type =
    float;
  _damping_rate_full_throttle_type damping_rate_full_throttle;
  using _damping_rate_zero_throttle_clutch_engaged_type =
    float;
  _damping_rate_zero_throttle_clutch_engaged_type damping_rate_zero_throttle_clutch_engaged;
  using _damping_rate_zero_throttle_clutch_disengaged_type =
    float;
  _damping_rate_zero_throttle_clutch_disengaged_type damping_rate_zero_throttle_clutch_disengaged;
  using _use_gear_autobox_type =
    bool;
  _use_gear_autobox_type use_gear_autobox;
  using _gear_switch_time_type =
    float;
  _gear_switch_time_type gear_switch_time;
  using _clutch_strength_type =
    float;
  _clutch_strength_type clutch_strength;
  using _mass_type =
    float;
  _mass_type mass;
  using _drag_coefficient_type =
    float;
  _drag_coefficient_type drag_coefficient;
  using _center_of_mass_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _center_of_mass_type center_of_mass;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__rolename(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rolename = _arg;
    return *this;
  }
  Type & set__wheels(
    const std::vector<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>, typename ContainerAllocator::template rebind<carla_msgs::msg::CarlaEgoVehicleInfoWheel_<ContainerAllocator>>::other> & _arg)
  {
    this->wheels = _arg;
    return *this;
  }
  Type & set__max_rpm(
    const float & _arg)
  {
    this->max_rpm = _arg;
    return *this;
  }
  Type & set__moi(
    const float & _arg)
  {
    this->moi = _arg;
    return *this;
  }
  Type & set__damping_rate_full_throttle(
    const float & _arg)
  {
    this->damping_rate_full_throttle = _arg;
    return *this;
  }
  Type & set__damping_rate_zero_throttle_clutch_engaged(
    const float & _arg)
  {
    this->damping_rate_zero_throttle_clutch_engaged = _arg;
    return *this;
  }
  Type & set__damping_rate_zero_throttle_clutch_disengaged(
    const float & _arg)
  {
    this->damping_rate_zero_throttle_clutch_disengaged = _arg;
    return *this;
  }
  Type & set__use_gear_autobox(
    const bool & _arg)
  {
    this->use_gear_autobox = _arg;
    return *this;
  }
  Type & set__gear_switch_time(
    const float & _arg)
  {
    this->gear_switch_time = _arg;
    return *this;
  }
  Type & set__clutch_strength(
    const float & _arg)
  {
    this->clutch_strength = _arg;
    return *this;
  }
  Type & set__mass(
    const float & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__drag_coefficient(
    const float & _arg)
  {
    this->drag_coefficient = _arg;
    return *this;
  }
  Type & set__center_of_mass(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->center_of_mass = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaEgoVehicleInfo
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaEgoVehicleInfo
    std::shared_ptr<carla_msgs::msg::CarlaEgoVehicleInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaEgoVehicleInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->rolename != other.rolename) {
      return false;
    }
    if (this->wheels != other.wheels) {
      return false;
    }
    if (this->max_rpm != other.max_rpm) {
      return false;
    }
    if (this->moi != other.moi) {
      return false;
    }
    if (this->damping_rate_full_throttle != other.damping_rate_full_throttle) {
      return false;
    }
    if (this->damping_rate_zero_throttle_clutch_engaged != other.damping_rate_zero_throttle_clutch_engaged) {
      return false;
    }
    if (this->damping_rate_zero_throttle_clutch_disengaged != other.damping_rate_zero_throttle_clutch_disengaged) {
      return false;
    }
    if (this->use_gear_autobox != other.use_gear_autobox) {
      return false;
    }
    if (this->gear_switch_time != other.gear_switch_time) {
      return false;
    }
    if (this->clutch_strength != other.clutch_strength) {
      return false;
    }
    if (this->mass != other.mass) {
      return false;
    }
    if (this->drag_coefficient != other.drag_coefficient) {
      return false;
    }
    if (this->center_of_mass != other.center_of_mass) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaEgoVehicleInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaEgoVehicleInfo_

// alias to use template instance with default allocator
using CarlaEgoVehicleInfo =
  carla_msgs::msg::CarlaEgoVehicleInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__STRUCT_HPP_
