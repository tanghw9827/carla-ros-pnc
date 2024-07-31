// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_ros_scenario_runner_types:srv/ExecuteScenario.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__BUILDER_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__BUILDER_HPP_

#include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_ros_scenario_runner_types
{

namespace srv
{

namespace builder
{

class Init_ExecuteScenario_Request_scenario
{
public:
  Init_ExecuteScenario_Request_scenario()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_ros_scenario_runner_types::srv::ExecuteScenario_Request scenario(::carla_ros_scenario_runner_types::srv::ExecuteScenario_Request::_scenario_type arg)
  {
    msg_.scenario = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_ros_scenario_runner_types::srv::ExecuteScenario_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_ros_scenario_runner_types::srv::ExecuteScenario_Request>()
{
  return carla_ros_scenario_runner_types::srv::builder::Init_ExecuteScenario_Request_scenario();
}

}  // namespace carla_ros_scenario_runner_types


namespace carla_ros_scenario_runner_types
{

namespace srv
{

namespace builder
{

class Init_ExecuteScenario_Response_result
{
public:
  Init_ExecuteScenario_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_ros_scenario_runner_types::srv::ExecuteScenario_Response result(::carla_ros_scenario_runner_types::srv::ExecuteScenario_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_ros_scenario_runner_types::srv::ExecuteScenario_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_ros_scenario_runner_types::srv::ExecuteScenario_Response>()
{
  return carla_ros_scenario_runner_types::srv::builder::Init_ExecuteScenario_Response_result();
}

}  // namespace carla_ros_scenario_runner_types

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__BUILDER_HPP_
