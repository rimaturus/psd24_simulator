# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_manager_msgs:srv/ListControllers.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ListControllers_Request(type):
    """Metaclass of message 'ListControllers_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('controller_manager_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_manager_msgs.srv.ListControllers_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__list_controllers__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__list_controllers__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__list_controllers__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__list_controllers__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__list_controllers__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ListControllers_Request(metaclass=Metaclass_ListControllers_Request):
    """Message class 'ListControllers_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ListControllers_Response(type):
    """Metaclass of message 'ListControllers_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('controller_manager_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_manager_msgs.srv.ListControllers_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__list_controllers__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__list_controllers__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__list_controllers__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__list_controllers__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__list_controllers__response

            from controller_manager_msgs.msg import ControllerState
            if ControllerState.__class__._TYPE_SUPPORT is None:
                ControllerState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ListControllers_Response(metaclass=Metaclass_ListControllers_Response):
    """Message class 'ListControllers_Response'."""

    __slots__ = [
        '_controller',
    ]

    _fields_and_field_types = {
        'controller': 'sequence<controller_manager_msgs/ControllerState>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['controller_manager_msgs', 'msg'], 'ControllerState')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.controller = kwargs.get('controller', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.controller != other.controller:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def controller(self):
        """Message field 'controller'."""
        return self._controller

    @controller.setter
    def controller(self, value):
        if __debug__:
            from controller_manager_msgs.msg import ControllerState
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ControllerState) for v in value) and
                 True), \
                "The 'controller' field must be a set or sequence and each value of type 'ControllerState'"
        self._controller = value


class Metaclass_ListControllers(type):
    """Metaclass of service 'ListControllers'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('controller_manager_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_manager_msgs.srv.ListControllers')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__list_controllers

            from controller_manager_msgs.srv import _list_controllers
            if _list_controllers.Metaclass_ListControllers_Request._TYPE_SUPPORT is None:
                _list_controllers.Metaclass_ListControllers_Request.__import_type_support__()
            if _list_controllers.Metaclass_ListControllers_Response._TYPE_SUPPORT is None:
                _list_controllers.Metaclass_ListControllers_Response.__import_type_support__()


class ListControllers(metaclass=Metaclass_ListControllers):
    from controller_manager_msgs.srv._list_controllers import ListControllers_Request as Request
    from controller_manager_msgs.srv._list_controllers import ListControllers_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
