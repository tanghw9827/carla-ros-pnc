// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenario.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "carla_ros_scenario_runner_types/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace carla_ros_scenario_runner_types
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
cdr_serialize(
  const carla_ros_scenario_runner_types::msg::CarlaScenario & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_ros_scenario_runner_types::msg::CarlaScenario & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
get_serialized_size(
  const carla_ros_scenario_runner_types::msg::CarlaScenario & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
max_serialized_size_CarlaScenario(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carla_ros_scenario_runner_types

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_ros_scenario_runner_types, msg, CarlaScenario)();

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
