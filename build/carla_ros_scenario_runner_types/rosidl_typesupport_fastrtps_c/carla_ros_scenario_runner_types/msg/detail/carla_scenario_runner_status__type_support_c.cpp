// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioRunnerStatus.idl
// generated code does not contain a copyright notice
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_runner_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_ros_scenario_runner_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_runner_status__struct.h"
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_runner_status__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CarlaScenarioRunnerStatus__ros_msg_type = carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus;

static bool _CarlaScenarioRunnerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarlaScenarioRunnerStatus__ros_msg_type * ros_message = static_cast<const _CarlaScenarioRunnerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

static bool _CarlaScenarioRunnerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarlaScenarioRunnerStatus__ros_msg_type * ros_message = static_cast<_CarlaScenarioRunnerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types
size_t get_serialized_size_carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarlaScenarioRunnerStatus__ros_msg_type * ros_message = static_cast<const _CarlaScenarioRunnerStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarlaScenarioRunnerStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types
size_t max_serialized_size_carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CarlaScenarioRunnerStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarlaScenarioRunnerStatus = {
  "carla_ros_scenario_runner_types::msg",
  "CarlaScenarioRunnerStatus",
  _CarlaScenarioRunnerStatus__cdr_serialize,
  _CarlaScenarioRunnerStatus__cdr_deserialize,
  _CarlaScenarioRunnerStatus__get_serialized_size,
  _CarlaScenarioRunnerStatus__max_serialized_size
};

static rosidl_message_type_support_t _CarlaScenarioRunnerStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarlaScenarioRunnerStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ros_scenario_runner_types, msg, CarlaScenarioRunnerStatus)() {
  return &_CarlaScenarioRunnerStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
