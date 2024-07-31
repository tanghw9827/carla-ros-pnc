// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__functions.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__struct.h"


// Include directives for member types
// Member `type`
// Member `rolename`
#include "rosidl_runtime_c/string_functions.h"
// Member `wheels`
#include "carla_msgs/msg/carla_ego_vehicle_info_wheel.h"
// Member `wheels`
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__rosidl_typesupport_introspection_c.h"
// Member `center_of_mass`
#include "geometry_msgs/msg/vector3.h"
// Member `center_of_mass`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaEgoVehicleInfo__init(message_memory);
}

void CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaEgoVehicleInfo__fini(message_memory);
}

size_t CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__size_function__CarlaEgoVehicleInfoWheel__wheels(
  const void * untyped_member)
{
  const carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * member =
    (const carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence *)(untyped_member);
  return member->size;
}

const void * CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__get_const_function__CarlaEgoVehicleInfoWheel__wheels(
  const void * untyped_member, size_t index)
{
  const carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * member =
    (const carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__get_function__CarlaEgoVehicleInfoWheel__wheels(
  void * untyped_member, size_t index)
{
  carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * member =
    (carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__resize_function__CarlaEgoVehicleInfoWheel__wheels(
  void * untyped_member, size_t size)
{
  carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * member =
    (carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence *)(untyped_member);
  carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__fini(member);
  return carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_member_array[15] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rolename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, rolename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, wheels),  // bytes offset in struct
    NULL,  // default value
    CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__size_function__CarlaEgoVehicleInfoWheel__wheels,  // size() function pointer
    CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__get_const_function__CarlaEgoVehicleInfoWheel__wheels,  // get_const(index) function pointer
    CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__get_function__CarlaEgoVehicleInfoWheel__wheels,  // get(index) function pointer
    CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__resize_function__CarlaEgoVehicleInfoWheel__wheels  // resize(index) function pointer
  },
  {
    "max_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, max_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, moi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping_rate_full_throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, damping_rate_full_throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping_rate_zero_throttle_clutch_engaged",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, damping_rate_zero_throttle_clutch_engaged),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping_rate_zero_throttle_clutch_disengaged",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, damping_rate_zero_throttle_clutch_disengaged),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_gear_autobox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, use_gear_autobox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear_switch_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, gear_switch_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clutch_strength",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, clutch_strength),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drag_coefficient",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, drag_coefficient),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_of_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfo, center_of_mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaEgoVehicleInfo",  // message name
  15,  // number of fields
  sizeof(carla_msgs__msg__CarlaEgoVehicleInfo),
  CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_member_array,  // message members
  CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_type_support_handle = {
  0,
  &CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaEgoVehicleInfo)() {
  CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaEgoVehicleInfoWheel)();
  CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_type_support_handle.typesupport_identifier) {
    CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaEgoVehicleInfo__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
