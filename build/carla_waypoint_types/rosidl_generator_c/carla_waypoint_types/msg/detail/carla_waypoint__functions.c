// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_waypoint_types:msg/CarlaWaypoint.idl
// generated code does not contain a copyright notice
#include "carla_waypoint_types/msg/detail/carla_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
carla_waypoint_types__msg__CarlaWaypoint__init(carla_waypoint_types__msg__CarlaWaypoint * msg)
{
  if (!msg) {
    return false;
  }
  // road_id
  // section_id
  // lane_id
  // lane_width
  // is_junction
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    carla_waypoint_types__msg__CarlaWaypoint__fini(msg);
    return false;
  }
  return true;
}

void
carla_waypoint_types__msg__CarlaWaypoint__fini(carla_waypoint_types__msg__CarlaWaypoint * msg)
{
  if (!msg) {
    return;
  }
  // road_id
  // section_id
  // lane_id
  // lane_width
  // is_junction
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
carla_waypoint_types__msg__CarlaWaypoint__are_equal(const carla_waypoint_types__msg__CarlaWaypoint * lhs, const carla_waypoint_types__msg__CarlaWaypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // road_id
  if (lhs->road_id != rhs->road_id) {
    return false;
  }
  // section_id
  if (lhs->section_id != rhs->section_id) {
    return false;
  }
  // lane_id
  if (lhs->lane_id != rhs->lane_id) {
    return false;
  }
  // lane_width
  if (lhs->lane_width != rhs->lane_width) {
    return false;
  }
  // is_junction
  if (lhs->is_junction != rhs->is_junction) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
carla_waypoint_types__msg__CarlaWaypoint__copy(
  const carla_waypoint_types__msg__CarlaWaypoint * input,
  carla_waypoint_types__msg__CarlaWaypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // road_id
  output->road_id = input->road_id;
  // section_id
  output->section_id = input->section_id;
  // lane_id
  output->lane_id = input->lane_id;
  // lane_width
  output->lane_width = input->lane_width;
  // is_junction
  output->is_junction = input->is_junction;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

carla_waypoint_types__msg__CarlaWaypoint *
carla_waypoint_types__msg__CarlaWaypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_waypoint_types__msg__CarlaWaypoint * msg = (carla_waypoint_types__msg__CarlaWaypoint *)allocator.allocate(sizeof(carla_waypoint_types__msg__CarlaWaypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_waypoint_types__msg__CarlaWaypoint));
  bool success = carla_waypoint_types__msg__CarlaWaypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_waypoint_types__msg__CarlaWaypoint__destroy(carla_waypoint_types__msg__CarlaWaypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_waypoint_types__msg__CarlaWaypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_waypoint_types__msg__CarlaWaypoint__Sequence__init(carla_waypoint_types__msg__CarlaWaypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_waypoint_types__msg__CarlaWaypoint * data = NULL;

  if (size) {
    data = (carla_waypoint_types__msg__CarlaWaypoint *)allocator.zero_allocate(size, sizeof(carla_waypoint_types__msg__CarlaWaypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_waypoint_types__msg__CarlaWaypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_waypoint_types__msg__CarlaWaypoint__fini(&data[i - 1]);
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
carla_waypoint_types__msg__CarlaWaypoint__Sequence__fini(carla_waypoint_types__msg__CarlaWaypoint__Sequence * array)
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
      carla_waypoint_types__msg__CarlaWaypoint__fini(&array->data[i]);
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

carla_waypoint_types__msg__CarlaWaypoint__Sequence *
carla_waypoint_types__msg__CarlaWaypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_waypoint_types__msg__CarlaWaypoint__Sequence * array = (carla_waypoint_types__msg__CarlaWaypoint__Sequence *)allocator.allocate(sizeof(carla_waypoint_types__msg__CarlaWaypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_waypoint_types__msg__CarlaWaypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_waypoint_types__msg__CarlaWaypoint__Sequence__destroy(carla_waypoint_types__msg__CarlaWaypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_waypoint_types__msg__CarlaWaypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_waypoint_types__msg__CarlaWaypoint__Sequence__are_equal(const carla_waypoint_types__msg__CarlaWaypoint__Sequence * lhs, const carla_waypoint_types__msg__CarlaWaypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_waypoint_types__msg__CarlaWaypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_waypoint_types__msg__CarlaWaypoint__Sequence__copy(
  const carla_waypoint_types__msg__CarlaWaypoint__Sequence * input,
  carla_waypoint_types__msg__CarlaWaypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_waypoint_types__msg__CarlaWaypoint);
    carla_waypoint_types__msg__CarlaWaypoint * data =
      (carla_waypoint_types__msg__CarlaWaypoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_waypoint_types__msg__CarlaWaypoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_waypoint_types__msg__CarlaWaypoint__fini(&data[i]);
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
    if (!carla_waypoint_types__msg__CarlaWaypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
