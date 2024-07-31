// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaStatus.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carla_msgs__msg__CarlaStatus__init(carla_msgs__msg__CarlaStatus * msg)
{
  if (!msg) {
    return false;
  }
  // frame
  // fixed_delta_seconds
  // synchronous_mode
  // synchronous_mode_running
  return true;
}

void
carla_msgs__msg__CarlaStatus__fini(carla_msgs__msg__CarlaStatus * msg)
{
  if (!msg) {
    return;
  }
  // frame
  // fixed_delta_seconds
  // synchronous_mode
  // synchronous_mode_running
}

bool
carla_msgs__msg__CarlaStatus__are_equal(const carla_msgs__msg__CarlaStatus * lhs, const carla_msgs__msg__CarlaStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  // fixed_delta_seconds
  if (lhs->fixed_delta_seconds != rhs->fixed_delta_seconds) {
    return false;
  }
  // synchronous_mode
  if (lhs->synchronous_mode != rhs->synchronous_mode) {
    return false;
  }
  // synchronous_mode_running
  if (lhs->synchronous_mode_running != rhs->synchronous_mode_running) {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaStatus__copy(
  const carla_msgs__msg__CarlaStatus * input,
  carla_msgs__msg__CarlaStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // frame
  output->frame = input->frame;
  // fixed_delta_seconds
  output->fixed_delta_seconds = input->fixed_delta_seconds;
  // synchronous_mode
  output->synchronous_mode = input->synchronous_mode;
  // synchronous_mode_running
  output->synchronous_mode_running = input->synchronous_mode_running;
  return true;
}

carla_msgs__msg__CarlaStatus *
carla_msgs__msg__CarlaStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaStatus * msg = (carla_msgs__msg__CarlaStatus *)allocator.allocate(sizeof(carla_msgs__msg__CarlaStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaStatus));
  bool success = carla_msgs__msg__CarlaStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaStatus__destroy(carla_msgs__msg__CarlaStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_msgs__msg__CarlaStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_msgs__msg__CarlaStatus__Sequence__init(carla_msgs__msg__CarlaStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaStatus * data = NULL;

  if (size) {
    data = (carla_msgs__msg__CarlaStatus *)allocator.zero_allocate(size, sizeof(carla_msgs__msg__CarlaStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaStatus__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaStatus__Sequence__fini(carla_msgs__msg__CarlaStatus__Sequence * array)
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
      carla_msgs__msg__CarlaStatus__fini(&array->data[i]);
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

carla_msgs__msg__CarlaStatus__Sequence *
carla_msgs__msg__CarlaStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaStatus__Sequence * array = (carla_msgs__msg__CarlaStatus__Sequence *)allocator.allocate(sizeof(carla_msgs__msg__CarlaStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaStatus__Sequence__destroy(carla_msgs__msg__CarlaStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_msgs__msg__CarlaStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_msgs__msg__CarlaStatus__Sequence__are_equal(const carla_msgs__msg__CarlaStatus__Sequence * lhs, const carla_msgs__msg__CarlaStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaStatus__Sequence__copy(
  const carla_msgs__msg__CarlaStatus__Sequence * input,
  carla_msgs__msg__CarlaStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaStatus);
    carla_msgs__msg__CarlaStatus * data =
      (carla_msgs__msg__CarlaStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaStatus__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
