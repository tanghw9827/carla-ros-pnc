// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_waypoint_types:srv/GetWaypoint.idl
// generated code does not contain a copyright notice
#include "carla_waypoint_types/srv/detail/get_waypoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_waypoint_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_waypoint_types/srv/detail/get_waypoint__struct.h"
#include "carla_waypoint_types/srv/detail/get_waypoint__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // location

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_waypoint_types
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_waypoint_types
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_waypoint_types
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _GetWaypoint_Request__ros_msg_type = carla_waypoint_types__srv__GetWaypoint_Request;

static bool _GetWaypoint_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetWaypoint_Request__ros_msg_type * ros_message = static_cast<const _GetWaypoint_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->location, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetWaypoint_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetWaypoint_Request__ros_msg_type * ros_message = static_cast<_GetWaypoint_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->location))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_waypoint_types
size_t get_serialized_size_carla_waypoint_types__srv__GetWaypoint_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetWaypoint_Request__ros_msg_type * ros_message = static_cast<const _GetWaypoint_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name location

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->location), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetWaypoint_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_waypoint_types__srv__GetWaypoint_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_waypoint_types
size_t max_serialized_size_carla_waypoint_types__srv__GetWaypoint_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: location
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetWaypoint_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_waypoint_types__srv__GetWaypoint_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetWaypoint_Request = {
  "carla_waypoint_types::srv",
  "GetWaypoint_Request",
  _GetWaypoint_Request__cdr_serialize,
  _GetWaypoint_Request__cdr_deserialize,
  _GetWaypoint_Request__get_serialized_size,
  _GetWaypoint_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetWaypoint_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetWaypoint_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_waypoint_types, srv, GetWaypoint_Request)() {
  return &_GetWaypoint_Request__type_support;
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
// #include "carla_waypoint_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carla_waypoint_types/srv/detail/get_waypoint__struct.h"
// already included above
// #include "carla_waypoint_types/srv/detail/get_waypoint__functions.h"
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

#include "carla_waypoint_types/msg/detail/carla_waypoint__functions.h"  // waypoint

// forward declare type support functions
size_t get_serialized_size_carla_waypoint_types__msg__CarlaWaypoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carla_waypoint_types__msg__CarlaWaypoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_waypoint_types, msg, CarlaWaypoint)();


using _GetWaypoint_Response__ros_msg_type = carla_waypoint_types__srv__GetWaypoint_Response;

static bool _GetWaypoint_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetWaypoint_Response__ros_msg_type * ros_message = static_cast<const _GetWaypoint_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carla_waypoint_types, msg, CarlaWaypoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->waypoint, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetWaypoint_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetWaypoint_Response__ros_msg_type * ros_message = static_cast<_GetWaypoint_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carla_waypoint_types, msg, CarlaWaypoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->waypoint))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_waypoint_types
size_t get_serialized_size_carla_waypoint_types__srv__GetWaypoint_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetWaypoint_Response__ros_msg_type * ros_message = static_cast<const _GetWaypoint_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name waypoint

  current_alignment += get_serialized_size_carla_waypoint_types__msg__CarlaWaypoint(
    &(ros_message->waypoint), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetWaypoint_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_waypoint_types__srv__GetWaypoint_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_waypoint_types
size_t max_serialized_size_carla_waypoint_types__srv__GetWaypoint_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: waypoint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carla_waypoint_types__msg__CarlaWaypoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetWaypoint_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_waypoint_types__srv__GetWaypoint_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetWaypoint_Response = {
  "carla_waypoint_types::srv",
  "GetWaypoint_Response",
  _GetWaypoint_Response__cdr_serialize,
  _GetWaypoint_Response__cdr_deserialize,
  _GetWaypoint_Response__get_serialized_size,
  _GetWaypoint_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetWaypoint_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetWaypoint_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_waypoint_types, srv, GetWaypoint_Response)() {
  return &_GetWaypoint_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carla_waypoint_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_waypoint_types/srv/get_waypoint.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetWaypoint__callbacks = {
  "carla_waypoint_types::srv",
  "GetWaypoint",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_waypoint_types, srv, GetWaypoint_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_waypoint_types, srv, GetWaypoint_Response)(),
};

static rosidl_service_type_support_t GetWaypoint__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetWaypoint__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_waypoint_types, srv, GetWaypoint)() {
  return &GetWaypoint__handle;
}

#if defined(__cplusplus)
}
#endif
