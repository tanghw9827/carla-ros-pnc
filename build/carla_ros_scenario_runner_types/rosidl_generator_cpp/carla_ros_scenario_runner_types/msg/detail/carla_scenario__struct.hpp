// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenario.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__STRUCT_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenario __attribute__((deprecated))
#else
# define DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenario __declspec(deprecated)
#endif

namespace carla_ros_scenario_runner_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaScenario_
{
  using Type = CarlaScenario_<ContainerAllocator>;

  explicit CarlaScenario_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->scenario_file = "";
    }
  }

  explicit CarlaScenario_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    scenario_file(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->scenario_file = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _scenario_file_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _scenario_file_type scenario_file;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__scenario_file(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->scenario_file = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenario
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_ros_scenario_runner_types__msg__CarlaScenario
    std::shared_ptr<carla_ros_scenario_runner_types::msg::CarlaScenario_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaScenario_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->scenario_file != other.scenario_file) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaScenario_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaScenario_

// alias to use template instance with default allocator
using CarlaScenario =
  carla_ros_scenario_runner_types::msg::CarlaScenario_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_ros_scenario_runner_types

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__STRUCT_HPP_
