// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:srv/SpawnObject.idl
// generated code does not contain a copyright notice
#include "carla_msgs/srv/detail/spawn_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `type`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `attributes`
#include "diagnostic_msgs/msg/detail/key_value__functions.h"
// Member `transform`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
carla_msgs__srv__SpawnObject_Request__init(carla_msgs__srv__SpawnObject_Request * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    carla_msgs__srv__SpawnObject_Request__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    carla_msgs__srv__SpawnObject_Request__fini(msg);
    return false;
  }
  // attributes
  if (!diagnostic_msgs__msg__KeyValue__Sequence__init(&msg->attributes, 0)) {
    carla_msgs__srv__SpawnObject_Request__fini(msg);
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Pose__init(&msg->transform)) {
    carla_msgs__srv__SpawnObject_Request__fini(msg);
    return false;
  }
  // attach_to
  // random_pose
  return true;
}

void
carla_msgs__srv__SpawnObject_Request__fini(carla_msgs__srv__SpawnObject_Request * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // attributes
  diagnostic_msgs__msg__KeyValue__Sequence__fini(&msg->attributes);
  // transform
  geometry_msgs__msg__Pose__fini(&msg->transform);
  // attach_to
  // random_pose
}

bool
carla_msgs__srv__SpawnObject_Request__are_equal(const carla_msgs__srv__SpawnObject_Request * lhs, const carla_msgs__srv__SpawnObject_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // attributes
  if (!diagnostic_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->attributes), &(rhs->attributes)))
  {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->transform), &(rhs->transform)))
  {
    return false;
  }
  // attach_to
  if (lhs->attach_to != rhs->attach_to) {
    return false;
  }
  // random_pose
  if (lhs->random_pose != rhs->random_pose) {
    return false;
  }
  return true;
}

bool
carla_msgs__srv__SpawnObject_Request__copy(
  const carla_msgs__srv__SpawnObject_Request * input,
  carla_msgs__srv__SpawnObject_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // attributes
  if (!diagnostic_msgs__msg__KeyValue__Sequence__copy(
      &(input->attributes), &(output->attributes)))
  {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Pose__copy(
      &(input->transform), &(output->transform)))
  {
    return false;
  }
  // attach_to
  output->attach_to = input->attach_to;
  // random_pose
  output->random_pose = input->random_pose;
  return true;
}

