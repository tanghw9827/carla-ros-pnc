// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfoWheel.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
carla_msgs__msg__CarlaEgoVehicleInfoWheel__init(carla_msgs__msg__CarlaEgoVehicleInfoWheel * msg)
{
  if (!msg) {
    return false;
  }
  // tire_friction
  // damping_rate
  // max_steer_angle
  // radius
  // max_brake_torque
  // max_handbrake_torque
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    carla_msgs__msg__CarlaEgoVehicleInfoWheel__fini(msg);
    return false;
  }
  return true;
}

void
carla_msgs__msg__CarlaEgoVehicleInfoWheel__fini(carla_msgs__msg__CarlaEgoVehicleInfoWheel * msg)
{
  if (!msg) {
    return;
  }
  // tire_friction
  // damping_rate
  // max_steer_angle
  // radius
  // max_brake_torque
  // max_handbrake_torque
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
}

bool
carla_msgs__msg__CarlaEgoVehicleInfoWheel__are_equal(const carla_msgs__msg__CarlaEgoVehicleInfoWheel * lhs, const carla_msgs__msg__CarlaEgoVehicleInfoWheel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tire_friction
  if (lhs->tire_friction != rhs->tire_friction) {
    return false;
  }
  // damping_rate
  if (lhs->damping_rate != rhs->damping_rate) {
    return false;
  }
  // max_steer_angle
  if (lhs->max_steer_angle != rhs->max_steer_angle) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // max_brake_torque
  if (lhs->max_brake_torque != rhs->max_brake_torque) {
    return false;
  }
  // max_handbrake_torque
  if (lhs->max_handbrake_torque != rhs->max_handbrake_torque) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaEgoVehicleInfoWheel__copy(
  const carla_msgs__msg__CarlaEgoVehicleInfoWheel * input,
  carla_msgs__msg__CarlaEgoVehicleInfoWheel * output)
{
  if (!input || !output) {
    return false;
  }
  // tire_friction
  output->tire_friction = input->tire_friction;
  // damping_rate
  output->damping_rate = input->damping_rate;
  // max_steer_angle
  output->max_steer_angle = input->max_steer_angle;
  // radius
  output->radius = input->radius;
  // max_brake_torque
  output->max_brake_torque = input->max_brake_torque;
  // max_handbrake_torque
  output->max_handbrake_torque = input->max_handbrake_torque;
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

carla_msgs__msg__CarlaEgoVehicleInfoWheel *
carla_msgs__msg__CarlaEgoVehicleInfoWheel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaEgoVehicleInfoWheel * msg = (carla_msgs__msg__CarlaEgoVehicleInfoWheel *)allocator.allocate(sizeof(carla_msgs__msg__CarlaEgoVehicleInfoWheel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaEgoVehicleInfoWheel));
  bool success = carla_msgs__msg__CarlaEgoVehicleInfoWheel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaEgoVehicleInfoWheel__destroy(carla_msgs__msg__CarlaEgoVehicleInfoWheel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_msgs__msg__CarlaEgoVehicleInfoWheel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__init(carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaEgoVehicleInfoWheel * data = NULL;

  if (size) {
    data = (carla_msgs__msg__CarlaEgoVehicleInfoWheel *)allocator.zero_allocate(size, sizeof(carla_msgs__msg__CarlaEgoVehicleInfoWheel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaEgoVehicleInfoWheel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaEgoVehicleInfoWheel__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__fini(carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * array)
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
      carla_msgs__msg__CarlaEgoVehicleInfoWheel__fini(&array->data[i]);
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

carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence *
carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * array = (carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence *)allocator.allocate(sizeof(carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__destroy(carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__are_equal(const carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * lhs, const carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaEgoVehicleInfoWheel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__copy(
  const carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * input,
  carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaEgoVehicleInfoWheel);
    carla_msgs__msg__CarlaEgoVehicleInfoWheel * data =
      (carla_msgs__msg__CarlaEgoVehicleInfoWheel *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaEgoVehicleInfoWheel__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaEgoVehicleInfoWheel__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaEgoVehicleInfoWheel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
