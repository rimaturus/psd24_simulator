// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from control_msgs:msg/PidState.idl
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
#include "control_msgs/msg/detail/pid_state__struct.h"
#include "control_msgs/msg/detail/pid_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__duration__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__duration__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool control_msgs__msg__pid_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("control_msgs.msg._pid_state.PidState", full_classname_dest, 36) == 0);
  }
  control_msgs__msg__PidState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // timestep
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestep");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__duration__convert_from_py(field, &ros_message->timestep)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error_dot = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // i_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_term
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_term");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_term = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // i_term
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_term");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i_term = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d_term
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_term");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d_term = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // i_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // i_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // output
    PyObject * field = PyObject_GetAttrString(_pymsg, "output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * control_msgs__msg__pid_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PidState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("control_msgs.msg._pid_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PidState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  control_msgs__msg__PidState * ros_message = (control_msgs__msg__PidState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestep
    PyObject * field = NULL;
    field = builtin_interfaces__msg__duration__convert_to_py(&ros_message->timestep);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestep", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->i_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_term
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_term);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_term", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_term
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->i_term);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_term", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_term
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d_term);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_term", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->i_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->i_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
