// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlCurrent.idl
// generated code does not contain a copyright notice
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_ackermann_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__struct.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__functions.h"
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


using _EgoVehicleControlCurrent__ros_msg_type = carla_ackermann_msgs__msg__EgoVehicleControlCurrent;

static bool _EgoVehicleControlCurrent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EgoVehicleControlCurrent__ros_msg_type * ros_message = static_cast<const _EgoVehicleControlCurrent__ros_msg_type *>(untyped_ros_message);
  // Field name: time_sec
  {
    cdr << ros_message->time_sec;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: speed_abs
  {
    cdr << ros_message->speed_abs;
  }

  // Field name: accel
  {
    cdr << ros_message->accel;
  }

  return true;
}

static bool _EgoVehicleControlCurrent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EgoVehicleControlCurrent__ros_msg_type * ros_message = static_cast<_EgoVehicleControlCurrent__ros_msg_type *>(untyped_ros_message);
  // Field name: time_sec
  {
    cdr >> ros_message->time_sec;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: speed_abs
  {
    cdr >> ros_message->speed_abs;
  }

  // Field name: accel
  {
    cdr >> ros_message->accel;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ackermann_msgs
size_t get_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlCurrent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EgoVehicleControlCurrent__ros_msg_type * ros_message = static_cast<const _EgoVehicleControlCurrent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time_sec
  {
    size_t item_size = sizeof(ros_message->time_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_abs
  {
    size_t item_size = sizeof(ros_message->speed_abs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel
  {
    size_t item_size = sizeof(ros_message->accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EgoVehicleControlCurrent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlCurrent(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ackermann_msgs
size_t max_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlCurrent(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: time_sec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_abs
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EgoVehicleControlCurrent__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlCurrent(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EgoVehicleControlCurrent = {
  "carla_ackermann_msgs::msg",
  "EgoVehicleControlCurrent",
  _EgoVehicleControlCurrent__cdr_serialize,
  _EgoVehicleControlCurrent__cdr_deserialize,
  _EgoVehicleControlCurrent__get_serialized_size,
  _EgoVehicleControlCurrent__max_serialized_size
};

static rosidl_message_type_support_t _EgoVehicleControlCurrent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EgoVehicleControlCurrent,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ackermann_msgs, msg, EgoVehicleControlCurrent)() {
  return &_EgoVehicleControlCurrent__type_support;
}

#if defined(__cplusplus)
}
#endif
