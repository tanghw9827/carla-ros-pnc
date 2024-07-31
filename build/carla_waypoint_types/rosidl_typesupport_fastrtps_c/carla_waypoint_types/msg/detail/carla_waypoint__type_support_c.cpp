// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_waypoint_types:msg/CarlaWaypoint.idl
// generated code does not contain a copyright notice
#include "carla_waypoint_types/msg/detail/carla_waypoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_waypoint_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_waypoint_types/msg/detail/carla_waypoint__struct.h"
#include "carla_waypoint_types/msg/detail/carla_waypoint__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // pose

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_waypoint_types
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_waypoint_types
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_waypoint_types
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _CarlaWaypoint__ros_msg_type = carla_waypoint_types__msg__CarlaWaypoint;

static bool _CarlaWaypoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarlaWaypoint__ros_msg_type * ros_message = static_cast<const _CarlaWaypoint__ros_msg_type *>(untyped_ros_message);
  // Field name: road_id
  {
    cdr << ros_message->road_id;
  }

  // Field name: section_id
  {
    cdr << ros_message->section_id;
  }

  // Field name: lane_id
  {
    cdr << ros_message->lane_id;
  }

  // Field name: lane_width
  {
    cdr << ros_message->lane_width;
  }

  // Field name: is_junction
  {
    cdr << (ros_message->is_junction ? true : false);
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CarlaWaypoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarlaWaypoint__ros_msg_type * ros_message = static_cast<_CarlaWaypoint__ros_msg_type *>(untyped_ros_message);
  // Field name: road_id
  {
    cdr >> ros_message->road_id;
  }

  // Field name: section_id
  {
    cdr >> ros_message->section_id;
  }

  // Field name: lane_id
  {
    cdr >> ros_message->lane_id;
  }

  // Field name: lane_width
  {
    cdr >> ros_message->lane_width;
  }

  // Field name: is_junction
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_junction = tmp ? true : false;
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_waypoint_types
size_t get_serialized_size_carla_waypoint_types__msg__CarlaWaypoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarlaWaypoint__ros_msg_type * ros_message = static_cast<const _CarlaWaypoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name road_id
  {
    size_t item_size = sizeof(ros_message->road_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name section_id
  {
    size_t item_size = sizeof(ros_message->section_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_id
  {
    size_t item_size = sizeof(ros_message->lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_width
  {
    size_t item_size = sizeof(ros_message->lane_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_junction
  {
    size_t item_size = sizeof(ros_message->is_junction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CarlaWaypoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_waypoint_types__msg__CarlaWaypoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_waypoint_types
size_t max_serialized_size_carla_waypoint_types__msg__CarlaWaypoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: road_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: section_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_junction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CarlaWaypoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_waypoint_types__msg__CarlaWaypoint(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarlaWaypoint = {
  "carla_waypoint_types::msg",
  "CarlaWaypoint",
  _CarlaWaypoint__cdr_serialize,
  _CarlaWaypoint__cdr_deserialize,
  _CarlaWaypoint__get_serialized_size,
  _CarlaWaypoint__max_serialized_size
};

static rosidl_message_type_support_t _CarlaWaypoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarlaWaypoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_waypoint_types, msg, CarlaWaypoint)() {
  return &_CarlaWaypoint__type_support;
}

#if defined(__cplusplus)
}
#endif
