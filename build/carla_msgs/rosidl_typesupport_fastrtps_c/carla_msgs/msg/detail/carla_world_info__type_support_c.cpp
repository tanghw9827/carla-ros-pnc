// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_msgs:msg/CarlaWorldInfo.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_world_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_msgs/msg/detail/carla_world_info__struct.h"
#include "carla_msgs/msg/detail/carla_world_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // map_name, opendrive
#include "rosidl_runtime_c/string_functions.h"  // map_name, opendrive

// forward declare type support functions


using _CarlaWorldInfo__ros_msg_type = carla_msgs__msg__CarlaWorldInfo;

static bool _CarlaWorldInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarlaWorldInfo__ros_msg_type * ros_message = static_cast<const _CarlaWorldInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: map_name
  {
    const rosidl_runtime_c__String * str = &ros_message->map_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: opendrive
  {
    const rosidl_runtime_c__String * str = &ros_message->opendrive;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _CarlaWorldInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarlaWorldInfo__ros_msg_type * ros_message = static_cast<_CarlaWorldInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: map_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->map_name.data) {
      rosidl_runtime_c__String__init(&ros_message->map_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->map_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'map_name'\n");
      return false;
    }
  }

  // Field name: opendrive
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->opendrive.data) {
      rosidl_runtime_c__String__init(&ros_message->opendrive);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->opendrive,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'opendrive'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t get_serialized_size_carla_msgs__msg__CarlaWorldInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarlaWorldInfo__ros_msg_type * ros_message = static_cast<const _CarlaWorldInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name map_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->map_name.size + 1);
  // field.name opendrive
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->opendrive.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CarlaWorldInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_msgs__msg__CarlaWorldInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t max_serialized_size_carla_msgs__msg__CarlaWorldInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: map_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: opendrive
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CarlaWorldInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_msgs__msg__CarlaWorldInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarlaWorldInfo = {
  "carla_msgs::msg",
  "CarlaWorldInfo",
  _CarlaWorldInfo__cdr_serialize,
  _CarlaWorldInfo__cdr_deserialize,
  _CarlaWorldInfo__get_serialized_size,
  _CarlaWorldInfo__max_serialized_size
};

static rosidl_message_type_support_t _CarlaWorldInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarlaWorldInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaWorldInfo)() {
  return &_CarlaWorldInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
