// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlStatus.idl
// generated code does not contain a copyright notice
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
carla_ackermann_msgs__msg__EgoVehicleControlStatus__init(carla_ackermann_msgs__msg__EgoVehicleControlStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    carla_ackermann_msgs__msg__EgoVehicleControlStatus__fini(msg);
    return false;
  }
  // speed_control_activation_count
  // speed_control_accel_delta
  // speed_control_accel_target
  // accel_control_pedal_delta
  // accel_control_pedal_target
  // brake_upper_border
  // throttle_lower_border
  return true;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlStatus__fini(carla_ackermann_msgs__msg__EgoVehicleControlStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // speed_control_activation_count
  // speed_control_accel_delta
  // speed_control_accel_target
  // accel_control_pedal_delta
  // accel_control_pedal_target
  // brake_upper_border
  // throttle_lower_border
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlStatus__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlStatus * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // speed_control_activation_count
  if (lhs->speed_control_activation_count != rhs->speed_control_activation_count) {
    return false;
  }
  // speed_control_accel_delta
  if (lhs->speed_control_accel_delta != rhs->speed_control_accel_delta) {
    return false;
  }
  // speed_control_accel_target
  if (lhs->speed_control_accel_target != rhs->speed_control_accel_target) {
    return false;
  }
  // accel_control_pedal_delta
  if (lhs->accel_control_pedal_delta != rhs->accel_control_pedal_delta) {
    return false;
  }
  // accel_control_pedal_target
  if (lhs->accel_control_pedal_target != rhs->accel_control_pedal_target) {
    return false;
  }
  // brake_upper_border
  if (lhs->brake_upper_border != rhs->brake_upper_border) {
    return false;
  }
  // throttle_lower_border
  if (lhs->throttle_lower_border != rhs->throttle_lower_border) {
    return false;
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlStatus__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlStatus * input,
  carla_ackermann_msgs__msg__EgoVehicleControlStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // speed_control_activation_count
  output->speed_control_activation_count = input->speed_control_activation_count;
  // speed_control_accel_delta
  output->speed_control_accel_delta = input->speed_control_accel_delta;
  // speed_control_accel_target
  output->speed_control_accel_target = input->speed_control_accel_target;
  // accel_control_pedal_delta
  output->accel_control_pedal_delta = input->accel_control_pedal_delta;
  // accel_control_pedal_target
  output->accel_control_pedal_target = input->accel_control_pedal_target;
  // brake_upper_border
  output->brake_upper_border = input->brake_upper_border;
  // throttle_lower_border
  output->throttle_lower_border = input->throttle_lower_border;
  return true;
}

carla_ackermann_msgs__msg__EgoVehicleControlStatus *
carla_ackermann_msgs__msg__EgoVehicleControlStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlStatus * msg = (carla_ackermann_msgs__msg__EgoVehicleControlStatus *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlStatus));
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlStatus__destroy(carla_ackermann_msgs__msg__EgoVehicleControlStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_ackermann_msgs__msg__EgoVehicleControlStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence__init(carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlStatus * data = NULL;

  if (size) {
    data = (carla_ackermann_msgs__msg__EgoVehicleControlStatus *)allocator.zero_allocate(size, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ackermann_msgs__msg__EgoVehicleControlStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ackermann_msgs__msg__EgoVehicleControlStatus__fini(&data[i - 1]);
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
carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence__fini(carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence * array)
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
      carla_ackermann_msgs__msg__EgoVehicleControlStatus__fini(&array->data[i]);
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

carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence *
carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence * array = (carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence__destroy(carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ackermann_msgs__msg__EgoVehicleControlStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence * input,
  carla_ackermann_msgs__msg__EgoVehicleControlStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ackermann_msgs__msg__EgoVehicleControlStatus);
    carla_ackermann_msgs__msg__EgoVehicleControlStatus * data =
      (carla_ackermann_msgs__msg__EgoVehicleControlStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ackermann_msgs__msg__EgoVehicleControlStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ackermann_msgs__msg__EgoVehicleControlStatus__fini(&data[i]);
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
    if (!carla_ackermann_msgs__msg__EgoVehicleControlStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
