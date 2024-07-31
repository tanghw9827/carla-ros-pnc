// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlInfo.idl
// generated code does not contain a copyright notice
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `restrictions`
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__functions.h"
// Member `target`
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__functions.h"
// Member `current`
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__functions.h"
// Member `status`
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__functions.h"
// Member `output`
#include "carla_msgs/msg/detail/carla_ego_vehicle_control__functions.h"

bool
carla_ackermann_msgs__msg__EgoVehicleControlInfo__init(carla_ackermann_msgs__msg__EgoVehicleControlInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(msg);
    return false;
  }
  // restrictions
  if (!carla_ackermann_msgs__msg__EgoVehicleControlMaxima__init(&msg->restrictions)) {
    carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(msg);
    return false;
  }
  // target
  if (!carla_ackermann_msgs__msg__EgoVehicleControlTarget__init(&msg->target)) {
    carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(msg);
    return false;
  }
  // current
  if (!carla_ackermann_msgs__msg__EgoVehicleControlCurrent__init(&msg->current)) {
    carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(msg);
    return false;
  }
  // status
  if (!carla_ackermann_msgs__msg__EgoVehicleControlStatus__init(&msg->status)) {
    carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(msg);
    return false;
  }
  // output
  if (!carla_msgs__msg__CarlaEgoVehicleControl__init(&msg->output)) {
    carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(msg);
    return false;
  }
  return true;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(carla_ackermann_msgs__msg__EgoVehicleControlInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // restrictions
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima__fini(&msg->restrictions);
  // target
  carla_ackermann_msgs__msg__EgoVehicleControlTarget__fini(&msg->target);
  // current
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent__fini(&msg->current);
  // status
  carla_ackermann_msgs__msg__EgoVehicleControlStatus__fini(&msg->status);
  // output
  carla_msgs__msg__CarlaEgoVehicleControl__fini(&msg->output);
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlInfo__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlInfo * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlInfo * rhs)
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
  // restrictions
  if (!carla_ackermann_msgs__msg__EgoVehicleControlMaxima__are_equal(
      &(lhs->restrictions), &(rhs->restrictions)))
  {
    return false;
  }
  // target
  if (!carla_ackermann_msgs__msg__EgoVehicleControlTarget__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // current
  if (!carla_ackermann_msgs__msg__EgoVehicleControlCurrent__are_equal(
      &(lhs->current), &(rhs->current)))
  {
    return false;
  }
  // status
  if (!carla_ackermann_msgs__msg__EgoVehicleControlStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // output
  if (!carla_msgs__msg__CarlaEgoVehicleControl__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlInfo__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlInfo * input,
  carla_ackermann_msgs__msg__EgoVehicleControlInfo * output)
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
  // restrictions
  if (!carla_ackermann_msgs__msg__EgoVehicleControlMaxima__copy(
      &(input->restrictions), &(output->restrictions)))
  {
    return false;
  }
  // target
  if (!carla_ackermann_msgs__msg__EgoVehicleControlTarget__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // current
  if (!carla_ackermann_msgs__msg__EgoVehicleControlCurrent__copy(
      &(input->current), &(output->current)))
  {
    return false;
  }
  // status
  if (!carla_ackermann_msgs__msg__EgoVehicleControlStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // output
  if (!carla_msgs__msg__CarlaEgoVehicleControl__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  return true;
}

carla_ackermann_msgs__msg__EgoVehicleControlInfo *
carla_ackermann_msgs__msg__EgoVehicleControlInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlInfo * msg = (carla_ackermann_msgs__msg__EgoVehicleControlInfo *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlInfo));
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlInfo__destroy(carla_ackermann_msgs__msg__EgoVehicleControlInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence__init(carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlInfo * data = NULL;

  if (size) {
    data = (carla_ackermann_msgs__msg__EgoVehicleControlInfo *)allocator.zero_allocate(size, sizeof(carla_ackermann_msgs__msg__EgoVehicleControlInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ackermann_msgs__msg__EgoVehicleControlInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(&data[i - 1]);
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
carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence__fini(carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence * array)
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
      carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(&array->data[i]);
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

carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence *
carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence * array = (carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence *)allocator.allocate(sizeof(carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence__destroy(carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ackermann_msgs__msg__EgoVehicleControlInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence * input,
  carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ackermann_msgs__msg__EgoVehicleControlInfo);
    carla_ackermann_msgs__msg__EgoVehicleControlInfo * data =
      (carla_ackermann_msgs__msg__EgoVehicleControlInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ackermann_msgs__msg__EgoVehicleControlInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(&data[i]);
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
    if (!carla_ackermann_msgs__msg__EgoVehicleControlInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
