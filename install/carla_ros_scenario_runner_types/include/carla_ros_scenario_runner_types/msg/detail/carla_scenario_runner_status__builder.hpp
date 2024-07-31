// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioRunnerStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__BUILDER_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__BUILDER_HPP_

#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_runner_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_ros_scenario_runner_types
{

namespace msg
{

namespace builder
{

class Init_CarlaScenarioRunnerStatus_status
{
public:
  Init_CarlaScenarioRunnerStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus status(::carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus>()
{
  return carla_ros_scenario_runner_types::msg::builder::Init_CarlaScenarioRunnerStatus_status();
}

}  // namespace carla_ros_scenario_runner_types

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__BUILDER_HPP_
