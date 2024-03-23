# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_msgs:msg/JointControllerState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointControllerState(type):
    """Metaclass of message 'JointControllerState'."""

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
                'control_msgs.msg.JointControllerState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_controller_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_controller_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_controller_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_controller_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_controller_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointControllerState(metaclass=Metaclass_JointControllerState):
    """Message class 'JointControllerState'."""

    __slots__ = [
        '_header',
        '_set_point',
        '_process_value',
        '_process_value_dot',
        '_error',
        '_time_step',
        '_command',
        '_p',
        '_i',
        '_d',
        '_i_clamp',
        '_antiwindup',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'set_point': 'double',
        'process_value': 'double',
        'process_value_dot': 'double',
        'error': 'double',
        'time_step': 'double',
        'command': 'double',
        'p': 'double',
        'i': 'double',
        'd': 'double',
        'i_clamp': 'double',
        'antiwindup': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.set_point = kwargs.get('set_point', float())
        self.process_value = kwargs.get('process_value', float())
        self.process_value_dot = kwargs.get('process_value_dot', float())
        self.error = kwargs.get('error', float())
        self.time_step = kwargs.get('time_step', float())
        self.command = kwargs.get('command', float())
        self.p = kwargs.get('p', float())
        self.i = kwargs.get('i', float())
        self.d = kwargs.get('d', float())
        self.i_clamp = kwargs.get('i_clamp', float())
        self.antiwindup = kwargs.get('antiwindup', bool())

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
        if self.header != other.header:
            return False
        if self.set_point != other.set_point:
            return False
        if self.process_value != other.process_value:
            return False
        if self.process_value_dot != other.process_value_dot:
            return False
        if self.error != other.error:
            return False
        if self.time_step != other.time_step:
            return False
        if self.command != other.command:
            return False
        if self.p != other.p:
            return False
        if self.i != other.i:
            return False
        if self.d != other.d:
            return False
        if self.i_clamp != other.i_clamp:
            return False
        if self.antiwindup != other.antiwindup:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def set_point(self):
        """Message field 'set_point'."""
        return self._set_point

    @set_point.setter
    def set_point(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'set_point' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'set_point' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._set_point = value

    @builtins.property
    def process_value(self):
        """Message field 'process_value'."""
        return self._process_value

    @process_value.setter
    def process_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'process_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'process_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._process_value = value

    @builtins.property
    def process_value_dot(self):
        """Message field 'process_value_dot'."""
        return self._process_value_dot

    @process_value_dot.setter
    def process_value_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'process_value_dot' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'process_value_dot' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._process_value_dot = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._error = value

    @builtins.property
    def time_step(self):
        """Message field 'time_step'."""
        return self._time_step

    @time_step.setter
    def time_step(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_step' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_step' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_step = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'command' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'command' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._command = value

    @builtins.property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p = value

    @builtins.property
    def i(self):
        """Message field 'i'."""
        return self._i

    @i.setter
    def i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'i' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._i = value

    @builtins.property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._d = value

    @builtins.property
    def i_clamp(self):
        """Message field 'i_clamp'."""
        return self._i_clamp

    @i_clamp.setter
    def i_clamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i_clamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'i_clamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._i_clamp = value

    @builtins.property
    def antiwindup(self):
        """Message field 'antiwindup'."""
        return self._antiwindup

    @antiwindup.setter
    def antiwindup(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'antiwindup' field must be of type 'bool'"
        self._antiwindup = value
