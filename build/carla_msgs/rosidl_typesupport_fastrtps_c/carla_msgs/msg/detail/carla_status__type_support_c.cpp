// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_msgs:msg/CarlaStatus.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_msgs/msg/detail/carla_status__struct.h"
#include "carla_msgs/msg/detail/carla_status__functions.h"
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


using _CarlaStatus__ros_msg_type = carla_msgs__msg__CarlaStatus;

static bool _CarlaStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarlaStatus__ros_msg_type * ros_message = static_cast<const _CarlaStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: frame
  {
    cdr << ros_message->frame;
  }

  // Field name: fixed_delta_seconds
  {
    cdr << ros_message->fixed_delta_seconds;
  }

  // Field name: synchronous_mode
  {
    cdr << (ros_message->synchronous_mode ? true : false);
  }

  // Field name: synchronous_mode_running
  {
    cdr << (ros_message->synchronous_mode_running ? true : false);
  }

  return true;
}

static bool _CarlaStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarlaStatus__ros_msg_type * ros_message = static_cast<_CarlaStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: frame
  {
    cdr >> ros_message->frame;
  }

  // Field name: fixed_delta_seconds
  {
    cdr >> ros_message->fixed_delta_seconds;
  }

  // Field name: synchronous_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->synchronous_mode = tmp ? true : false;
  }

  // Field name: synchronous_mode_running
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->synchronous_mode_running = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t get_serialized_size_carla_msgs__msg__CarlaStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarlaStatus__ros_msg_type * ros_message = static_cast<const _CarlaStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name frame
  {
    size_t item_size = sizeof(ros_message->frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fixed_delta_seconds
  {
    size_t item_size = sizeof(ros_message->fixed_delta_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name synchronous_mode
  {
    size_t item_size = sizeof(ros_message->synchronous_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name synchronous_mode_running
  {
    size_t item_size = sizeof(ros_message->synchronous_mode_running);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarlaStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_msgs__msg__CarlaStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t max_serialized_size_carla_msgs__msg__CarlaStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: frame
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fixed_delta_seconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: synchronous_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: synchronous_mode_running
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CarlaStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_msgs__msg__CarlaStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarlaStatus = {
  "carla_msgs::msg",
  "CarlaStatus",
  _CarlaStatus__cdr_serialize,
  _CarlaStatus__cdr_deserialize,
  _CarlaStatus__get_serialized_size,
  _CarlaStatus__max_serialized_size
};

static rosidl_message_type_support_t _CarlaStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarlaStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaStatus)() {
  return &_CarlaStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
