// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_msgs:msg/CarlaStatus.idl
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
#include "carla_msgs/msg/detail/carla_status__struct.h"
#include "carla_msgs/msg/detail/carla_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carla_msgs__msg__carla_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("carla_msgs.msg._carla_status.CarlaStatus", full_classname_dest, 40) == 0);
  }
  carla_msgs__msg__CarlaStatus * ros_message = _ros_message;
  {  // frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // fixed_delta_seconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_delta_seconds");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_delta_seconds = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // synchronous_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "synchronous_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->synchronous_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // synchronous_mode_running
    PyObject * field = PyObject_GetAttrString(_pymsg, "synchronous_mode_running");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->synchronous_mode_running = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_msgs__msg__carla_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarlaStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_msgs.msg._carla_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarlaStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_msgs__msg__CarlaStatus * ros_message = (carla_msgs__msg__CarlaStatus *)raw_ros_message;
  {  // frame
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->frame);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_delta_seconds
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_delta_seconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_delta_seconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // synchronous_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->synchronous_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "synchronous_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // synchronous_mode_running
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->synchronous_mode_running ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "synchronous_mode_running", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
