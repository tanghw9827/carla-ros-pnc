// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaWeatherParameters.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_weather_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carla_msgs__msg__CarlaWeatherParameters__init(carla_msgs__msg__CarlaWeatherParameters * msg)
{
  if (!msg) {
    return false;
  }
  // cloudiness
  // precipitation
  // precipitation_deposits
  // wind_intensity
  // fog_density
  // fog_distance
  // wetness
  // sun_azimuth_angle
  // sun_altitude_angle
  return true;
}

void
carla_msgs__msg__CarlaWeatherParameters__fini(carla_msgs__msg__CarlaWeatherParameters * msg)
{
  if (!msg) {
    return;
  }
  // cloudiness
  // precipitation
  // precipitation_deposits
  // wind_intensity
  // fog_density
  // fog_distance
  // wetness
  // sun_azimuth_angle
  // sun_altitude_angle
}

bool
carla_msgs__msg__CarlaWeatherParameters__are_equal(const carla_msgs__msg__CarlaWeatherParameters * lhs, const carla_msgs__msg__CarlaWeatherParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cloudiness
  if (lhs->cloudiness != rhs->cloudiness) {
    return false;
  }
  // precipitation
  if (lhs->precipitation != rhs->precipitation) {
    return false;
  }
  // precipitation_deposits
  if (lhs->precipitation_deposits != rhs->precipitation_deposits) {
    return false;
  }
  // wind_intensity
  if (lhs->wind_intensity != rhs->wind_intensity) {
    return false;
  }
  // fog_density
  if (lhs->fog_density != rhs->fog_density) {
    return false;
  }
  // fog_distance
  if (lhs->fog_distance != rhs->fog_distance) {
    return false;
  }
  // wetness
  if (lhs->wetness != rhs->wetness) {
    return false;
  }
  // sun_azimuth_angle
  if (lhs->sun_azimuth_angle != rhs->sun_azimuth_angle) {
    return false;
  }
  // sun_altitude_angle
  if (lhs->sun_altitude_angle != rhs->sun_altitude_angle) {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaWeatherParameters__copy(
  const carla_msgs__msg__CarlaWeatherParameters * input,
  carla_msgs__msg__CarlaWeatherParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // cloudiness
  output->cloudiness = input->cloudiness;
  // precipitation
  output->precipitation = input->precipitation;
  // precipitation_deposits
  output->precipitation_deposits = input->precipitation_deposits;
  // wind_intensity
  output->wind_intensity = input->wind_intensity;
  // fog_density
  output->fog_density = input->fog_density;
  // fog_distance
  output->fog_distance = input->fog_distance;
  // wetness
  output->wetness = input->wetness;
  // sun_azimuth_angle
  output->sun_azimuth_angle = input->sun_azimuth_angle;
  // sun_altitude_angle
  output->sun_altitude_angle = input->sun_altitude_angle;
  return true;
}

carla_msgs__msg__CarlaWeatherParameters *
carla_msgs__msg__CarlaWeatherParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaWeatherParameters * msg = (carla_msgs__msg__CarlaWeatherParameters *)allocator.allocate(sizeof(carla_msgs__msg__CarlaWeatherParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaWeatherParameters));
  bool success = carla_msgs__msg__CarlaWeatherParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaWeatherParameters__destroy(carla_msgs__msg__CarlaWeatherParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carla_msgs__msg__CarlaWeatherParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carla_msgs__msg__CarlaWeatherParameters__Sequence__init(carla_msgs__msg__CarlaWeatherParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaWeatherParameters * data = NULL;

  if (size) {
    data = (carla_msgs__msg__CarlaWeatherParameters *)allocator.zero_allocate(size, sizeof(carla_msgs__msg__CarlaWeatherParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaWeatherParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaWeatherParameters__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaWeatherParameters__Sequence__fini(carla_msgs__msg__CarlaWeatherParameters__Sequence * array)
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
      carla_msgs__msg__CarlaWeatherParameters__fini(&array->data[i]);
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

carla_msgs__msg__CarlaWeatherParameters__Sequence *
carla_msgs__msg__CarlaWeatherParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carla_msgs__msg__CarlaWeatherParameters__Sequence * array = (carla_msgs__msg__CarlaWeatherParameters__Sequence *)allocator.allocate(sizeof(carla_msgs__msg__CarlaWeatherParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaWeatherParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaWeatherParameters__Sequence__destroy(carla_msgs__msg__CarlaWeatherParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carla_msgs__msg__CarlaWeatherParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carla_msgs__msg__CarlaWeatherParameters__Sequence__are_equal(const carla_msgs__msg__CarlaWeatherParameters__Sequence * lhs, const carla_msgs__msg__CarlaWeatherParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaWeatherParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaWeatherParameters__Sequence__copy(
  const carla_msgs__msg__CarlaWeatherParameters__Sequence * input,
  carla_msgs__msg__CarlaWeatherParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaWeatherParameters);
    carla_msgs__msg__CarlaWeatherParameters * data =
      (carla_msgs__msg__CarlaWeatherParameters *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaWeatherParameters__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaWeatherParameters__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaWeatherParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
