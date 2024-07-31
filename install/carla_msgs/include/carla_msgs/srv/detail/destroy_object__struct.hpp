// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:srv/DestroyObject.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__STRUCT_HPP_
#define CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_msgs__srv__DestroyObject_Request __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__srv__DestroyObject_Request __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DestroyObject_Request_
{
  using Type = DestroyObject_Request_<ContainerAllocator>;

  explicit DestroyObject_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit DestroyObject_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::srv::DestroyObject_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::srv::DestroyObject_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::srv::DestroyObject_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::srv::DestroyObject_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::srv::DestroyObject_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::srv::DestroyObject_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::srv::DestroyObject_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::srv::DestroyObject_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::srv::DestroyObject_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::srv::DestroyObject_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__srv__DestroyObject_Request
    std::shared_ptr<carla_msgs::srv::DestroyObject_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__srv__DestroyObject_Request
    std::shared_ptr<carla_msgs::srv::DestroyObject_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DestroyObject_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DestroyObject_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DestroyObject_Request_

// alias to use template instance with default allocator
using DestroyObject_Request =
  carla_msgs::srv::DestroyObject_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carla_msgs


#ifndef _WIN32
# define DEPRECATED__carla_msgs__srv__DestroyObject_Response __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__srv__DestroyObject_Response __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DestroyObject_Response_
{
  using Type = DestroyObject_Response_<ContainerAllocator>;

  explicit DestroyObject_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit DestroyObject_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::srv::DestroyObject_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::srv::DestroyObject_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::srv::DestroyObject_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::srv::DestroyObject_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::srv::DestroyObject_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::srv::DestroyObject_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::srv::DestroyObject_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::srv::DestroyObject_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::srv::DestroyObject_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::srv::DestroyObject_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__srv__DestroyObject_Response
    std::shared_ptr<carla_msgs::srv::DestroyObject_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__srv__DestroyObject_Response
    std::shared_ptr<carla_msgs::srv::DestroyObject_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DestroyObject_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const DestroyObject_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DestroyObject_Response_

// alias to use template instance with default allocator
using DestroyObject_Response =
  carla_msgs::srv::DestroyObject_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carla_msgs

namespace carla_msgs
{

namespace srv
{

struct DestroyObject
{
  using Request = carla_msgs::srv::DestroyObject_Request;
  using Response = carla_msgs::srv::DestroyObject_Response;
};

}  // namespace srv

}  // namespace carla_msgs

#endif  // CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__STRUCT_HPP_
