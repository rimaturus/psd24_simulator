# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_manager_msgs:srv/ReloadControllerLibraries.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReloadControllerLibraries_Request(type):
    """Metaclass of message 'ReloadControllerLibraries_Request'."""

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
                'controller_manager_msgs.srv.ReloadControllerLibraries_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reload_controller_libraries__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reload_controller_libraries__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reload_controller_libraries__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reload_controller_libraries__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reload_controller_libraries__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReloadControllerLibraries_Request(metaclass=Metaclass_ReloadControllerLibraries_Request):
    """Message class 'ReloadControllerLibraries_Request'."""

    __slots__ = [
        '_force_kill',
    ]

    _fields_and_field_types = {
        'force_kill': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.force_kill = kwargs.get('force_kill', bool())

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
        if self.force_kill != other.force_kill:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def force_kill(self):
        """Message field 'force_kill'."""
        return self._force_kill

    @force_kill.setter
    def force_kill(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_kill' field must be of type 'bool'"
        self._force_kill = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ReloadControllerLibraries_Response(type):
    """Metaclass of message 'ReloadControllerLibraries_Response'."""

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
                'controller_manager_msgs.srv.ReloadControllerLibraries_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reload_controller_libraries__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reload_controller_libraries__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reload_controller_libraries__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reload_controller_libraries__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reload_controller_libraries__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReloadControllerLibraries_Response(metaclass=Metaclass_ReloadControllerLibraries_Response):
    """Message class 'ReloadControllerLibraries_Response'."""

    __slots__ = [
        '_ok',
    ]

    _fields_and_field_types = {
        'ok': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ok = kwargs.get('ok', bool())

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
        if self.ok != other.ok:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ok(self):
        """Message field 'ok'."""
        return self._ok

    @ok.setter
    def ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ok' field must be of type 'bool'"
        self._ok = value


class Metaclass_ReloadControllerLibraries(type):
    """Metaclass of service 'ReloadControllerLibraries'."""

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
                'controller_manager_msgs.srv.ReloadControllerLibraries')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__reload_controller_libraries

            from controller_manager_msgs.srv import _reload_controller_libraries
            if _reload_controller_libraries.Metaclass_ReloadControllerLibraries_Request._TYPE_SUPPORT is None:
                _reload_controller_libraries.Metaclass_ReloadControllerLibraries_Request.__import_type_support__()
            if _reload_controller_libraries.Metaclass_ReloadControllerLibraries_Response._TYPE_SUPPORT is None:
                _reload_controller_libraries.Metaclass_ReloadControllerLibraries_Response.__import_type_support__()


class ReloadControllerLibraries(metaclass=Metaclass_ReloadControllerLibraries):
    from controller_manager_msgs.srv._reload_controller_libraries import ReloadControllerLibraries_Request as Request
    from controller_manager_msgs.srv._reload_controller_libraries import ReloadControllerLibraries_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
