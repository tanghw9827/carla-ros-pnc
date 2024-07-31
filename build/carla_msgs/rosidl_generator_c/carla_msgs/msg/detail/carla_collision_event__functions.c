// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaCollisionEvent.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_collision_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `normal_impulse`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
carla_msgs__msg__CarlaCollisionEvent__init(carla_msgs__msg__CarlaCollisionEvent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carla_msgs__msg__CarlaCollisionEvent__fini(msg);
    return false;
  }
  // other_actor_id
  // normal_impulse
  if (!geometry_msgs__msg__Vector3__init(&msg->normal_impulse)) {
    carla_msgs__msg__CarlaCollisionEvent__fini(msg);
    return false;
  }
  return true;
}

void
carla_msgs__msg__CarlaCollisionEvent__fini(carla_msgs__msg__CarlaCollisionEvent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // other_actor_id
  // normal_impulse
  geometry_msgs__msg__Vector3__fini(&msg->normal_impulse);
}

bool
carla_msgs__msg__CarlaCollisionEvent__are_equal(const carla_msgs__msg__CarlaCollisionEvent * lhs, const carla_msgs__msg__CarlaCollisionEvent * rhs)
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
  // other_actor_id
  if (lhs->other_actor_id != rhs->other_actor_id) {
    return false;
  }
  // normal_impulse
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->normal_impulse), &(rhs->normal_impulse)))
  {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaCollisionEvent__copy(
  const carla_msgs__msg__CarlaCollisionEvent * input,
  carla_msgs__msg__CarlaCollisionEvent * output)
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
  // other_actor_id
  output->other_actor_id = input->other_actor_id;
  // normal_impulse
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->normal_impulse), &(output->normal_impulse)))
  {
    return false;
  }
  return true;
}

carla_msgs__msg__CarlaCollisionEvent *
carla_msgs__msg__CarlaCollisionEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaCollisionEvent * msg = (carla_msgs__msg__CarlaCollisionEvent *)allocator.allocate(sizeof(carla_msgs__msg__CarlaCollisionEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaCollisionEvent));
  bool success = carla_msgs__msg__CarlaCollisionEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaCollisionEvent__destroy(carla_msgs__msg__CarlaCollisionEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_msgs__msg__CarlaCollisionEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_msgs__msg__CarlaCollisionEvent__Sequence__init(carla_msgs__msg__CarlaCollisionEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaCollisionEvent * data = NULL;

  if (size) {
    data = (carla_msgs__msg__CarlaCollisionEvent *)allocator.zero_allocate(size, sizeof(carla_msgs__msg__CarlaCollisionEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaCollisionEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaCollisionEvent__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaCollisionEvent__Sequence__fini(carla_msgs__msg__CarlaCollisionEvent__Sequence * array)
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
      carla_msgs__msg__CarlaCollisionEvent__fini(&array->data[i]);
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

carla_msgs__msg__CarlaCollisionEvent__Sequence *
carla_msgs__msg__CarlaCollisionEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaCollisionEvent__Sequence * array = (carla_msgs__msg__CarlaCollisionEvent__Sequence *)allocator.allocate(sizeof(carla_msgs__msg__CarlaCollisionEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaCollisionEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaCollisionEvent__Sequence__destroy(carla_msgs__msg__CarlaCollisionEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_msgs__msg__CarlaCollisionEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_msgs__msg__CarlaCollisionEvent__Sequence__are_equal(const carla_msgs__msg__CarlaCollisionEvent__Sequence * lhs, const carla_msgs__msg__CarlaCollisionEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaCollisionEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaCollisionEvent__Sequence__copy(
  const carla_msgs__msg__CarlaCollisionEvent__Sequence * input,
  carla_msgs__msg__CarlaCollisionEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaCollisionEvent);
    carla_msgs__msg__CarlaCollisionEvent * data =
      (carla_msgs__msg__CarlaCollisionEvent *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaCollisionEvent__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaCollisionEvent__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaCollisionEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
