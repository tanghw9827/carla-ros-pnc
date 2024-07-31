// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaActorList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_actor_list__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_actor_list__functions.h"
#include "carla_msgs/msg/detail/carla_actor_list__struct.h"


// Include directives for member types
// Member `actors`
#include "carla_msgs/msg/carla_actor_info.h"
// Member `actors`
#include "carla_msgs/msg/detail/carla_actor_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaActorList__init(message_memory);
}

void CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaActorList__fini(message_memory);
}

size_t CarlaActorList__rosidl_typesupport_introspection_c__size_function__CarlaActorInfo__actors(
  const void * untyped_member)
{
  const carla_msgs__msg__CarlaActorInfo__Sequence * member =
    (const carla_msgs__msg__CarlaActorInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * CarlaActorList__rosidl_typesupport_introspection_c__get_const_function__CarlaActorInfo__actors(
  const void * untyped_member, size_t index)
{
  const carla_msgs__msg__CarlaActorInfo__Sequence * member =
    (const carla_msgs__msg__CarlaActorInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CarlaActorList__rosidl_typesupport_introspection_c__get_function__CarlaActorInfo__actors(
  void * untyped_member, size_t index)
{
  carla_msgs__msg__CarlaActorInfo__Sequence * member =
    (carla_msgs__msg__CarlaActorInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CarlaActorList__rosidl_typesupport_introspection_c__resize_function__CarlaActorInfo__actors(
  void * untyped_member, size_t size)
{
  carla_msgs__msg__CarlaActorInfo__Sequence * member =
    (carla_msgs__msg__CarlaActorInfo__Sequence *)(untyped_member);
  carla_msgs__msg__CarlaActorInfo__Sequence__fini(member);
  return carla_msgs__msg__CarlaActorInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_message_member_array[1] = {
  {
    "actors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaActorList, actors),  // bytes offset in struct
    NULL,  // default value
    CarlaActorList__rosidl_typesupport_introspection_c__size_function__CarlaActorInfo__actors,  // size() function pointer
    CarlaActorList__rosidl_typesupport_introspection_c__get_const_function__CarlaActorInfo__actors,  // get_const(index) function pointer
    CarlaActorList__rosidl_typesupport_introspection_c__get_function__CarlaActorInfo__actors,  // get(index) function pointer
    CarlaActorList__rosidl_typesupport_introspection_c__resize_function__CarlaActorInfo__actors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaActorList",  // message name
  1,  // number of fields
  sizeof(carla_msgs__msg__CarlaActorList),
  CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_message_member_array,  // message members
  CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_message_type_support_handle = {
  0,
  &CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaActorList)() {
  CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaActorInfo)();
  if (!CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_message_type_support_handle.typesupport_identifier) {
    CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaActorList__rosidl_typesupport_introspection_c__CarlaActorList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
