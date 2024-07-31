// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlCurrent.idl
// generated code does not contain a copyright notice
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__init(carla_ackermann_msgs__msg__EgoVehicleControlCurrent * msg)
{
  if (!msg) {
    return false;
  }
  // time_sec
  // speed
  // speed_abs
  // accel
  return true;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__fini(carla_ackermann_msgs__msg__EgoVehicleControlCurrent * msg)
{
  if (!msg) {
    return;
  }
  // time_sec
  // speed
  // speed_abs
  // accel
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlCurrent * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlCurrent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_sec
  if (lhs->time_sec != rhs->time_sec) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // speed_abs
  if (lhs->speed_abs != rhs->speed_abs) {
    return false;
  }
  // accel
  if (lhs->accel != rhs->accel) {
    return false;
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlCurrent * input,
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent * output)
{
  if (!input || !output) {
    return false;
  }
  // time_sec
  output->time_sec = input->time_sec;
  // speed
  output->speed = input->speed;
  // speed_abs
  output->speed_abs = input->speed_abs;
  // accel
  output->accel = input->accel;
  return true;
}

carla_ackermann_msgs__msg__EgoVehicleControlCurrent *
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent * msg = (carla_ackermann_msgs__msg__EgoVehicleControlCurrent *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent));
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlCurrent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__destroy(carla_ackermann_msgs__msg__EgoVehicleControlCurrent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_ackermann_msgs__msg__EgoVehicleControlCurrent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence__init(carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent * data = NULL;

  if (size) {
    data = (carla_ackermann_msgs__msg__EgoVehicleControlCurrent *)allocator.zero_allocate(size, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ackermann_msgs__msg__EgoVehicleControlCurrent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ackermann_msgs__msg__EgoVehicleControlCurrent__fini(&data[i - 1]);
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
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence__fini(carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence * array)
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
      carla_ackermann_msgs__msg__EgoVehicleControlCurrent__fini(&array->data[i]);
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

carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence *
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence * array = (carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence__destroy(carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ackermann_msgs__msg__EgoVehicleControlCurrent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence * input,
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ackermann_msgs__msg__EgoVehicleControlCurrent);
    carla_ackermann_msgs__msg__EgoVehicleControlCurrent * data =
      (carla_ackermann_msgs__msg__EgoVehicleControlCurrent *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ackermann_msgs__msg__EgoVehicleControlCurrent__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ackermann_msgs__msg__EgoVehicleControlCurrent__fini(&data[i]);
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
    if (!carla_ackermann_msgs__msg__EgoVehicleControlCurrent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