carla_msgs__srv__SpawnObject_Request *
carla_msgs__srv__SpawnObject_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__srv__SpawnObject_Request * msg = (carla_msgs__srv__SpawnObject_Request *)allocator.allocate(sizeof(carla_msgs__srv__SpawnObject_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__srv__SpawnObject_Request));
  bool success = carla_msgs__srv__SpawnObject_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_msgs__srv__SpawnObject_Request__destroy(carla_msgs__srv__SpawnObject_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_msgs__srv__SpawnObject_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_msgs__srv__SpawnObject_Request__Sequence__init(carla_msgs__srv__SpawnObject_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__srv__SpawnObject_Request * data = NULL;

  if (size) {
    data = (carla_msgs__srv__SpawnObject_Request *)allocator.zero_allocate(size, sizeof(carla_msgs__srv__SpawnObject_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__srv__SpawnObject_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__srv__SpawnObject_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
carla_msgs__srv__SpawnObject_Request__Sequence__fini(carla_msgs__srv__SpawnObject_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carla_msgs__srv__SpawnObject_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

carla_msgs__srv__SpawnObject_Request__Sequence *
carla_msgs__srv__SpawnObject_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__srv__SpawnObject_Request__Sequence * array = (carla_msgs__srv__SpawnObject_Request__Sequence *)allocator.allocate(sizeof(carla_msgs__srv__SpawnObject_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__srv__SpawnObject_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_msgs__srv__SpawnObject_Request__Sequence__destroy(carla_msgs__srv__SpawnObject_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_msgs__srv__SpawnObject_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_msgs__srv__SpawnObject_Request__Sequence__are_equal(const carla_msgs__srv__SpawnObject_Request__Sequence * lhs, const carla_msgs__srv__SpawnObject_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__srv__SpawnObject_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__srv__SpawnObject_Request__Sequence__copy(
  const carla_msgs__srv__SpawnObject_Request__Sequence * input,
  carla_msgs__srv__SpawnObject_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__srv__SpawnObject_Request);
    carla_msgs__srv__SpawnObject_Request * data =
      (carla_msgs__srv__SpawnObject_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__srv__SpawnObject_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__srv__SpawnObject_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carla_msgs__srv__SpawnObject_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
carla_msgs__srv__SpawnObject_Response__init(carla_msgs__srv__SpawnObject_Response * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // error_string
  if (!rosidl_runtime_c__String__init(&msg->error_string)) {
    carla_msgs__srv__SpawnObject_Response__fini(msg);
    return false;
  }
  return true;
}

void
carla_msgs__srv__SpawnObject_Response__fini(carla_msgs__srv__SpawnObject_Response * msg)
{
  if (!msg) {
    return;
  }
  // id
  // error_string
  rosidl_runtime_c__String__fini(&msg->error_string);
}

bool
carla_msgs__srv__SpawnObject_Response__are_equal(const carla_msgs__srv__SpawnObject_Response * lhs, const carla_msgs__srv__SpawnObject_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_string), &(rhs->error_string)))
  {
    return false;
  }
  return true;
}

bool
carla_msgs__srv__SpawnObject_Response__copy(
  const carla_msgs__srv__SpawnObject_Response * input,
  carla_msgs__srv__SpawnObject_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // error_string
  if (!rosidl_runtime_c__String__copy(
      &(input->error_string), &(output->error_string)))
  {
    return false;
  }
  return true;
}

carla_msgs__srv__SpawnObject_Response *
carla_msgs__srv__SpawnObject_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__srv__SpawnObject_Response * msg = (carla_msgs__srv__SpawnObject_Response *)allocator.allocate(sizeof(carla_msgs__srv__SpawnObject_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__srv__SpawnObject_Response));
  bool success = carla_msgs__srv__SpawnObject_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_msgs__srv__SpawnObject_Response__destroy(carla_msgs__srv__SpawnObject_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_msgs__srv__SpawnObject_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_msgs__srv__SpawnObject_Response__Sequence__init(carla_msgs__srv__SpawnObject_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__srv__SpawnObject_Response * data = NULL;

  if (size) {
    data = (carla_msgs__srv__SpawnObject_Response *)allocator.zero_allocate(size, sizeof(carla_msgs__srv__SpawnObject_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__srv__SpawnObject_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__srv__SpawnObject_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
carla_msgs__srv__SpawnObject_Response__Sequence__fini(carla_msgs__srv__SpawnObject_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carla_msgs__srv__SpawnObject_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

carla_msgs__srv__SpawnObject_Response__Sequence *
carla_msgs__srv__SpawnObject_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__srv__SpawnObject_Response__Sequence * array = (carla_msgs__srv__SpawnObject_Response__Sequence *)allocator.allocate(sizeof(carla_msgs__srv__SpawnObject_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__srv__SpawnObject_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_msgs__srv__SpawnObject_Response__Sequence__destroy(carla_msgs__srv__SpawnObject_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_msgs__srv__SpawnObject_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_msgs__srv__SpawnObject_Response__Sequence__are_equal(const carla_msgs__srv__SpawnObject_Response__Sequence * lhs, const carla_msgs__srv__SpawnObject_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__srv__SpawnObject_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__srv__SpawnObject_Response__Sequence__copy(
  const carla_msgs__srv__SpawnObject_Response__Sequence * input,
  carla_msgs__srv__SpawnObject_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__srv__SpawnObject_Response);
    carla_msgs__srv__SpawnObject_Response * data =
      (carla_msgs__srv__SpawnObject_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__srv__SpawnObject_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__srv__SpawnObject_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carla_msgs__srv__SpawnObject_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
