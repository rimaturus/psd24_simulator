// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from control_msgs:msg/JointControllerState.idl
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
#include "control_msgs/msg/detail/joint_controller_state__struct.h"
#include "control_msgs/msg/detail/joint_controller_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool control_msgs__msg__joint_controller_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("control_msgs.msg._joint_controller_state.JointControllerState", full_classname_dest, 61) == 0);
  }
  control_msgs__msg__JointControllerState * ros_message = _ros_message;
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
  {  // set_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_point");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->set_point = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // process_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->process_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // process_value_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_value_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->process_value_dot = PyFloat_AS_DOUBLE(field);
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
  {  // time_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_step");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_step = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->command = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p
    PyObject * field = PyObject_GetAttrString(_pymsg, "p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // i
    PyObject * field = PyObject_GetAttrString(_pymsg, "i");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d
    PyObject * field = PyObject_GetAttrString(_pymsg, "d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // i_clamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_clamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i_clamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // antiwindup
    PyObject * field = PyObject_GetAttrString(_pymsg, "antiwindup");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->antiwindup = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * control_msgs__msg__joint_controller_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointControllerState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("control_msgs.msg._joint_controller_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointControllerState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  control_msgs__msg__JointControllerState * ros_message = (control_msgs__msg__JointControllerState *)raw_ros_message;
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
  {  // set_point
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->set_point);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->process_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_value_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->process_value_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_value_dot", field);
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
  {  // time_step
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_clamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->i_clamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_clamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antiwindup
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->antiwindup ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antiwindup", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
