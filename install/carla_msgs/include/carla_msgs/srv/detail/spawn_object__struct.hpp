// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:srv/SpawnObject.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__STRUCT_HPP_
#define CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'attributes'
#include "diagnostic_msgs/msg/detail/key_value__struct.hpp"
// Member 'transform'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_msgs__srv__SpawnObject_Request __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__srv__SpawnObject_Request __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnObject_Request_
{
  using Type = SpawnObject_Request_<ContainerAllocator>;

  explicit SpawnObject_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->id = "";
      this->attach_to = 0ul;
      this->random_pose = false;
    }
  }

  explicit SpawnObject_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    id(_alloc),
    transform(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->id = "";
      this->attach_to = 0ul;
      this->random_pose = false;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_type type;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _attributes_type =
    std::vector<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>>::other>;
  _attributes_type attributes;
  using _transform_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _transform_type transform;
  using _attach_to_type =
    uint32_t;
  _attach_to_type attach_to;
  using _random_pose_type =
    bool;
  _random_pose_type random_pose;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__attributes(
    const std::vector<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>>::other> & _arg)
  {
    this->attributes = _arg;
    return *this;
  }
  Type & set__transform(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
    return *this;
  }
  Type & set__attach_to(
    const uint32_t & _arg)
  {
    this->attach_to = _arg;
    return *this;
  }
  Type & set__random_pose(
    const bool & _arg)
  {
    this->random_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::srv::SpawnObject_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::srv::SpawnObject_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::srv::SpawnObject_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::srv::SpawnObject_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::srv::SpawnObject_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::srv::SpawnObject_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::srv::SpawnObject_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::srv::SpawnObject_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::srv::SpawnObject_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::srv::SpawnObject_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__srv__SpawnObject_Request
    std::shared_ptr<carla_msgs::srv::SpawnObject_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__srv__SpawnObject_Request
    std::shared_ptr<carla_msgs::srv::SpawnObject_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnObject_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->attributes != other.attributes) {
      return false;
    }
    if (this->transform != other.transform) {
      return false;
    }
    if (this->attach_to != other.attach_to) {
      return false;
    }
    if (this->random_pose != other.random_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnObject_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnObject_Request_

// alias to use template instance with default allocator
using SpawnObject_Request =
  carla_msgs::srv::SpawnObject_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carla_msgs


#ifndef _WIN32
# define DEPRECATED__carla_msgs__srv__SpawnObject_Response __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__srv__SpawnObject_Response __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnObject_Response_
{
  using Type = SpawnObject_Response_<ContainerAllocator>;

  explicit SpawnObject_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->error_string = "";
    }
  }

  explicit SpawnObject_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->error_string = "";
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_string_type error_string;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::srv::SpawnObject_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::srv::SpawnObject_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::srv::SpawnObject_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::srv::SpawnObject_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::srv::SpawnObject_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::srv::SpawnObject_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::srv::SpawnObject_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::srv::SpawnObject_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::srv::SpawnObject_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::srv::SpawnObject_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__srv__SpawnObject_Response
    std::shared_ptr<carla_msgs::srv::SpawnObject_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__srv__SpawnObject_Response
    std::shared_ptr<carla_msgs::srv::SpawnObject_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnObject_Response_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnObject_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnObject_Response_

// alias to use template instance with default allocator
using SpawnObject_Response =
  carla_msgs::srv::SpawnObject_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carla_msgs

namespace carla_msgs
{

namespace srv
{

struct SpawnObject
{
  using Request = carla_msgs::srv::SpawnObject_Request;
  using Response = carla_msgs::srv::SpawnObject_Response;
};

}  // namespace srv

}  // namespace carla_msgs

#endif  // CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__STRUCT_HPP_
