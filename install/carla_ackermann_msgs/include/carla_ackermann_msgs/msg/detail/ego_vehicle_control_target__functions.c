// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlTarget.idl
// generated code does not contain a copyright notice
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carla_ackermann_msgs__msg__EgoVehicleControlTarget__init(carla_ackermann_msgs__msg__EgoVehicleControlTarget * msg)
{
  if (!msg) {
    return false;
  }
  // steering_angle
  // speed
  // speed_abs
  // accel
  // jerk
  return true;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlTarget__fini(carla_ackermann_msgs__msg__EgoVehicleControlTarget * msg)
{
  if (!msg) {
    return;
  }
  // steering_angle
  // speed
  // speed_abs
  // accel
  // jerk
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlTarget__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlTarget * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlTarget * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
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
  // jerk
  if (lhs->jerk != rhs->jerk) {
    return false;
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlTarget__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlTarget * input,
  carla_ackermann_msgs__msg__EgoVehicleControlTarget * output)
{
  if (!input || !output) {
    return false;
  }
  // steering_angle
  output->steering_angle = input->steering_angle;
  // speed
  output->speed = input->speed;
  // speed_abs
  output->speed_abs = input->speed_abs;
  // accel
  output->accel = input->accel;
  // jerk
  output->jerk = input->jerk;
  return true;
}

carla_ackermann_msgs__msg__EgoVehicleControlTarget *
carla_ackermann_msgs__msg__EgoVehicleControlTarget__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlTarget * msg = (carla_ackermann_msgs__msg__EgoVehicleControlTarget *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlTarget));
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlTarget__destroy(carla_ackermann_msgs__msg__EgoVehicleControlTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_ackermann_msgs__msg__EgoVehicleControlTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence__init(carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlTarget * data = NULL;

  if (size) {
    data = (carla_ackermann_msgs__msg__EgoVehicleControlTarget *)allocator.zero_allocate(size, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ackermann_msgs__msg__EgoVehicleControlTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ackermann_msgs__msg__EgoVehicleControlTarget__fini(&data[i - 1]);
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
carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence__fini(carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence * array)
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
      carla_ackermann_msgs__msg__EgoVehicleControlTarget__fini(&array->data[i]);
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

carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence *
carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence * array = (carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence__destroy(carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ackermann_msgs__msg__EgoVehicleControlTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence * input,
  carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ackermann_msgs__msg__EgoVehicleControlTarget);
    carla_ackermann_msgs__msg__EgoVehicleControlTarget * data =
      (carla_ackermann_msgs__msg__EgoVehicleControlTarget *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ackermann_msgs__msg__EgoVehicleControlTarget__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ackermann_msgs__msg__EgoVehicleControlTarget__fini(&data[i]);
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
    if (!carla_ackermann_msgs__msg__EgoVehicleControlTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
