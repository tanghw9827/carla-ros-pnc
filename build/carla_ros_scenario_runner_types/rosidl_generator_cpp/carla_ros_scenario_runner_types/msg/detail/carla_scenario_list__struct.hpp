// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioList.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_LIST__STRUCT_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'scenarios'
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenarioList __attribute__((deprecated))
#else
# define DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenarioList __declspec(deprecated)
#endif

namespace carla_ros_scenario_runner_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaScenarioList_
{
  using Type = CarlaScenarioList_<ContainerAllocator>;

  explicit CarlaScenarioList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CarlaScenarioList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _scenarios_type =
    std::vector<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>, typename ContainerAllocator::template rebind<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>>::other>;
  _scenarios_type scenarios;

  // setters for named parameter idiom
  Type & set__scenarios(
    const std::vector<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>, typename ContainerAllocator::template rebind<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>>::other> & _arg)
  {
    this->scenarios = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenarioList
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenarioList
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenarioList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaScenarioList_ & other) const
  {
    if (this->scenarios != other.scenarios) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaScenarioList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaScenarioList_

// alias to use template instance with default allocator
using CarlaScenarioList =
  carla_ros_scenario_runner_types::msg::CarlaScenarioList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_ros_scenario_runner_types

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_LIST__STRUCT_HPP_
