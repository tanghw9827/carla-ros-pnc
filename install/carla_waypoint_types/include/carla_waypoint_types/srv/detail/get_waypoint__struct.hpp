// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_waypoint_types:srv/GetWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__STRUCT_HPP_
#define CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_waypoint_types__srv__GetWaypoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__carla_waypoint_types__srv__GetWaypoint_Request __declspec(deprecated)
#endif

namespace carla_waypoint_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWaypoint_Request_
{
  using Type = GetWaypoint_Request_<ContainerAllocator>;

  explicit GetWaypoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_init)
  {
    (void)_init;
  }

  explicit GetWaypoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_waypoint_types__srv__GetWaypoint_Request
    std::shared_ptr<carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_waypoint_types__srv__GetWaypoint_Request
    std::shared_ptr<carla_waypoint_types::srv::GetWaypoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWaypoint_Request_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWaypoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWaypoint_Request_

// alias to use template instance with default allocator
using GetWaypoint_Request =
  carla_waypoint_types::srv::GetWaypoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carla_waypoint_types


// Include directives for member types
// Member 'waypoint'
#include "carla_waypoint_types/msg/detail/carla_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_waypoint_types__srv__GetWaypoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__carla_waypoint_types__srv__GetWaypoint_Response __declspec(deprecated)
#endif

namespace carla_waypoint_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWaypoint_Response_
{
  using Type = GetWaypoint_Response_<ContainerAllocator>;

  explicit GetWaypoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint(_init)
  {
    (void)_init;
  }

  explicit GetWaypoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _waypoint_type =
    carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator>;
  _waypoint_type waypoint;

  // setters for named parameter idiom
  Type & set__waypoint(
    const carla_waypoint_types::msg::CarlaWaypoint_<ContainerAllocator> & _arg)
  {
    this->waypoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_waypoint_types__srv__GetWaypoint_Response
    std::shared_ptr<carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_waypoint_types__srv__GetWaypoint_Response
    std::shared_ptr<carla_waypoint_types::srv::GetWaypoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWaypoint_Response_ & other) const
  {
    if (this->waypoint != other.waypoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWaypoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWaypoint_Response_

// alias to use template instance with default allocator
using GetWaypoint_Response =
  carla_waypoint_types::srv::GetWaypoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carla_waypoint_types

namespace carla_waypoint_types
{

namespace srv
{

struct GetWaypoint
{
  using Request = carla_waypoint_types::srv::GetWaypoint_Request;
  using Response = carla_waypoint_types::srv::GetWaypoint_Response;
};

}  // namespace srv

}  // namespace carla_waypoint_types

#endif  // CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__STRUCT_HPP_
