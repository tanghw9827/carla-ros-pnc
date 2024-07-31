// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenario.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__BUILDER_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__BUILDER_HPP_

#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_ros_scenario_runner_types
{

namespace msg
{

namespace builder
{

class Init_CarlaScenario_scenario_file
{
public:
  explicit Init_CarlaScenario_scenario_file(::carla_ros_scenario_runner_types::msg::CarlaScenario & msg)
  : msg_(msg)
  {}
  ::carla_ros_scenario_runner_types::msg::CarlaScenario scenario_file(::carla_ros_scenario_runner_types::msg::CarlaScenario::_scenario_file_type arg)
  {
    msg_.scenario_file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_ros_scenario_runner_types::msg::CarlaScenario msg_;
};

class Init_CarlaScenario_name
{
public:
  Init_CarlaScenario_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaScenario_scenario_file name(::carla_ros_scenario_runner_types::msg::CarlaScenario::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CarlaScenario_scenario_file(msg_);
  }

private:
  ::carla_ros_scenario_runner_types::msg::CarlaScenario msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_ros_scenario_runner_types::msg::CarlaScenario>()
{
  return carla_ros_scenario_runner_types::msg::builder::Init_CarlaScenario_name();
}

}  // namespace carla_ros_scenario_runner_types

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__BUILDER_HPP_
