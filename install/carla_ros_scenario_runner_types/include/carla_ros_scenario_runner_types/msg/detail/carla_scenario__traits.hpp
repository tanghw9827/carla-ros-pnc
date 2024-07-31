// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenario.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__TRAITS_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__TRAITS_HPP_

#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_ros_scenario_runner_types::msg::CarlaScenario>()
{
  return "carla_ros_scenario_runner_types::msg::CarlaScenario";
}

template<>
inline const char * name<carla_ros_scenario_runner_types::msg::CarlaScenario>()
{
  return "carla_ros_scenario_runner_types/msg/CarlaScenario";
}

template<>
struct has_fixed_size<carla_ros_scenario_runner_types::msg::CarlaScenario>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carla_ros_scenario_runner_types::msg::CarlaScenario>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carla_ros_scenario_runner_types::msg::CarlaScenario>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__TRAITS_HPP_
