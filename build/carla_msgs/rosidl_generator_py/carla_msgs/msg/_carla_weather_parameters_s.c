// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_msgs:msg/CarlaWeatherParameters.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "carla_msgs/msg/detail/carla_weather_parameters__struct.h"
#include "carla_msgs/msg/detail/carla_weather_parameters__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carla_msgs__msg__carla_weather_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("carla_msgs.msg._carla_weather_parameters.CarlaWeatherParameters", full_classname_dest, 63) == 0);
  }
  carla_msgs__msg__CarlaWeatherParameters * ros_message = _ros_message;
  {  // cloudiness
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloudiness");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cloudiness = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // precipitation
    PyObject * field = PyObject_GetAttrString(_pymsg, "precipitation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->precipitation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // precipitation_deposits
    PyObject * field = PyObject_GetAttrString(_pymsg, "precipitation_deposits");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->precipitation_deposits = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wind_intensity
    PyObject * field = PyObject_GetAttrString(_pymsg, "wind_intensity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wind_intensity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fog_density
    PyObject * field = PyObject_GetAttrString(_pymsg, "fog_density");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fog_density = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fog_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "fog_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fog_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wetness
    PyObject * field = PyObject_GetAttrString(_pymsg, "wetness");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wetness = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sun_azimuth_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "sun_azimuth_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sun_azimuth_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sun_altitude_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "sun_altitude_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sun_altitude_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_msgs__msg__carla_weather_parameters__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarlaWeatherParameters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_msgs.msg._carla_weather_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarlaWeatherParameters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_msgs__msg__CarlaWeatherParameters * ros_message = (carla_msgs__msg__CarlaWeatherParameters *)raw_ros_message;
  {  // cloudiness
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cloudiness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloudiness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // precipitation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->precipitation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "precipitation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // precipitation_deposits
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->precipitation_deposits);
    {
      int rc = PyObject_SetAttrString(_pymessage, "precipitation_deposits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wind_intensity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wind_intensity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wind_intensity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fog_density
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fog_density);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fog_density", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fog_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fog_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fog_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wetness
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wetness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wetness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sun_azimuth_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sun_azimuth_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sun_azimuth_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sun_altitude_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sun_altitude_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sun_altitude_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
