# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_msgs:msg/JointComponentTolerance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointComponentTolerance(type):
    """Metaclass of message 'JointComponentTolerance'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'X_AXIS': 1,
        'Y_AXIS': 2,
        'Z_AXIS': 3,
        'TRANSLATION': 4,
        'ROTATION': 5,
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
                'control_msgs.msg.JointComponentTolerance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_component_tolerance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_component_tolerance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_component_tolerance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_component_tolerance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_component_tolerance

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'X_AXIS': cls.__constants['X_AXIS'],
            'Y_AXIS': cls.__constants['Y_AXIS'],
            'Z_AXIS': cls.__constants['Z_AXIS'],
            'TRANSLATION': cls.__constants['TRANSLATION'],
            'ROTATION': cls.__constants['ROTATION'],
        }

    @property
    def X_AXIS(self):
        """Message constant 'X_AXIS'."""
        return Metaclass_JointComponentTolerance.__constants['X_AXIS']

    @property
    def Y_AXIS(self):
        """Message constant 'Y_AXIS'."""
        return Metaclass_JointComponentTolerance.__constants['Y_AXIS']

    @property
    def Z_AXIS(self):
        """Message constant 'Z_AXIS'."""
        return Metaclass_JointComponentTolerance.__constants['Z_AXIS']

    @property
    def TRANSLATION(self):
        """Message constant 'TRANSLATION'."""
        return Metaclass_JointComponentTolerance.__constants['TRANSLATION']

    @property
    def ROTATION(self):
        """Message constant 'ROTATION'."""
        return Metaclass_JointComponentTolerance.__constants['ROTATION']


class JointComponentTolerance(metaclass=Metaclass_JointComponentTolerance):
    """
    Message class 'JointComponentTolerance'.

    Constants:
      X_AXIS
      Y_AXIS
      Z_AXIS
      TRANSLATION
      ROTATION
    """

    __slots__ = [
        '_joint_name',
        '_component',
        '_position',
        '_velocity',
        '_acceleration',
    ]

    _fields_and_field_types = {
        'joint_name': 'string',
        'component': 'uint16',
        'position': 'double',
        'velocity': 'double',
        'acceleration': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_name = kwargs.get('joint_name', str())
        self.component = kwargs.get('component', int())
        self.position = kwargs.get('position', float())
        self.velocity = kwargs.get('velocity', float())
        self.acceleration = kwargs.get('acceleration', float())

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
        if self.joint_name != other.joint_name:
            return False
        if self.component != other.component:
            return False
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_name(self):
        """Message field 'joint_name'."""
        return self._joint_name

    @joint_name.setter
    def joint_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joint_name' field must be of type 'str'"
        self._joint_name = value

    @builtins.property
    def component(self):
        """Message field 'component'."""
        return self._component

    @component.setter
    def component(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'component' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'component' field must be an unsigned integer in [0, 65535]"
        self._component = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration = value
