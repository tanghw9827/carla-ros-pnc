// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'center'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaBoundingBox __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaBoundingBox __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaBoundingBox_
{
  using Type = CarlaBoundingBox_<ContainerAllocator>;

  explicit CarlaBoundingBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init),
    size(_init)
  {
    (void)_init;
  }

  explicit CarlaBoundingBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init),
    size(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _center_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _center_type center;
  using _size_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _size_type size;

  // setters for named parameter idiom
  Type & set__center(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__size(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaBoundingBox
    std::shared_ptr<carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaBoundingBox
    std::shared_ptr<carla_msgs::msg::CarlaBoundingBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaBoundingBox_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaBoundingBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaBoundingBox_

// alias to use template instance with default allocator
using CarlaBoundingBox =
  carla_msgs::msg::CarlaBoundingBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__STRUCT_HPP_
