// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:srv/SpawnObject.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__STRUCT_H_
#define CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'attributes'
#include "diagnostic_msgs/msg/detail/key_value__struct.h"
// Member 'transform'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in srv/SpawnObject in the package carla_msgs.
typedef struct carla_msgs__srv__SpawnObject_Request
{
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String id;
  diagnostic_msgs__msg__KeyValue__Sequence attributes;
  geometry_msgs__msg__Pose transform;
  uint32_t attach_to;
  bool random_pose;
} carla_msgs__srv__SpawnObject_Request;

// Struct for a sequence of carla_msgs__srv__SpawnObject_Request.
typedef struct carla_msgs__srv__SpawnObject_Request__Sequence
{
  carla_msgs__srv__SpawnObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__srv__SpawnObject_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/SpawnObject in the package carla_msgs.
typedef struct carla_msgs__srv__SpawnObject_Response
{
  int32_t id;
  rosidl_runtime_c__String error_string;
} carla_msgs__srv__SpawnObject_Response;

// Struct for a sequence of carla_msgs__srv__SpawnObject_Response.
typedef struct carla_msgs__srv__SpawnObject_Response__Sequence
{
  carla_msgs__srv__SpawnObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__srv__SpawnObject_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__STRUCT_H_
