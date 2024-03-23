# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_manager_msgs:msg/HardwareComponentState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HardwareComponentState(type):
    """Metaclass of message 'HardwareComponentState'."""

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
                'controller_manager_msgs.msg.HardwareComponentState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hardware_component_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hardware_component_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hardware_component_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hardware_component_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hardware_component_state

            from controller_manager_msgs.msg import HardwareInterface
            if HardwareInterface.__class__._TYPE_SUPPORT is None:
                HardwareInterface.__class__.__import_type_support__()

            from lifecycle_msgs.msg import State
            if State.__class__._TYPE_SUPPORT is None:
                State.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HardwareComponentState(metaclass=Metaclass_HardwareComponentState):
    """Message class 'HardwareComponentState'."""

    __slots__ = [
        '_name',
        '_type',
        '_class_type',
        '_state',
        '_command_interfaces',
        '_state_interfaces',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'type': 'string',
        'class_type': 'string',
        'state': 'lifecycle_msgs/State',
        'command_interfaces': 'sequence<controller_manager_msgs/HardwareInterface>',
        'state_interfaces': 'sequence<controller_manager_msgs/HardwareInterface>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lifecycle_msgs', 'msg'], 'State'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['controller_manager_msgs', 'msg'], 'HardwareInterface')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['controller_manager_msgs', 'msg'], 'HardwareInterface')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.type = kwargs.get('type', str())
        self.class_type = kwargs.get('class_type', str())
        from lifecycle_msgs.msg import State
        self.state = kwargs.get('state', State())
        self.command_interfaces = kwargs.get('command_interfaces', [])
        self.state_interfaces = kwargs.get('state_interfaces', [])

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
        if self.name != other.name:
            return False
        if self.type != other.type:
            return False
        if self.class_type != other.class_type:
            return False
        if self.state != other.state:
            return False
        if self.command_interfaces != other.command_interfaces:
            return False
        if self.state_interfaces != other.state_interfaces:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def class_type(self):
        """Message field 'class_type'."""
        return self._class_type

    @class_type.setter
    def class_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_type' field must be of type 'str'"
        self._class_type = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            from lifecycle_msgs.msg import State
            assert \
                isinstance(value, State), \
                "The 'state' field must be a sub message of type 'State'"
        self._state = value

    @builtins.property
    def command_interfaces(self):
        """Message field 'command_interfaces'."""
        return self._command_interfaces

    @command_interfaces.setter
    def command_interfaces(self, value):
        if __debug__:
            from controller_manager_msgs.msg import HardwareInterface
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
                 all(isinstance(v, HardwareInterface) for v in value) and
                 True), \
                "The 'command_interfaces' field must be a set or sequence and each value of type 'HardwareInterface'"
        self._command_interfaces = value

    @builtins.property
    def state_interfaces(self):
        """Message field 'state_interfaces'."""
        return self._state_interfaces

    @state_interfaces.setter
    def state_interfaces(self, value):
        if __debug__:
            from controller_manager_msgs.msg import HardwareInterface
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
                 all(isinstance(v, HardwareInterface) for v in value) and
                 True), \
                "The 'state_interfaces' field must be a set or sequence and each value of type 'HardwareInterface'"
        self._state_interfaces = value
