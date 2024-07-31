// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaLaneInvasionEvent.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_lane_invasion_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `crossed_lane_markings`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
carla_msgs__msg__CarlaLaneInvasionEvent__init(carla_msgs__msg__CarlaLaneInvasionEvent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carla_msgs__msg__CarlaLaneInvasionEvent__fini(msg);
    return false;
  }
  // crossed_lane_markings
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->crossed_lane_markings, 0)) {
    carla_msgs__msg__CarlaLaneInvasionEvent__fini(msg);
    return false;
  }
  return true;
}

void
carla_msgs__msg__CarlaLaneInvasionEvent__fini(carla_msgs__msg__CarlaLaneInvasionEvent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // crossed_lane_markings
  rosidl_runtime_c__int32__Sequence__fini(&msg->crossed_lane_markings);
}

bool
carla_msgs__msg__CarlaLaneInvasionEvent__are_equal(const carla_msgs__msg__CarlaLaneInvasionEvent * lhs, const carla_msgs__msg__CarlaLaneInvasionEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // crossed_lane_markings
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->crossed_lane_markings), &(rhs->crossed_lane_markings)))
  {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaLaneInvasionEvent__copy(
  const carla_msgs__msg__CarlaLaneInvasionEvent * input,
  carla_msgs__msg__CarlaLaneInvasionEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // crossed_lane_markings
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->crossed_lane_markings), &(output->crossed_lane_markings)))
  {
    return false;
  }
  return true;
}

carla_msgs__msg__CarlaLaneInvasionEvent *
carla_msgs__msg__CarlaLaneInvasionEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaLaneInvasionEvent * msg = (carla_msgs__msg__CarlaLaneInvasionEvent *)allocator.allocate(sizeof(carla_msgs__msg__CarlaLaneInvasionEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaLaneInvasionEvent));
  bool success = carla_msgs__msg__CarlaLaneInvasionEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaLaneInvasionEvent__destroy(carla_msgs__msg__CarlaLaneInvasionEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_msgs__msg__CarlaLaneInvasionEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_msgs__msg__CarlaLaneInvasionEvent__Sequence__init(carla_msgs__msg__CarlaLaneInvasionEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaLaneInvasionEvent * data = NULL;

  if (size) {
    data = (carla_msgs__msg__CarlaLaneInvasionEvent *)allocator.zero_allocate(size, sizeof(carla_msgs__msg__CarlaLaneInvasionEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaLaneInvasionEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaLaneInvasionEvent__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaLaneInvasionEvent__Sequence__fini(carla_msgs__msg__CarlaLaneInvasionEvent__Sequence * array)
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
      carla_msgs__msg__CarlaLaneInvasionEvent__fini(&array->data[i]);
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

carla_msgs__msg__CarlaLaneInvasionEvent__Sequence *
carla_msgs__msg__CarlaLaneInvasionEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaLaneInvasionEvent__Sequence * array = (carla_msgs__msg__CarlaLaneInvasionEvent__Sequence *)allocator.allocate(sizeof(carla_msgs__msg__CarlaLaneInvasionEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaLaneInvasionEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaLaneInvasionEvent__Sequence__destroy(carla_msgs__msg__CarlaLaneInvasionEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_msgs__msg__CarlaLaneInvasionEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_msgs__msg__CarlaLaneInvasionEvent__Sequence__are_equal(const carla_msgs__msg__CarlaLaneInvasionEvent__Sequence * lhs, const carla_msgs__msg__CarlaLaneInvasionEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaLaneInvasionEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaLaneInvasionEvent__Sequence__copy(
  const carla_msgs__msg__CarlaLaneInvasionEvent__Sequence * input,
  carla_msgs__msg__CarlaLaneInvasionEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaLaneInvasionEvent);
    carla_msgs__msg__CarlaLaneInvasionEvent * data =
      (carla_msgs__msg__CarlaLaneInvasionEvent *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaLaneInvasionEvent__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaLaneInvasionEvent__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaLaneInvasionEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
