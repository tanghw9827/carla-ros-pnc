// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:srv/DestroyObject.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__STRUCT_H_
#define CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/DestroyObject in the package carla_msgs.
typedef struct carla_msgs__srv__DestroyObject_Request
{
  int32_t id;
} carla_msgs__srv__DestroyObject_Request;

// Struct for a sequence of carla_msgs__srv__DestroyObject_Request.
typedef struct carla_msgs__srv__DestroyObject_Request__Sequence
{
  carla_msgs__srv__DestroyObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__srv__DestroyObject_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DestroyObject in the package carla_msgs.
typedef struct carla_msgs__srv__DestroyObject_Response
{
  bool success;
} carla_msgs__srv__DestroyObject_Response;

// Struct for a sequence of carla_msgs__srv__DestroyObject_Response.
typedef struct carla_msgs__srv__DestroyObject_Response__Sequence
{
  carla_msgs__srv__DestroyObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__srv__DestroyObject_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__STRUCT_H_
