// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
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
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__struct.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carla_ackermann_msgs__msg__ego_vehicle_control_maxima__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("carla_ackermann_msgs.msg._ego_vehicle_control_maxima.EgoVehicleControlMaxima", full_classname_dest, 76) == 0);
  }
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima * ros_message = _ros_message;
  {  // max_steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_steering_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_steering_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_accel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_decel
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_decel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_decel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_accel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_pedal
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_pedal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_pedal = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_ackermann_msgs__msg__ego_vehicle_control_maxima__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EgoVehicleControlMaxima */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_ackermann_msgs.msg._ego_vehicle_control_maxima");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EgoVehicleControlMaxima");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima * ros_message = (carla_ackermann_msgs__msg__EgoVehicleControlMaxima *)raw_ros_message;
  {  // max_steering_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_steering_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_decel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_decel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_decel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_pedal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_pedal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_pedal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
