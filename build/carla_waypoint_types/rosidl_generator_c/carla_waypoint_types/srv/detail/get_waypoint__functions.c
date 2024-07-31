// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_waypoint_types:srv/GetWaypoint.idl
// generated code does not contain a copyright notice
#include "carla_waypoint_types/srv/detail/get_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `location`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
carla_waypoint_types__srv__GetWaypoint_Request__init(carla_waypoint_types__srv__GetWaypoint_Request * msg)
{
  if (!msg) {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__init(&msg->location)) {
    carla_waypoint_types__srv__GetWaypoint_Request__fini(msg);
    return false;
  }
  return true;
}

void
carla_waypoint_types__srv__GetWaypoint_Request__fini(carla_waypoint_types__srv__GetWaypoint_Request * msg)
{
  if (!msg) {
    return;
  }
  // location
  geometry_msgs__msg__Point__fini(&msg->location);
}

bool
carla_waypoint_types__srv__GetWaypoint_Request__are_equal(const carla_waypoint_types__srv__GetWaypoint_Request * lhs, const carla_waypoint_types__srv__GetWaypoint_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  return true;
}

bool
carla_waypoint_types__srv__GetWaypoint_Request__copy(
  const carla_waypoint_types__srv__GetWaypoint_Request * input,
  carla_waypoint_types__srv__GetWaypoint_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  return true;
}

