# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_msgs:msg/MecanumDriveControllerState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MecanumDriveControllerState(type):
    """Metaclass of message 'MecanumDriveControllerState'."""

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
                'control_msgs.msg.MecanumDriveControllerState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mecanum_drive_controller_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mecanum_drive_controller_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mecanum_drive_controller_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mecanum_drive_controller_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mecanum_drive_controller_state

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

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


class MecanumDriveControllerState(metaclass=Metaclass_MecanumDriveControllerState):
    """Message class 'MecanumDriveControllerState'."""

    __slots__ = [
        '_header',
        '_front_left_wheel_velocity',
        '_back_left_wheel_velocity',
        '_back_right_wheel_velocity',
        '_front_right_wheel_velocity',
        '_reference_velocity',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'front_left_wheel_velocity': 'double',
        'back_left_wheel_velocity': 'double',
        'back_right_wheel_velocity': 'double',
        'front_right_wheel_velocity': 'double',
        'reference_velocity': 'geometry_msgs/Twist',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.front_left_wheel_velocity = kwargs.get('front_left_wheel_velocity', float())
        self.back_left_wheel_velocity = kwargs.get('back_left_wheel_velocity', float())
        self.back_right_wheel_velocity = kwargs.get('back_right_wheel_velocity', float())
        self.front_right_wheel_velocity = kwargs.get('front_right_wheel_velocity', float())
        from geometry_msgs.msg import Twist
        self.reference_velocity = kwargs.get('reference_velocity', Twist())

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
        if self.front_left_wheel_velocity != other.front_left_wheel_velocity:
            return False
        if self.back_left_wheel_velocity != other.back_left_wheel_velocity:
            return False
        if self.back_right_wheel_velocity != other.back_right_wheel_velocity:
            return False
        if self.front_right_wheel_velocity != other.front_right_wheel_velocity:
            return False
        if self.reference_velocity != other.reference_velocity:
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
    def front_left_wheel_velocity(self):
        """Message field 'front_left_wheel_velocity'."""
        return self._front_left_wheel_velocity

    @front_left_wheel_velocity.setter
    def front_left_wheel_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_left_wheel_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_left_wheel_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_left_wheel_velocity = value

    @builtins.property
    def back_left_wheel_velocity(self):
        """Message field 'back_left_wheel_velocity'."""
        return self._back_left_wheel_velocity

    @back_left_wheel_velocity.setter
    def back_left_wheel_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'back_left_wheel_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'back_left_wheel_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._back_left_wheel_velocity = value

    @builtins.property
    def back_right_wheel_velocity(self):
        """Message field 'back_right_wheel_velocity'."""
        return self._back_right_wheel_velocity

    @back_right_wheel_velocity.setter
    def back_right_wheel_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'back_right_wheel_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'back_right_wheel_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._back_right_wheel_velocity = value

    @builtins.property
    def front_right_wheel_velocity(self):
        """Message field 'front_right_wheel_velocity'."""
        return self._front_right_wheel_velocity

    @front_right_wheel_velocity.setter
    def front_right_wheel_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_right_wheel_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_right_wheel_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_right_wheel_velocity = value

    @builtins.property
    def reference_velocity(self):
        """Message field 'reference_velocity'."""
        return self._reference_velocity

    @reference_velocity.setter
    def reference_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'reference_velocity' field must be a sub message of type 'Twist'"
        self._reference_velocity = value
