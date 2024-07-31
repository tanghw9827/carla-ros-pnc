// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfoWheel.idl
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
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__struct.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carla_msgs__msg__carla_ego_vehicle_info_wheel__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("carla_msgs.msg._carla_ego_vehicle_info_wheel.CarlaEgoVehicleInfoWheel", full_classname_dest, 69) == 0);
  }
  carla_msgs__msg__CarlaEgoVehicleInfoWheel * ros_message = _ros_message;
  {  // tire_friction
    PyObject * field = PyObject_GetAttrString(_pymsg, "tire_friction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tire_friction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // damping_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "damping_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->damping_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_steer_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_steer_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_steer_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_brake_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_brake_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_brake_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_handbrake_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_handbrake_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_handbrake_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_msgs__msg__carla_ego_vehicle_info_wheel__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarlaEgoVehicleInfoWheel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_msgs.msg._carla_ego_vehicle_info_wheel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarlaEgoVehicleInfoWheel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_msgs__msg__CarlaEgoVehicleInfoWheel * ros_message = (carla_msgs__msg__CarlaEgoVehicleInfoWheel *)raw_ros_message;
  {  // tire_friction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tire_friction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tire_friction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damping_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->damping_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damping_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_steer_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_steer_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_steer_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_brake_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_brake_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_brake_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_handbrake_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_handbrake_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_handbrake_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
