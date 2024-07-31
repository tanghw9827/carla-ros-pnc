// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_ros_scenario_runner_types:srv/ExecuteScenario.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__STRUCT_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'scenario'
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_ros_scenario_runner_types__srv__ExecuteScenario_Request __attribute__((deprecated))
#else
# define DEPRECATED__carla_ros_scenario_runner_types__srv__ExecuteScenario_Request __declspec(deprecated)
#endif

namespace carla_ros_scenario_runner_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteScenario_Request_
{
  using Type = ExecuteScenario_Request_<ContainerAllocator>;

  explicit ExecuteScenario_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scenario(_init)
  {
    (void)_init;
  }

  explicit ExecuteScenario_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scenario(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _scenario_type =
    carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>;
  _scenario_type scenario;

  // setters for named parameter idiom
  Type & set__scenario(
    const carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator> & _arg)
  {
    this->scenario = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_ros_scenario_runner_types__srv__ExecuteScenario_Request
    std::shared_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_ros_scenario_runner_types__srv__ExecuteScenario_Request
    std::shared_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteScenario_Request_ & other) const
  {
    if (this->scenario != other.scenario) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteScenario_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteScenario_Request_

// alias to use template instance with default allocator
using ExecuteScenario_Request =
  carla_ros_scenario_runner_types::srv::ExecuteScenario_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carla_ros_scenario_runner_types


#ifndef _WIN32
# define DEPRECATED__carla_ros_scenario_runner_types__srv__ExecuteScenario_Response __attribute__((deprecated))
#else
# define DEPRECATED__carla_ros_scenario_runner_types__srv__ExecuteScenario_Response __declspec(deprecated)
#endif

namespace carla_ros_scenario_runner_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteScenario_Response_
{
  using Type = ExecuteScenario_Response_<ContainerAllocator>;

  explicit ExecuteScenario_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit ExecuteScenario_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_ros_scenario_runner_types__srv__ExecuteScenario_Response
    std::shared_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_ros_scenario_runner_types__srv__ExecuteScenario_Response
    std::shared_ptr<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteScenario_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteScenario_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteScenario_Response_

// alias to use template instance with default allocator
using ExecuteScenario_Response =
  carla_ros_scenario_runner_types::srv::ExecuteScenario_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carla_ros_scenario_runner_types

namespace carla_ros_scenario_runner_types
{

namespace srv
{

struct ExecuteScenario
{
  using Request = carla_ros_scenario_runner_types::srv::ExecuteScenario_Request;
  using Response = carla_ros_scenario_runner_types::srv::ExecuteScenario_Response;
};

}  // namespace srv

}  // namespace carla_ros_scenario_runner_types

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__STRUCT_HPP_
