// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_ros_scenario_runner_types:srv/ExecuteScenario.idl
// generated code does not contain a copyright notice
#include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `scenario`
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__functions.h"

bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__init(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * msg)
{
  if (!msg) {
    return false;
  }
  // scenario
  if (!carla_ros_scenario_runner_types__msg__CarlaScenario__init(&msg->scenario)) {
    carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__fini(msg);
    return false;
  }
  return true;
}

void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__fini(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * msg)
{
  if (!msg) {
    return;
  }
  // scenario
  carla_ros_scenario_runner_types__msg__CarlaScenario__fini(&msg->scenario);
}

bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__are_equal(const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * lhs, const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scenario
  if (!carla_ros_scenario_runner_types__msg__CarlaScenario__are_equal(
      &(lhs->scenario), &(rhs->scenario)))
  {
    return false;
  }
  return true;
}

bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__copy(
  const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * input,
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // scenario
  if (!carla_ros_scenario_runner_types__msg__CarlaScenario__copy(
      &(input->scenario), &(output->scenario)))
  {
    return false;
  }
  return true;
}

carla_ros_scenario_runner_types__srv__ExecuteScenario_Request *
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * msg = (carla_ros_scenario_runner_types__srv__ExecuteScenario_Request *)allocator.allocate(sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request));
  bool success = carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__destroy(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__init(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * data = NULL;

  if (size) {
    data = (carla_ros_scenario_runner_types__srv__ExecuteScenario_Request *)allocator.zero_allocate(size, sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__fini(&data[i - 1]);
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
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__fini(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * array)
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
      carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__fini(&array->data[i]);
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

carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence *
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * array = (carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence *)allocator.allocate(sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__destroy(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__are_equal(const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * lhs, const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__copy(
  const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * input,
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request);
    carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * data =
      (carla_ros_scenario_runner_types__srv__ExecuteScenario_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__fini(&data[i]);
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
    if (!carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__init(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__fini(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__are_equal(const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * lhs, const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__copy(
  const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * input,
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

carla_ros_scenario_runner_types__srv__ExecuteScenario_Response *
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * msg = (carla_ros_scenario_runner_types__srv__ExecuteScenario_Response *)allocator.allocate(sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response));
  bool success = carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__destroy(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__init(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * data = NULL;

  if (size) {
    data = (carla_ros_scenario_runner_types__srv__ExecuteScenario_Response *)allocator.zero_allocate(size, sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__fini(&data[i - 1]);
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
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__fini(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * array)
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
      carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__fini(&array->data[i]);
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

carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence *
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * array = (carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence *)allocator.allocate(sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__destroy(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__are_equal(const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * lhs, const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__copy(
  const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * input,
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response);
    carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * data =
      (carla_ros_scenario_runner_types__srv__ExecuteScenario_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__fini(&data[i]);
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
    if (!carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