carla_waypoint_types__srv__GetWaypoint_Request *
carla_waypoint_types__srv__GetWaypoint_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_waypoint_types__srv__GetWaypoint_Request * msg = (carla_waypoint_types__srv__GetWaypoint_Request *)allocator.allocate(sizeof(carla_waypoint_types__srv__GetWaypoint_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_waypoint_types__srv__GetWaypoint_Request));
  bool success = carla_waypoint_types__srv__GetWaypoint_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_waypoint_types__srv__GetWaypoint_Request__destroy(carla_waypoint_types__srv__GetWaypoint_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_waypoint_types__srv__GetWaypoint_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_waypoint_types__srv__GetWaypoint_Request__Sequence__init(carla_waypoint_types__srv__GetWaypoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_waypoint_types__srv__GetWaypoint_Request * data = NULL;

  if (size) {
    data = (carla_waypoint_types__srv__GetWaypoint_Request *)allocator.zero_allocate(size, sizeof(carla_waypoint_types__srv__GetWaypoint_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_waypoint_types__srv__GetWaypoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_waypoint_types__srv__GetWaypoint_Request__fini(&data[i - 1]);
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
carla_waypoint_types__srv__GetWaypoint_Request__Sequence__fini(carla_waypoint_types__srv__GetWaypoint_Request__Sequence * array)
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
      carla_waypoint_types__srv__GetWaypoint_Request__fini(&array->data[i]);
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

carla_waypoint_types__srv__GetWaypoint_Request__Sequence *
carla_waypoint_types__srv__GetWaypoint_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_waypoint_types__srv__GetWaypoint_Request__Sequence * array = (carla_waypoint_types__srv__GetWaypoint_Request__Sequence *)allocator.allocate(sizeof(carla_waypoint_types__srv__GetWaypoint_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_waypoint_types__srv__GetWaypoint_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_waypoint_types__srv__GetWaypoint_Request__Sequence__destroy(carla_waypoint_types__srv__GetWaypoint_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_waypoint_types__srv__GetWaypoint_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_waypoint_types__srv__GetWaypoint_Request__Sequence__are_equal(const carla_waypoint_types__srv__GetWaypoint_Request__Sequence * lhs, const carla_waypoint_types__srv__GetWaypoint_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_waypoint_types__srv__GetWaypoint_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_waypoint_types__srv__GetWaypoint_Request__Sequence__copy(
  const carla_waypoint_types__srv__GetWaypoint_Request__Sequence * input,
  carla_waypoint_types__srv__GetWaypoint_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_waypoint_types__srv__GetWaypoint_Request);
    carla_waypoint_types__srv__GetWaypoint_Request * data =
      (carla_waypoint_types__srv__GetWaypoint_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_waypoint_types__srv__GetWaypoint_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_waypoint_types__srv__GetWaypoint_Request__fini(&data[i]);
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
    if (!carla_waypoint_types__srv__GetWaypoint_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `waypoint`
#include "carla_waypoint_types/msg/detail/carla_waypoint__functions.h"

bool
carla_waypoint_types__srv__GetWaypoint_Response__init(carla_waypoint_types__srv__GetWaypoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // waypoint
  if (!carla_waypoint_types__msg__CarlaWaypoint__init(&msg->waypoint)) {
    carla_waypoint_types__srv__GetWaypoint_Response__fini(msg);
    return false;
  }
  return true;
}

void
carla_waypoint_types__srv__GetWaypoint_Response__fini(carla_waypoint_types__srv__GetWaypoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // waypoint
  carla_waypoint_types__msg__CarlaWaypoint__fini(&msg->waypoint);
}

bool
carla_waypoint_types__srv__GetWaypoint_Response__are_equal(const carla_waypoint_types__srv__GetWaypoint_Response * lhs, const carla_waypoint_types__srv__GetWaypoint_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoint
  if (!carla_waypoint_types__msg__CarlaWaypoint__are_equal(
      &(lhs->waypoint), &(rhs->waypoint)))
  {
    return false;
  }
  return true;
}

bool
carla_waypoint_types__srv__GetWaypoint_Response__copy(
  const carla_waypoint_types__srv__GetWaypoint_Response * input,
  carla_waypoint_types__srv__GetWaypoint_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoint
  if (!carla_waypoint_types__msg__CarlaWaypoint__copy(
      &(input->waypoint), &(output->waypoint)))
  {
    return false;
  }
  return true;
}

carla_waypoint_types__srv__GetWaypoint_Response *
carla_waypoint_types__srv__GetWaypoint_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_waypoint_types__srv__GetWaypoint_Response * msg = (carla_waypoint_types__srv__GetWaypoint_Response *)allocator.allocate(sizeof(carla_waypoint_types__srv__GetWaypoint_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_waypoint_types__srv__GetWaypoint_Response));
  bool success = carla_waypoint_types__srv__GetWaypoint_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_waypoint_types__srv__GetWaypoint_Response__destroy(carla_waypoint_types__srv__GetWaypoint_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_waypoint_types__srv__GetWaypoint_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_waypoint_types__srv__GetWaypoint_Response__Sequence__init(carla_waypoint_types__srv__GetWaypoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_waypoint_types__srv__GetWaypoint_Response * data = NULL;

  if (size) {
    data = (carla_waypoint_types__srv__GetWaypoint_Response *)allocator.zero_allocate(size, sizeof(carla_waypoint_types__srv__GetWaypoint_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_waypoint_types__srv__GetWaypoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_waypoint_types__srv__GetWaypoint_Response__fini(&data[i - 1]);
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
carla_waypoint_types__srv__GetWaypoint_Response__Sequence__fini(carla_waypoint_types__srv__GetWaypoint_Response__Sequence * array)
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
      carla_waypoint_types__srv__GetWaypoint_Response__fini(&array->data[i]);
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

carla_waypoint_types__srv__GetWaypoint_Response__Sequence *
carla_waypoint_types__srv__GetWaypoint_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_waypoint_types__srv__GetWaypoint_Response__Sequence * array = (carla_waypoint_types__srv__GetWaypoint_Response__Sequence *)allocator.allocate(sizeof(carla_waypoint_types__srv__GetWaypoint_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_waypoint_types__srv__GetWaypoint_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_waypoint_types__srv__GetWaypoint_Response__Sequence__destroy(carla_waypoint_types__srv__GetWaypoint_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_waypoint_types__srv__GetWaypoint_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_waypoint_types__srv__GetWaypoint_Response__Sequence__are_equal(const carla_waypoint_types__srv__GetWaypoint_Response__Sequence * lhs, const carla_waypoint_types__srv__GetWaypoint_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_waypoint_types__srv__GetWaypoint_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_waypoint_types__srv__GetWaypoint_Response__Sequence__copy(
  const carla_waypoint_types__srv__GetWaypoint_Response__Sequence * input,
  carla_waypoint_types__srv__GetWaypoint_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_waypoint_types__srv__GetWaypoint_Response);
    carla_waypoint_types__srv__GetWaypoint_Response * data =
      (carla_waypoint_types__srv__GetWaypoint_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_waypoint_types__srv__GetWaypoint_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_waypoint_types__srv__GetWaypoint_Response__fini(&data[i]);
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
    if (!carla_waypoint_types__srv__GetWaypoint_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
