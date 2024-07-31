// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioRunnerStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__STRUCT_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus __attribute__((deprecated))
#else
# define DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus __declspec(deprecated)
#endif

namespace carla_ros_scenario_runner_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaScenarioRunnerStatus_
{
  using Type = CarlaScenarioRunnerStatus_<ContainerAllocator>;

  explicit CarlaScenarioRunnerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CarlaScenarioRunnerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STOPPED =
    0u;
  static constexpr uint8_t STARTING =
    1u;
  static constexpr uint8_t RUNNING =
    2u;
  static constexpr uint8_t SHUTTINGDOWN =
    3u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    4u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaScenarioRunnerStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaScenarioRunnerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaScenarioRunnerStatus_

// alias to use template instance with default allocator
using CarlaScenarioRunnerStatus =
  carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CarlaScenarioRunnerStatus_<ContainerAllocator>::STOPPED;
template<typename ContainerAllocator>
constexpr uint8_t CarlaScenarioRunnerStatus_<ContainerAllocator>::STARTING;
template<typename ContainerAllocator>
constexpr uint8_t CarlaScenarioRunnerStatus_<ContainerAllocator>::RUNNING;
template<typename ContainerAllocator>
constexpr uint8_t CarlaScenarioRunnerStatus_<ContainerAllocator>::SHUTTINGDOWN;
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
template<typename ContainerAllocator>
constexpr uint8_t CarlaScenarioRunnerStatus_<ContainerAllocator>::ERROR;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace carla_ros_scenario_runner_types

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__STRUCT_HPP_
