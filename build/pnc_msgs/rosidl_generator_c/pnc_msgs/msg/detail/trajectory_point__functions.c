// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pnc_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "pnc_msgs/msg/detail/trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pnc_msgs__msg__TrajectoryPoint__init(pnc_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // heading
  // kappa
  // v
  // ax
  // ay
  // a_tau
  // time_stamped
  return true;
}

void
pnc_msgs__msg__TrajectoryPoint__fini(pnc_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // heading
  // kappa
  // v
  // ax
  // ay
  // a_tau
  // time_stamped
}

bool
pnc_msgs__msg__TrajectoryPoint__are_equal(const pnc_msgs__msg__TrajectoryPoint * lhs, const pnc_msgs__msg__TrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // kappa
  if (lhs->kappa != rhs->kappa) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // ax
  if (lhs->ax != rhs->ax) {
    return false;
  }
  // ay
  if (lhs->ay != rhs->ay) {
    return false;
  }
  // a_tau
  if (lhs->a_tau != rhs->a_tau) {
    return false;
  }
  // time_stamped
  if (lhs->time_stamped != rhs->time_stamped) {
    return false;
  }
  return true;
}

bool
pnc_msgs__msg__TrajectoryPoint__copy(
  const pnc_msgs__msg__TrajectoryPoint * input,
  pnc_msgs__msg__TrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // heading
  output->heading = input->heading;
  // kappa
  output->kappa = input->kappa;
  // v
  output->v = input->v;
  // ax
  output->ax = input->ax;
  // ay
  output->ay = input->ay;
  // a_tau
  output->a_tau = input->a_tau;
  // time_stamped
  output->time_stamped = input->time_stamped;
  return true;
}

pnc_msgs__msg__TrajectoryPoint *
pnc_msgs__msg__TrajectoryPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnc_msgs__msg__TrajectoryPoint * msg = (pnc_msgs__msg__TrajectoryPoint *)allocator.allocate(sizeof(pnc_msgs__msg__TrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnc_msgs__msg__TrajectoryPoint));
  bool success = pnc_msgs__msg__TrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pnc_msgs__msg__TrajectoryPoint__destroy(pnc_msgs__msg__TrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pnc_msgs__msg__TrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pnc_msgs__msg__TrajectoryPoint__Sequence__init(pnc_msgs__msg__TrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnc_msgs__msg__TrajectoryPoint * data = NULL;

  if (size) {
    data = (pnc_msgs__msg__TrajectoryPoint *)allocator.zero_allocate(size, sizeof(pnc_msgs__msg__TrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnc_msgs__msg__TrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnc_msgs__msg__TrajectoryPoint__fini(&data[i - 1]);
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
pnc_msgs__msg__TrajectoryPoint__Sequence__fini(pnc_msgs__msg__TrajectoryPoint__Sequence * array)
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
      pnc_msgs__msg__TrajectoryPoint__fini(&array->data[i]);
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

pnc_msgs__msg__TrajectoryPoint__Sequence *
pnc_msgs__msg__TrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnc_msgs__msg__TrajectoryPoint__Sequence * array = (pnc_msgs__msg__TrajectoryPoint__Sequence *)allocator.allocate(sizeof(pnc_msgs__msg__TrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pnc_msgs__msg__TrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pnc_msgs__msg__TrajectoryPoint__Sequence__destroy(pnc_msgs__msg__TrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pnc_msgs__msg__TrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pnc_msgs__msg__TrajectoryPoint__Sequence__are_equal(const pnc_msgs__msg__TrajectoryPoint__Sequence * lhs, const pnc_msgs__msg__TrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnc_msgs__msg__TrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnc_msgs__msg__TrajectoryPoint__Sequence__copy(
  const pnc_msgs__msg__TrajectoryPoint__Sequence * input,
  pnc_msgs__msg__TrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnc_msgs__msg__TrajectoryPoint);
    pnc_msgs__msg__TrajectoryPoint * data =
      (pnc_msgs__msg__TrajectoryPoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnc_msgs__msg__TrajectoryPoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pnc_msgs__msg__TrajectoryPoint__fini(&data[i]);
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
    if (!pnc_msgs__msg__TrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
