// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__rosidl_typesupport_introspection_c.h"
#include "carla_ackermann_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__functions.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_ackermann_msgs__msg__EgoVehicleControlTarget__init(message_memory);
}

void EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_fini_function(void * message_memory)
{
  carla_ackermann_msgs__msg__EgoVehicleControlTarget__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_message_member_array[5] = {
  {
    "steering_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlTarget, steering_angle),  // bytes offset in struct
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
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlTarget, speed),  // bytes offset in struct
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
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlTarget, speed_abs),  // bytes offset in struct
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
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlTarget, accel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlTarget, jerk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_message_members = {
  "carla_ackermann_msgs__msg",  // message namespace
  "EgoVehicleControlTarget",  // message name
  5,  // number of fields
  sizeof(carla_ackermann_msgs__msg__EgoVehicleControlTarget),
  EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_message_member_array,  // message members
  EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_message_type_support_handle = {
  0,
  &EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_ackermann_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_ackermann_msgs, msg, EgoVehicleControlTarget)() {
  if (!EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_message_type_support_handle.typesupport_identifier) {
    EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EgoVehicleControlTarget__rosidl_typesupport_introspection_c__EgoVehicleControlTarget_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
