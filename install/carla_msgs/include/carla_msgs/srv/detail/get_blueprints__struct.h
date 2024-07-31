// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:srv/GetBlueprints.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__GET_BLUEPRINTS__STRUCT_H_
#define CARLA_MSGS__SRV__DETAIL__GET_BLUEPRINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filter'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetBlueprints in the package carla_msgs.
typedef struct carla_msgs__srv__GetBlueprints_Request
{
  rosidl_runtime_c__String filter;
} carla_msgs__srv__GetBlueprints_Request;

// Struct for a sequence of carla_msgs__srv__GetBlueprints_Request.
typedef struct carla_msgs__srv__GetBlueprints_Request__Sequence
{
  carla_msgs__srv__GetBlueprints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__srv__GetBlueprints_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'blueprints'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetBlueprints in the package carla_msgs.
typedef struct carla_msgs__srv__GetBlueprints_Response
{
  rosidl_runtime_c__String__Sequence blueprints;
} carla_msgs__srv__GetBlueprints_Response;

// Struct for a sequence of carla_msgs__srv__GetBlueprints_Response.
typedef struct carla_msgs__srv__GetBlueprints_Response__Sequence
{
  carla_msgs__srv__GetBlueprints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__srv__GetBlueprints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__SRV__DETAIL__GET_BLUEPRINTS__STRUCT_H_
