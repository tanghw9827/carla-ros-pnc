// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carla_ros_scenario_runner_types:srv/ExecuteScenario.idl
// generated code does not contain a copyright notice
#include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace carla_ros_scenario_runner_types
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carla_ros_scenario_runner_types::msg::CarlaScenario &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carla_ros_scenario_runner_types::msg::CarlaScenario &);
size_t get_serialized_size(
  const carla_ros_scenario_runner_types::msg::CarlaScenario &,
  size_t current_alignment);
size_t
max_serialized_size_CarlaScenario(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carla_ros_scenario_runner_types


namespace carla_ros_scenario_runner_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
cdr_serialize(
  const carla_ros_scenario_runner_types::srv::ExecuteScenario_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: scenario
  carla_ros_scenario_runner_types::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.scenario,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_ros_scenario_runner_types::srv::ExecuteScenario_Request & ros_message)
{
  // Member: scenario
  carla_ros_scenario_runner_types::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.scenario);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
get_serialized_size(
  const carla_ros_scenario_runner_types::srv::ExecuteScenario_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: scenario

  current_alignment +=
    carla_ros_scenario_runner_types::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.scenario, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
max_serialized_size_ExecuteScenario_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: scenario
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carla_ros_scenario_runner_types::msg::typesupport_fastrtps_cpp::max_serialized_size_CarlaScenario(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ExecuteScenario_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carla_ros_scenario_runner_types::srv::ExecuteScenario_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExecuteScenario_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExecuteScenario_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carla_ros_scenario_runner_types::srv::ExecuteScenario_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExecuteScenario_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ExecuteScenario_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ExecuteScenario_Request__callbacks = {
  "carla_ros_scenario_runner_types::srv",
  "ExecuteScenario_Request",
  _ExecuteScenario_Request__cdr_serialize,
  _ExecuteScenario_Request__cdr_deserialize,
  _ExecuteScenario_Request__get_serialized_size,
  _ExecuteScenario_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExecuteScenario_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecuteScenario_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_ros_scenario_runner_types

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_ros_scenario_runner_types
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_ros_scenario_runner_types::srv::ExecuteScenario_Request>()
{
  return &carla_ros_scenario_runner_types::srv::typesupport_fastrtps_cpp::_ExecuteScenario_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_ros_scenario_runner_types, srv, ExecuteScenario_Request)() {
  return &carla_ros_scenario_runner_types::srv::typesupport_fastrtps_cpp::_ExecuteScenario_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carla_ros_scenario_runner_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
cdr_serialize(
  const carla_ros_scenario_runner_types::srv::ExecuteScenario_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  cdr << (ros_message.result ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_ros_scenario_runner_types::srv::ExecuteScenario_Response & ros_message)
{
  // Member: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.result = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
get_serialized_size(
  const carla_ros_scenario_runner_types::srv::ExecuteScenario_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_ros_scenario_runner_types
max_serialized_size_ExecuteScenario_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ExecuteScenario_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carla_ros_scenario_runner_types::srv::ExecuteScenario_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExecuteScenario_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExecuteScenario_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carla_ros_scenario_runner_types::srv::ExecuteScenario_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExecuteScenario_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ExecuteScenario_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ExecuteScenario_Response__callbacks = {
  "carla_ros_scenario_runner_types::srv",
  "ExecuteScenario_Response",
  _ExecuteScenario_Response__cdr_serialize,
  _ExecuteScenario_Response__cdr_deserialize,
  _ExecuteScenario_Response__get_serialized_size,
  _ExecuteScenario_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExecuteScenario_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecuteScenario_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_ros_scenario_runner_types

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_ros_scenario_runner_types
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_ros_scenario_runner_types::srv::ExecuteScenario_Response>()
{
  return &carla_ros_scenario_runner_types::srv::typesupport_fastrtps_cpp::_ExecuteScenario_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_ros_scenario_runner_types, srv, ExecuteScenario_Response)() {
  return &carla_ros_scenario_runner_types::srv::typesupport_fastrtps_cpp::_ExecuteScenario_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace carla_ros_scenario_runner_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ExecuteScenario__callbacks = {
  "carla_ros_scenario_runner_types::srv",
  "ExecuteScenario",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_ros_scenario_runner_types, srv, ExecuteScenario_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_ros_scenario_runner_types, srv, ExecuteScenario_Response)(),
};

static rosidl_service_type_support_t _ExecuteScenario__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecuteScenario__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_ros_scenario_runner_types

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_ros_scenario_runner_types
const rosidl_service_type_support_t *
get_service_type_support_handle<carla_ros_scenario_runner_types::srv::ExecuteScenario>()
{
  return &carla_ros_scenario_runner_types::srv::typesupport_fastrtps_cpp::_ExecuteScenario__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_ros_scenario_runner_types, srv, ExecuteScenario)() {
  return &carla_ros_scenario_runner_types::srv::typesupport_fastrtps_cpp::_ExecuteScenario__handle;
}

#ifdef __cplusplus
}
#endif
