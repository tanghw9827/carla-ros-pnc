// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaCollisionEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_collision_event__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_collision_event__functions.h"
#include "carla_msgs/msg/detail/carla_collision_event__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `normal_impulse`
#include "geometry_msgs/msg/vector3.h"
// Member `normal_impulse`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaCollisionEvent__init(message_memory);
}

void CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaCollisionEvent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaCollisionEvent, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "other_actor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaCollisionEvent, other_actor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normal_impulse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaCollisionEvent, normal_impulse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaCollisionEvent",  // message name
  3,  // number of fields
  sizeof(carla_msgs__msg__CarlaCollisionEvent),
  CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_member_array,  // message members
  CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_type_support_handle = {
  0,
  &CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaCollisionEvent)() {
  CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_type_support_handle.typesupport_identifier) {
    CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaCollisionEvent__rosidl_typesupport_introspection_c__CarlaCollisionEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
