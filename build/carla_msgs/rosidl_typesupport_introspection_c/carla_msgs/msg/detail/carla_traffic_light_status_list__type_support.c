// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaTrafficLightStatusList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_traffic_light_status_list__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_traffic_light_status_list__functions.h"
#include "carla_msgs/msg/detail/carla_traffic_light_status_list__struct.h"


// Include directives for member types
// Member `traffic_lights`
#include "carla_msgs/msg/carla_traffic_light_status.h"
// Member `traffic_lights`
#include "carla_msgs/msg/detail/carla_traffic_light_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaTrafficLightStatusList__init(message_memory);
}

void CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaTrafficLightStatusList__fini(message_memory);
}

size_t CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__size_function__CarlaTrafficLightStatus__traffic_lights(
  const void * untyped_member)
{
  const carla_msgs__msg__CarlaTrafficLightStatus__Sequence * member =
    (const carla_msgs__msg__CarlaTrafficLightStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__get_const_function__CarlaTrafficLightStatus__traffic_lights(
  const void * untyped_member, size_t index)
{
  const carla_msgs__msg__CarlaTrafficLightStatus__Sequence * member =
    (const carla_msgs__msg__CarlaTrafficLightStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__get_function__CarlaTrafficLightStatus__traffic_lights(
  void * untyped_member, size_t index)
{
  carla_msgs__msg__CarlaTrafficLightStatus__Sequence * member =
    (carla_msgs__msg__CarlaTrafficLightStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__resize_function__CarlaTrafficLightStatus__traffic_lights(
  void * untyped_member, size_t size)
{
  carla_msgs__msg__CarlaTrafficLightStatus__Sequence * member =
    (carla_msgs__msg__CarlaTrafficLightStatus__Sequence *)(untyped_member);
  carla_msgs__msg__CarlaTrafficLightStatus__Sequence__fini(member);
  return carla_msgs__msg__CarlaTrafficLightStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_message_member_array[1] = {
  {
    "traffic_lights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaTrafficLightStatusList, traffic_lights),  // bytes offset in struct
    NULL,  // default value
    CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__size_function__CarlaTrafficLightStatus__traffic_lights,  // size() function pointer
    CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__get_const_function__CarlaTrafficLightStatus__traffic_lights,  // get_const(index) function pointer
    CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__get_function__CarlaTrafficLightStatus__traffic_lights,  // get(index) function pointer
    CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__resize_function__CarlaTrafficLightStatus__traffic_lights  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaTrafficLightStatusList",  // message name
  1,  // number of fields
  sizeof(carla_msgs__msg__CarlaTrafficLightStatusList),
  CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_message_member_array,  // message members
  CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_message_type_support_handle = {
  0,
  &CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaTrafficLightStatusList)() {
  CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaTrafficLightStatus)();
  if (!CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_message_type_support_handle.typesupport_identifier) {
    CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaTrafficLightStatusList__rosidl_typesupport_introspection_c__CarlaTrafficLightStatusList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
