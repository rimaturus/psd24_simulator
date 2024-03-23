# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_msgs:msg/PidState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PidState(type):
    """Metaclass of message 'PidState'."""

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
                'control_msgs.msg.PidState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pid_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pid_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pid_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pid_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pid_state

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

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


class PidState(metaclass=Metaclass_PidState):
    """Message class 'PidState'."""

    __slots__ = [
        '_header',
        '_timestep',
        '_error',
        '_error_dot',
        '_p_error',
        '_i_error',
        '_d_error',
        '_p_term',
        '_i_term',
        '_d_term',
        '_i_max',
        '_i_min',
        '_output',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'timestep': 'builtin_interfaces/Duration',
        'error': 'double',
        'error_dot': 'double',
        'p_error': 'double',
        'i_error': 'double',
        'd_error': 'double',
        'p_term': 'double',
        'i_term': 'double',
        'd_term': 'double',
        'i_max': 'double',
        'i_min': 'double',
        'output': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from builtin_interfaces.msg import Duration
        self.timestep = kwargs.get('timestep', Duration())
        self.error = kwargs.get('error', float())
        self.error_dot = kwargs.get('error_dot', float())
        self.p_error = kwargs.get('p_error', float())
        self.i_error = kwargs.get('i_error', float())
        self.d_error = kwargs.get('d_error', float())
        self.p_term = kwargs.get('p_term', float())
        self.i_term = kwargs.get('i_term', float())
        self.d_term = kwargs.get('d_term', float())
        self.i_max = kwargs.get('i_max', float())
        self.i_min = kwargs.get('i_min', float())
        self.output = kwargs.get('output', float())

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
        if self.timestep != other.timestep:
            return False
        if self.error != other.error:
            return False
        if self.error_dot != other.error_dot:
            return False
        if self.p_error != other.p_error:
            return False
        if self.i_error != other.i_error:
            return False
        if self.d_error != other.d_error:
            return False
        if self.p_term != other.p_term:
            return False
        if self.i_term != other.i_term:
            return False
        if self.d_term != other.d_term:
            return False
        if self.i_max != other.i_max:
            return False
        if self.i_min != other.i_min:
            return False
        if self.output != other.output:
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
    def timestep(self):
        """Message field 'timestep'."""
        return self._timestep

    @timestep.setter
    def timestep(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'timestep' field must be a sub message of type 'Duration'"
        self._timestep = value

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
    def error_dot(self):
        """Message field 'error_dot'."""
        return self._error_dot

    @error_dot.setter
    def error_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error_dot' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'error_dot' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._error_dot = value

    @builtins.property
    def p_error(self):
        """Message field 'p_error'."""
        return self._p_error

    @p_error.setter
    def p_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p_error = value

    @builtins.property
    def i_error(self):
        """Message field 'i_error'."""
        return self._i_error

    @i_error.setter
    def i_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'i_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._i_error = value

    @builtins.property
    def d_error(self):
        """Message field 'd_error'."""
        return self._d_error

    @d_error.setter
    def d_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'd_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._d_error = value

    @builtins.property
    def p_term(self):
        """Message field 'p_term'."""
        return self._p_term

    @p_term.setter
    def p_term(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_term' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p_term' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p_term = value

    @builtins.property
    def i_term(self):
        """Message field 'i_term'."""
        return self._i_term

    @i_term.setter
    def i_term(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i_term' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'i_term' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._i_term = value

    @builtins.property
    def d_term(self):
        """Message field 'd_term'."""
        return self._d_term

    @d_term.setter
    def d_term(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd_term' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'd_term' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._d_term = value

    @builtins.property
    def i_max(self):
        """Message field 'i_max'."""
        return self._i_max

    @i_max.setter
    def i_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'i_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._i_max = value

    @builtins.property
    def i_min(self):
        """Message field 'i_min'."""
        return self._i_min

    @i_min.setter
    def i_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'i_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._i_min = value

    @builtins.property
    def output(self):
        """Message field 'output'."""
        return self._output

    @output.setter
    def output(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'output' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._output = value
