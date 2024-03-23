# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_msgs:srv/QueryCalibrationState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QueryCalibrationState_Request(type):
    """Metaclass of message 'QueryCalibrationState_Request'."""

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
            module = import_type_support('control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'control_msgs.srv.QueryCalibrationState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__query_calibration_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__query_calibration_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__query_calibration_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__query_calibration_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__query_calibration_state__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QueryCalibrationState_Request(metaclass=Metaclass_QueryCalibrationState_Request):
    """Message class 'QueryCalibrationState_Request'."""

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


class Metaclass_QueryCalibrationState_Response(type):
    """Metaclass of message 'QueryCalibrationState_Response'."""

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
            module = import_type_support('control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'control_msgs.srv.QueryCalibrationState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__query_calibration_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__query_calibration_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__query_calibration_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__query_calibration_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__query_calibration_state__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QueryCalibrationState_Response(metaclass=Metaclass_QueryCalibrationState_Response):
    """Message class 'QueryCalibrationState_Response'."""

    __slots__ = [
        '_is_calibrated',
    ]

    _fields_and_field_types = {
        'is_calibrated': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_calibrated = kwargs.get('is_calibrated', bool())

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
        if self.is_calibrated != other.is_calibrated:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_calibrated(self):
        """Message field 'is_calibrated'."""
        return self._is_calibrated

    @is_calibrated.setter
    def is_calibrated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_calibrated' field must be of type 'bool'"
        self._is_calibrated = value


class Metaclass_QueryCalibrationState(type):
    """Metaclass of service 'QueryCalibrationState'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'control_msgs.srv.QueryCalibrationState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__query_calibration_state

            from control_msgs.srv import _query_calibration_state
            if _query_calibration_state.Metaclass_QueryCalibrationState_Request._TYPE_SUPPORT is None:
                _query_calibration_state.Metaclass_QueryCalibrationState_Request.__import_type_support__()
            if _query_calibration_state.Metaclass_QueryCalibrationState_Response._TYPE_SUPPORT is None:
                _query_calibration_state.Metaclass_QueryCalibrationState_Response.__import_type_support__()


class QueryCalibrationState(metaclass=Metaclass_QueryCalibrationState):
    from control_msgs.srv._query_calibration_state import QueryCalibrationState_Request as Request
    from control_msgs.srv._query_calibration_state import QueryCalibrationState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
