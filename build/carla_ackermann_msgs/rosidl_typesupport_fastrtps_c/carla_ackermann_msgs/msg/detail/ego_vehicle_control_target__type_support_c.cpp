// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlTarget.idl
// generated code does not contain a copyright notice
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_ackermann_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__struct.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__functions.h"
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


using _EgoVehicleControlTarget__ros_msg_type = carla_ackermann_msgs__msg__EgoVehicleControlTarget;

static bool _EgoVehicleControlTarget__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EgoVehicleControlTarget__ros_msg_type * ros_message = static_cast<const _EgoVehicleControlTarget__ros_msg_type *>(untyped_ros_message);
  // Field name: steering_angle
  {
    cdr << ros_message->steering_angle;
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

  // Field name: jerk
  {
    cdr << ros_message->jerk;
  }

  return true;
}

static bool _EgoVehicleControlTarget__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EgoVehicleControlTarget__ros_msg_type * ros_message = static_cast<_EgoVehicleControlTarget__ros_msg_type *>(untyped_ros_message);
  // Field name: steering_angle
  {
    cdr >> ros_message->steering_angle;
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

  // Field name: jerk
  {
    cdr >> ros_message->jerk;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ackermann_msgs
size_t get_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlTarget(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EgoVehicleControlTarget__ros_msg_type * ros_message = static_cast<const _EgoVehicleControlTarget__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name steering_angle
  {
    size_t item_size = sizeof(ros_message->steering_angle);
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
  // field.name jerk
  {
    size_t item_size = sizeof(ros_message->jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EgoVehicleControlTarget__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlTarget(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ackermann_msgs
size_t max_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlTarget(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: steering_angle
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
  // member: jerk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EgoVehicleControlTarget__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlTarget(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EgoVehicleControlTarget = {
  "carla_ackermann_msgs::msg",
  "EgoVehicleControlTarget",
  _EgoVehicleControlTarget__cdr_serialize,
  _EgoVehicleControlTarget__cdr_deserialize,
  _EgoVehicleControlTarget__get_serialized_size,
  _EgoVehicleControlTarget__max_serialized_size
};

static rosidl_message_type_support_t _EgoVehicleControlTarget__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EgoVehicleControlTarget,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ackermann_msgs, msg, EgoVehicleControlTarget)() {
  return &_EgoVehicleControlTarget__type_support;
}

#if defined(__cplusplus)
}
#endif
