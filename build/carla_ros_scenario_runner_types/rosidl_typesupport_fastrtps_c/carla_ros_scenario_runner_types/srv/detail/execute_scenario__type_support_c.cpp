// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_ros_scenario_runner_types:srv/ExecuteScenario.idl
// generated code does not contain a copyright notice
#include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_ros_scenario_runner_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__struct.h"
#include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__functions.h"
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

#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__functions.h"  // scenario

// forward declare type support functions
size_t get_serialized_size_carla_ros_scenario_runner_types__msg__CarlaScenario(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carla_ros_scenario_runner_types__msg__CarlaScenario(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ros_scenario_runner_types, msg, CarlaScenario)();


using _ExecuteScenario_Request__ros_msg_type = carla_ros_scenario_runner_types__srv__ExecuteScenario_Request;

static bool _ExecuteScenario_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExecuteScenario_Request__ros_msg_type * ros_message = static_cast<const _ExecuteScenario_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: scenario
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carla_ros_scenario_runner_types, msg, CarlaScenario
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->scenario, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ExecuteScenario_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExecuteScenario_Request__ros_msg_type * ros_message = static_cast<_ExecuteScenario_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: scenario
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carla_ros_scenario_runner_types, msg, CarlaScenario
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->scenario))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types
size_t get_serialized_size_carla_ros_scenario_runner_types__srv__ExecuteScenario_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExecuteScenario_Request__ros_msg_type * ros_message = static_cast<const _ExecuteScenario_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name scenario

  current_alignment += get_serialized_size_carla_ros_scenario_runner_types__msg__CarlaScenario(
    &(ros_message->scenario), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ExecuteScenario_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_ros_scenario_runner_types__srv__ExecuteScenario_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types
size_t max_serialized_size_carla_ros_scenario_runner_types__srv__ExecuteScenario_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: scenario
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carla_ros_scenario_runner_types__msg__CarlaScenario(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ExecuteScenario_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_ros_scenario_runner_types__srv__ExecuteScenario_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ExecuteScenario_Request = {
  "carla_ros_scenario_runner_types::srv",
  "ExecuteScenario_Request",
  _ExecuteScenario_Request__cdr_serialize,
  _ExecuteScenario_Request__cdr_deserialize,
  _ExecuteScenario_Request__get_serialized_size,
  _ExecuteScenario_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExecuteScenario_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExecuteScenario_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ros_scenario_runner_types, srv, ExecuteScenario_Request)() {
  return &_ExecuteScenario_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "carla_ros_scenario_runner_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__struct.h"
// already included above
// #include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _ExecuteScenario_Response__ros_msg_type = carla_ros_scenario_runner_types__srv__ExecuteScenario_Response;

static bool _ExecuteScenario_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExecuteScenario_Response__ros_msg_type * ros_message = static_cast<const _ExecuteScenario_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _ExecuteScenario_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExecuteScenario_Response__ros_msg_type * ros_message = static_cast<_ExecuteScenario_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types
size_t get_serialized_size_carla_ros_scenario_runner_types__srv__ExecuteScenario_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExecuteScenario_Response__ros_msg_type * ros_message = static_cast<const _ExecuteScenario_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ExecuteScenario_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_ros_scenario_runner_types__srv__ExecuteScenario_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types
size_t max_serialized_size_carla_ros_scenario_runner_types__srv__ExecuteScenario_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ExecuteScenario_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_ros_scenario_runner_types__srv__ExecuteScenario_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ExecuteScenario_Response = {
  "carla_ros_scenario_runner_types::srv",
  "ExecuteScenario_Response",
  _ExecuteScenario_Response__cdr_serialize,
  _ExecuteScenario_Response__cdr_deserialize,
  _ExecuteScenario_Response__get_serialized_size,
  _ExecuteScenario_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExecuteScenario_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExecuteScenario_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ros_scenario_runner_types, srv, ExecuteScenario_Response)() {
  return &_ExecuteScenario_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carla_ros_scenario_runner_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_ros_scenario_runner_types/srv/execute_scenario.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ExecuteScenario__callbacks = {
  "carla_ros_scenario_runner_types::srv",
  "ExecuteScenario",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ros_scenario_runner_types, srv, ExecuteScenario_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ros_scenario_runner_types, srv, ExecuteScenario_Response)(),
};

static rosidl_service_type_support_t ExecuteScenario__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ExecuteScenario__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ros_scenario_runner_types, srv, ExecuteScenario)() {
  return &ExecuteScenario__handle;
}

#if defined(__cplusplus)
}
#endif
