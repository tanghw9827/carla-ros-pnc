// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
// generated code does not contain a copyright notice
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__init(carla_ackermann_msgs__msg__EgoVehicleControlMaxima * msg)
{
  if (!msg) {
    return false;
  }
  // max_steering_angle
  // max_speed
  // max_accel
  // max_decel
  // min_accel
  // max_pedal
  return true;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__fini(carla_ackermann_msgs__msg__EgoVehicleControlMaxima * msg)
{
  if (!msg) {
    return;
  }
  // max_steering_angle
  // max_speed
  // max_accel
  // max_decel
  // min_accel
  // max_pedal
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlMaxima * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlMaxima * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // max_steering_angle
  if (lhs->max_steering_angle != rhs->max_steering_angle) {
    return false;
  }
  // max_speed
  if (lhs->max_speed != rhs->max_speed) {
    return false;
  }
  // max_accel
  if (lhs->max_accel != rhs->max_accel) {
    return false;
  }
  // max_decel
  if (lhs->max_decel != rhs->max_decel) {
    return false;
  }
  // min_accel
  if (lhs->min_accel != rhs->min_accel) {
    return false;
  }
  // max_pedal
  if (lhs->max_pedal != rhs->max_pedal) {
    return false;
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlMaxima * input,
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima * output)
{
  if (!input || !output) {
    return false;
  }
  // max_steering_angle
  output->max_steering_angle = input->max_steering_angle;
  // max_speed
  output->max_speed = input->max_speed;
  // max_accel
  output->max_accel = input->max_accel;
  // max_decel
  output->max_decel = input->max_decel;
  // min_accel
  output->min_accel = input->min_accel;
  // max_pedal
  output->max_pedal = input->max_pedal;
  return true;
}

carla_ackermann_msgs__msg__EgoVehicleControlMaxima *
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima * msg = (carla_ackermann_msgs__msg__EgoVehicleControlMaxima *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlMaxima), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlMaxima));
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlMaxima__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__destroy(carla_ackermann_msgs__msg__EgoVehicleControlMaxima * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_ackermann_msgs__msg__EgoVehicleControlMaxima__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__init(carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima * data = NULL;

  if (size) {
    data = (carla_ackermann_msgs__msg__EgoVehicleControlMaxima *)allocator.zero_allocate(size, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlMaxima), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ackermann_msgs__msg__EgoVehicleControlMaxima__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ackermann_msgs__msg__EgoVehicleControlMaxima__fini(&data[i - 1]);
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
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__fini(carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * array)
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
      carla_ackermann_msgs__msg__EgoVehicleControlMaxima__fini(&array->data[i]);
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

carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence *
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * array = (carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__destroy(carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ackermann_msgs__msg__EgoVehicleControlMaxima__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * input,
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ackermann_msgs__msg__EgoVehicleControlMaxima);
    carla_ackermann_msgs__msg__EgoVehicleControlMaxima * data =
      (carla_ackermann_msgs__msg__EgoVehicleControlMaxima *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ackermann_msgs__msg__EgoVehicleControlMaxima__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ackermann_msgs__msg__EgoVehicleControlMaxima__fini(&data[i]);
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
    if (!carla_ackermann_msgs__msg__EgoVehicleControlMaxima__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
