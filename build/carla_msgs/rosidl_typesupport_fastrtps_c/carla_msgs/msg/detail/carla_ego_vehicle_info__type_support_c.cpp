// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfo.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__struct.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__functions.h"
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

#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__functions.h"  // wheels
#include "geometry_msgs/msg/detail/vector3__functions.h"  // center_of_mass
#include "rosidl_runtime_c/string.h"  // rolename, type
#include "rosidl_runtime_c/string_functions.h"  // rolename, type

// forward declare type support functions
size_t get_serialized_size_carla_msgs__msg__CarlaEgoVehicleInfoWheel(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carla_msgs__msg__CarlaEgoVehicleInfoWheel(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaEgoVehicleInfoWheel)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _CarlaEgoVehicleInfo__ros_msg_type = carla_msgs__msg__CarlaEgoVehicleInfo;

static bool _CarlaEgoVehicleInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarlaEgoVehicleInfo__ros_msg_type * ros_message = static_cast<const _CarlaEgoVehicleInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: type
  {
    const rosidl_runtime_c__String * str = &ros_message->type;
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

  // Field name: rolename
  {
    const rosidl_runtime_c__String * str = &ros_message->rolename;
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

  // Field name: wheels
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaEgoVehicleInfoWheel
      )()->data);
    size_t size = ros_message->wheels.size;
    auto array_ptr = ros_message->wheels.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: max_rpm
  {
    cdr << ros_message->max_rpm;
  }

  // Field name: moi
  {
    cdr << ros_message->moi;
  }

  // Field name: damping_rate_full_throttle
  {
    cdr << ros_message->damping_rate_full_throttle;
  }

  // Field name: damping_rate_zero_throttle_clutch_engaged
  {
    cdr << ros_message->damping_rate_zero_throttle_clutch_engaged;
  }

  // Field name: damping_rate_zero_throttle_clutch_disengaged
  {
    cdr << ros_message->damping_rate_zero_throttle_clutch_disengaged;
  }

  // Field name: use_gear_autobox
  {
    cdr << (ros_message->use_gear_autobox ? true : false);
  }

  // Field name: gear_switch_time
  {
    cdr << ros_message->gear_switch_time;
  }

  // Field name: clutch_strength
  {
    cdr << ros_message->clutch_strength;
  }

  // Field name: mass
  {
    cdr << ros_message->mass;
  }

  // Field name: drag_coefficient
  {
    cdr << ros_message->drag_coefficient;
  }

  // Field name: center_of_mass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->center_of_mass, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CarlaEgoVehicleInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarlaEgoVehicleInfo__ros_msg_type * ros_message = static_cast<_CarlaEgoVehicleInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_runtime_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

  // Field name: rolename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rolename.data) {
      rosidl_runtime_c__String__init(&ros_message->rolename);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rolename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rolename'\n");
      return false;
    }
  }

  // Field name: wheels
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaEgoVehicleInfoWheel
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wheels.data) {
      carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__fini(&ros_message->wheels);
    }
    if (!carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__init(&ros_message->wheels, size)) {
      return "failed to create array for field 'wheels'";
    }
    auto array_ptr = ros_message->wheels.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: max_rpm
  {
    cdr >> ros_message->max_rpm;
  }

  // Field name: moi
  {
    cdr >> ros_message->moi;
  }

  // Field name: damping_rate_full_throttle
  {
    cdr >> ros_message->damping_rate_full_throttle;
  }

  // Field name: damping_rate_zero_throttle_clutch_engaged
  {
    cdr >> ros_message->damping_rate_zero_throttle_clutch_engaged;
  }

  // Field name: damping_rate_zero_throttle_clutch_disengaged
  {
    cdr >> ros_message->damping_rate_zero_throttle_clutch_disengaged;
  }

  // Field name: use_gear_autobox
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_gear_autobox = tmp ? true : false;
  }

  // Field name: gear_switch_time
  {
    cdr >> ros_message->gear_switch_time;
  }

  // Field name: clutch_strength
  {
    cdr >> ros_message->clutch_strength;
  }

  // Field name: mass
  {
    cdr >> ros_message->mass;
  }

  // Field name: drag_coefficient
  {
    cdr >> ros_message->drag_coefficient;
  }

  // Field name: center_of_mass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->center_of_mass))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t get_serialized_size_carla_msgs__msg__CarlaEgoVehicleInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarlaEgoVehicleInfo__ros_msg_type * ros_message = static_cast<const _CarlaEgoVehicleInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);
  // field.name rolename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rolename.size + 1);
  // field.name wheels
  {
    size_t array_size = ros_message->wheels.size;
    auto array_ptr = ros_message->wheels.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carla_msgs__msg__CarlaEgoVehicleInfoWheel(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name max_rpm
  {
    size_t item_size = sizeof(ros_message->max_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name moi
  {
    size_t item_size = sizeof(ros_message->moi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name damping_rate_full_throttle
  {
    size_t item_size = sizeof(ros_message->damping_rate_full_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name damping_rate_zero_throttle_clutch_engaged
  {
    size_t item_size = sizeof(ros_message->damping_rate_zero_throttle_clutch_engaged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name damping_rate_zero_throttle_clutch_disengaged
  {
    size_t item_size = sizeof(ros_message->damping_rate_zero_throttle_clutch_disengaged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_gear_autobox
  {
    size_t item_size = sizeof(ros_message->use_gear_autobox);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_switch_time
  {
    size_t item_size = sizeof(ros_message->gear_switch_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clutch_strength
  {
    size_t item_size = sizeof(ros_message->clutch_strength);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mass
  {
    size_t item_size = sizeof(ros_message->mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drag_coefficient
  {
    size_t item_size = sizeof(ros_message->drag_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_of_mass

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->center_of_mass), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CarlaEgoVehicleInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_msgs__msg__CarlaEgoVehicleInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t max_serialized_size_carla_msgs__msg__CarlaEgoVehicleInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: rolename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: wheels
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carla_msgs__msg__CarlaEgoVehicleInfoWheel(
        full_bounded, current_alignment);
    }
  }
  // member: max_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: moi
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: damping_rate_full_throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: damping_rate_zero_throttle_clutch_engaged
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: damping_rate_zero_throttle_clutch_disengaged
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: use_gear_autobox
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_switch_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: clutch_strength
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mass
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: drag_coefficient
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: center_of_mass
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CarlaEgoVehicleInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_msgs__msg__CarlaEgoVehicleInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarlaEgoVehicleInfo = {
  "carla_msgs::msg",
  "CarlaEgoVehicleInfo",
  _CarlaEgoVehicleInfo__cdr_serialize,
  _CarlaEgoVehicleInfo__cdr_deserialize,
  _CarlaEgoVehicleInfo__get_serialized_size,
  _CarlaEgoVehicleInfo__max_serialized_size
};

static rosidl_message_type_support_t _CarlaEgoVehicleInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarlaEgoVehicleInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaEgoVehicleInfo)() {
  return &_CarlaEgoVehicleInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
