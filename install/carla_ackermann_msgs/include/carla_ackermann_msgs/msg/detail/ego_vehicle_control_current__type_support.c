// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlCurrent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__rosidl_typesupport_introspection_c.h"
#include "carla_ackermann_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__functions.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent__init(message_memory);
}

void EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_fini_function(void * message_memory)
{
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_message_member_array[4] = {
  {
    "time_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent, time_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent, speed_abs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent, accel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_message_members = {
  "carla_ackermann_msgs__msg",  // message namespace
  "EgoVehicleControlCurrent",  // message name
  4,  // number of fields
  sizeof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent),
  EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_message_member_array,  // message members
  EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_init_function,  // function to initialize message memory (memory has to be allocated)
  EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_message_type_support_handle = {
  0,
  &EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_ackermann_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_ackermann_msgs, msg, EgoVehicleControlCurrent)() {
  if (!EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_message_type_support_handle.typesupport_identifier) {
    EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EgoVehicleControlCurrent__rosidl_typesupport_introspection_c__EgoVehicleControlCurrent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
