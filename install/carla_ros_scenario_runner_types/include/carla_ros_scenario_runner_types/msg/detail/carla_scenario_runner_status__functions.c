// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioRunnerStatus.idl
// generated code does not contain a copyright notice
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_runner_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__init(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__fini(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__are_equal(const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * lhs, const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__copy(
  const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * input,
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus *
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * msg = (carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus *)allocator.allocate(sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus));
  bool success = carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__destroy(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__init(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * data = NULL;

  if (size) {
    data = (carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus *)allocator.zero_allocate(size, sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__fini(&data[i - 1]);
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
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__fini(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * array)
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
      carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__fini(&array->data[i]);
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

carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence *
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * array = (carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence *)allocator.allocate(sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__destroy(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__are_equal(const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * lhs, const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__copy(
  const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * input,
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus);
    carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * data =
      (carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__fini(&data[i]);
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
    if (!carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
