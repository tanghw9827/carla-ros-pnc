// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaTrafficLightInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'trigger_volume'
#include "carla_msgs/msg/detail/carla_bounding_box__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaTrafficLightInfo __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaTrafficLightInfo __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaTrafficLightInfo_
{
  using Type = CarlaTrafficLightInfo_<ContainerAllocator>;

  explicit CarlaTrafficLightInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_init),
    trigger_volume(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  explicit CarlaTrafficLightInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_alloc, _init),
    trigger_volume(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _transform_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _transform_type transform;
  using _trigger_volume_type =
    carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator>;
  _trigger_volume_type trigger_volume;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__transform(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
    return *this;
  }
  Type & set__trigger_volume(
    const carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator> & _arg)
  {
    this->trigger_volume = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaTrafficLightInfo
    std::shared_ptr<carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaTrafficLightInfo
    std::shared_ptr<carla_msgs::msg::CarlaTrafficLightInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaTrafficLightInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->transform != other.transform) {
      return false;
    }
    if (this->trigger_volume != other.trigger_volume) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaTrafficLightInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaTrafficLightInfo_

// alias to use template instance with default allocator
using CarlaTrafficLightInfo =
  carla_msgs::msg::CarlaTrafficLightInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__STRUCT_HPP_
