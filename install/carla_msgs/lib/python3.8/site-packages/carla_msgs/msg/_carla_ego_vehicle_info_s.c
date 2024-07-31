// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfo.idl
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
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__struct.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__functions.h"
// end nested array functions include
bool carla_msgs__msg__carla_ego_vehicle_info_wheel__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carla_msgs__msg__carla_ego_vehicle_info_wheel__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carla_msgs__msg__carla_ego_vehicle_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("carla_msgs.msg._carla_ego_vehicle_info.CarlaEgoVehicleInfo", full_classname_dest, 58) == 0);
  }
  carla_msgs__msg__CarlaEgoVehicleInfo * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // rolename
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolename");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->rolename, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // wheels
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheels");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'wheels'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence__init(&(ros_message->wheels), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carla_msgs__msg__CarlaEgoVehicleInfoWheel * dest = ros_message->wheels.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carla_msgs__msg__carla_ego_vehicle_info_wheel__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // max_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // moi
    PyObject * field = PyObject_GetAttrString(_pymsg, "moi");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->moi = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // damping_rate_full_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "damping_rate_full_throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->damping_rate_full_throttle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // damping_rate_zero_throttle_clutch_engaged
    PyObject * field = PyObject_GetAttrString(_pymsg, "damping_rate_zero_throttle_clutch_engaged");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->damping_rate_zero_throttle_clutch_engaged = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // damping_rate_zero_throttle_clutch_disengaged
    PyObject * field = PyObject_GetAttrString(_pymsg, "damping_rate_zero_throttle_clutch_disengaged");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->damping_rate_zero_throttle_clutch_disengaged = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // use_gear_autobox
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_gear_autobox");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_gear_autobox = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gear_switch_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_switch_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gear_switch_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // clutch_strength
    PyObject * field = PyObject_GetAttrString(_pymsg, "clutch_strength");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->clutch_strength = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drag_coefficient
    PyObject * field = PyObject_GetAttrString(_pymsg, "drag_coefficient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drag_coefficient = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_of_mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_of_mass");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->center_of_mass)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_msgs__msg__carla_ego_vehicle_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarlaEgoVehicleInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_msgs.msg._carla_ego_vehicle_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarlaEgoVehicleInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_msgs__msg__CarlaEgoVehicleInfo * ros_message = (carla_msgs__msg__CarlaEgoVehicleInfo *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->type.data,
      strlen(ros_message->type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rolename
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->rolename.data,
      strlen(ros_message->rolename.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolename", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheels
    PyObject * field = NULL;
    size_t size = ros_message->wheels.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carla_msgs__msg__CarlaEgoVehicleInfoWheel * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->wheels.data[i]);
      PyObject * pyitem = carla_msgs__msg__carla_ego_vehicle_info_wheel__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheels", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moi
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->moi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damping_rate_full_throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->damping_rate_full_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damping_rate_full_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damping_rate_zero_throttle_clutch_engaged
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->damping_rate_zero_throttle_clutch_engaged);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damping_rate_zero_throttle_clutch_engaged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damping_rate_zero_throttle_clutch_disengaged
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->damping_rate_zero_throttle_clutch_disengaged);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damping_rate_zero_throttle_clutch_disengaged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_gear_autobox
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_gear_autobox ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_gear_autobox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_switch_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gear_switch_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_switch_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clutch_strength
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->clutch_strength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clutch_strength", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drag_coefficient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drag_coefficient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drag_coefficient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_of_mass
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->center_of_mass);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_of_mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
