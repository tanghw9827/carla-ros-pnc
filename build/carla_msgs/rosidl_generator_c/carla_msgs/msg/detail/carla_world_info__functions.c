// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaWorldInfo.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_world_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `map_name`
// Member `opendrive`
#include "rosidl_runtime_c/string_functions.h"

bool
carla_msgs__msg__CarlaWorldInfo__init(carla_msgs__msg__CarlaWorldInfo * msg)
{
  if (!msg) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    carla_msgs__msg__CarlaWorldInfo__fini(msg);
    return false;
  }
  // opendrive
  if (!rosidl_runtime_c__String__init(&msg->opendrive)) {
    carla_msgs__msg__CarlaWorldInfo__fini(msg);
    return false;
  }
  return true;
}

void
carla_msgs__msg__CarlaWorldInfo__fini(carla_msgs__msg__CarlaWorldInfo * msg)
{
  if (!msg) {
    return;
  }
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // opendrive
  rosidl_runtime_c__String__fini(&msg->opendrive);
}

bool
carla_msgs__msg__CarlaWorldInfo__are_equal(const carla_msgs__msg__CarlaWorldInfo * lhs, const carla_msgs__msg__CarlaWorldInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // opendrive
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->opendrive), &(rhs->opendrive)))
  {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaWorldInfo__copy(
  const carla_msgs__msg__CarlaWorldInfo * input,
  carla_msgs__msg__CarlaWorldInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // opendrive
  if (!rosidl_runtime_c__String__copy(
      &(input->opendrive), &(output->opendrive)))
  {
    return false;
  }
  return true;
}

carla_msgs__msg__CarlaWorldInfo *
carla_msgs__msg__CarlaWorldInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaWorldInfo * msg = (carla_msgs__msg__CarlaWorldInfo *)allocator.allocate(sizeof(carla_msgs__msg__CarlaWorldInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaWorldInfo));
  bool success = carla_msgs__msg__CarlaWorldInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaWorldInfo__destroy(carla_msgs__msg__CarlaWorldInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_msgs__msg__CarlaWorldInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_msgs__msg__CarlaWorldInfo__Sequence__init(carla_msgs__msg__CarlaWorldInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaWorldInfo * data = NULL;

  if (size) {
    data = (carla_msgs__msg__CarlaWorldInfo *)allocator.zero_allocate(size, sizeof(carla_msgs__msg__CarlaWorldInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaWorldInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaWorldInfo__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaWorldInfo__Sequence__fini(carla_msgs__msg__CarlaWorldInfo__Sequence * array)
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
      carla_msgs__msg__CarlaWorldInfo__fini(&array->data[i]);
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

carla_msgs__msg__CarlaWorldInfo__Sequence *
carla_msgs__msg__CarlaWorldInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaWorldInfo__Sequence * array = (carla_msgs__msg__CarlaWorldInfo__Sequence *)allocator.allocate(sizeof(carla_msgs__msg__CarlaWorldInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaWorldInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaWorldInfo__Sequence__destroy(carla_msgs__msg__CarlaWorldInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_msgs__msg__CarlaWorldInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_msgs__msg__CarlaWorldInfo__Sequence__are_equal(const carla_msgs__msg__CarlaWorldInfo__Sequence * lhs, const carla_msgs__msg__CarlaWorldInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaWorldInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaWorldInfo__Sequence__copy(
  const carla_msgs__msg__CarlaWorldInfo__Sequence * input,
  carla_msgs__msg__CarlaWorldInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaWorldInfo);
    carla_msgs__msg__CarlaWorldInfo * data =
      (carla_msgs__msg__CarlaWorldInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaWorldInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaWorldInfo__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaWorldInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
