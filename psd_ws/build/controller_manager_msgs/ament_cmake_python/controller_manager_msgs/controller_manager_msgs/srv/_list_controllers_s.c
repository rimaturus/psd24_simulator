// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from controller_manager_msgs:srv/ListControllers.idl
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
#include "controller_manager_msgs/srv/detail/list_controllers__struct.h"
#include "controller_manager_msgs/srv/detail/list_controllers__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool controller_manager_msgs__srv__list_controllers__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("controller_manager_msgs.srv._list_controllers.ListControllers_Request", full_classname_dest, 69) == 0);
  }
  controller_manager_msgs__srv__ListControllers_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * controller_manager_msgs__srv__list_controllers__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ListControllers_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("controller_manager_msgs.srv._list_controllers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ListControllers_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__struct.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controllers__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "controller_manager_msgs/msg/detail/controller_state__functions.h"
// end nested array functions include
bool controller_manager_msgs__msg__controller_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * controller_manager_msgs__msg__controller_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool controller_manager_msgs__srv__list_controllers__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("controller_manager_msgs.srv._list_controllers.ListControllers_Response", full_classname_dest, 70) == 0);
  }
  controller_manager_msgs__srv__ListControllers_Response * ros_message = _ros_message;
  {  // controller
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'controller'");
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
    if (!controller_manager_msgs__msg__ControllerState__Sequence__init(&(ros_message->controller), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create controller_manager_msgs__msg__ControllerState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    controller_manager_msgs__msg__ControllerState * dest = ros_message->controller.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!controller_manager_msgs__msg__controller_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * controller_manager_msgs__srv__list_controllers__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ListControllers_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("controller_manager_msgs.srv._list_controllers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ListControllers_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  controller_manager_msgs__srv__ListControllers_Response * ros_message = (controller_manager_msgs__srv__ListControllers_Response *)raw_ros_message;
  {  // controller
    PyObject * field = NULL;
    size_t size = ros_message->controller.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    controller_manager_msgs__msg__ControllerState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->controller.data[i]);
      PyObject * pyitem = controller_manager_msgs__msg__controller_state__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "controller", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
