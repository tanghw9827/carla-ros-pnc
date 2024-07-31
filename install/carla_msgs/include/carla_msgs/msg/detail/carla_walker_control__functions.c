// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaWalkerControl.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_walker_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `direction`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
carla_msgs__msg__CarlaWalkerControl__init(carla_msgs__msg__CarlaWalkerControl * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3__init(&msg->direction)) {
    carla_msgs__msg__CarlaWalkerControl__fini(msg);
    return false;
  }
  // speed
  // jump
  return true;
}

void
carla_msgs__msg__CarlaWalkerControl__fini(carla_msgs__msg__CarlaWalkerControl * msg)
{
  if (!msg) {
    return;
  }
  // direction
  geometry_msgs__msg__Vector3__fini(&msg->direction);
  // speed
  // jump
}

bool
carla_msgs__msg__CarlaWalkerControl__are_equal(const carla_msgs__msg__CarlaWalkerControl * lhs, const carla_msgs__msg__CarlaWalkerControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // jump
  if (lhs->jump != rhs->jump) {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaWalkerControl__copy(
  const carla_msgs__msg__CarlaWalkerControl * input,
  carla_msgs__msg__CarlaWalkerControl * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // jump
  output->jump = input->jump;
  return true;
}

carla_msgs__msg__CarlaWalkerControl *
carla_msgs__msg__CarlaWalkerControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaWalkerControl * msg = (carla_msgs__msg__CarlaWalkerControl *)allocator.allocate(sizeof(carla_msgs__msg__CarlaWalkerControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaWalkerControl));
  bool success = carla_msgs__msg__CarlaWalkerControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaWalkerControl__destroy(carla_msgs__msg__CarlaWalkerControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_msgs__msg__CarlaWalkerControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_msgs__msg__CarlaWalkerControl__Sequence__init(carla_msgs__msg__CarlaWalkerControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaWalkerControl * data = NULL;

  if (size) {
    data = (carla_msgs__msg__CarlaWalkerControl *)allocator.zero_allocate(size, sizeof(carla_msgs__msg__CarlaWalkerControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaWalkerControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaWalkerControl__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaWalkerControl__Sequence__fini(carla_msgs__msg__CarlaWalkerControl__Sequence * array)
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
      carla_msgs__msg__CarlaWalkerControl__fini(&array->data[i]);
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

carla_msgs__msg__CarlaWalkerControl__Sequence *
carla_msgs__msg__CarlaWalkerControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaWalkerControl__Sequence * array = (carla_msgs__msg__CarlaWalkerControl__Sequence *)allocator.allocate(sizeof(carla_msgs__msg__CarlaWalkerControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaWalkerControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaWalkerControl__Sequence__destroy(carla_msgs__msg__CarlaWalkerControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_msgs__msg__CarlaWalkerControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_msgs__msg__CarlaWalkerControl__Sequence__are_equal(const carla_msgs__msg__CarlaWalkerControl__Sequence * lhs, const carla_msgs__msg__CarlaWalkerControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaWalkerControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaWalkerControl__Sequence__copy(
  const carla_msgs__msg__CarlaWalkerControl__Sequence * input,
  carla_msgs__msg__CarlaWalkerControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaWalkerControl);
    carla_msgs__msg__CarlaWalkerControl * data =
      (carla_msgs__msg__CarlaWalkerControl *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaWalkerControl__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaWalkerControl__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaWalkerControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
