// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_control__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_control__functions.h"
#include "carla_msgs/msg/detail/carla_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaControl__init(message_memory);
}

void CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaControl, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaControl",  // message name
  1,  // number of fields
  sizeof(carla_msgs__msg__CarlaControl),
  CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_message_member_array,  // message members
  CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_message_type_support_handle = {
  0,
  &CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaControl)() {
  if (!CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_message_type_support_handle.typesupport_identifier) {
    CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaControl__rosidl_typesupport_introspection_c__CarlaControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
