# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_manager_msgs:msg/ControllerState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerState(type):
    """Metaclass of message 'ControllerState'."""

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
                'controller_manager_msgs.msg.ControllerState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_state

            from controller_manager_msgs.msg import ChainConnection
            if ChainConnection.__class__._TYPE_SUPPORT is None:
                ChainConnection.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControllerState(metaclass=Metaclass_ControllerState):
    """Message class 'ControllerState'."""

    __slots__ = [
        '_name',
        '_state',
        '_type',
        '_claimed_interfaces',
        '_required_command_interfaces',
        '_required_state_interfaces',
        '_is_chainable',
        '_is_chained',
        '_reference_interfaces',
        '_chain_connections',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'state': 'string',
        'type': 'string',
        'claimed_interfaces': 'sequence<string>',
        'required_command_interfaces': 'sequence<string>',
        'required_state_interfaces': 'sequence<string>',
        'is_chainable': 'boolean',
        'is_chained': 'boolean',
        'reference_interfaces': 'sequence<string>',
        'chain_connections': 'sequence<controller_manager_msgs/ChainConnection>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['controller_manager_msgs', 'msg'], 'ChainConnection')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.state = kwargs.get('state', str())
        self.type = kwargs.get('type', str())
        self.claimed_interfaces = kwargs.get('claimed_interfaces', [])
        self.required_command_interfaces = kwargs.get('required_command_interfaces', [])
        self.required_state_interfaces = kwargs.get('required_state_interfaces', [])
        self.is_chainable = kwargs.get('is_chainable', bool())
        self.is_chained = kwargs.get('is_chained', bool())
        self.reference_interfaces = kwargs.get('reference_interfaces', [])
        self.chain_connections = kwargs.get('chain_connections', [])

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
        if self.state != other.state:
            return False
        if self.type != other.type:
            return False
        if self.claimed_interfaces != other.claimed_interfaces:
            return False
        if self.required_command_interfaces != other.required_command_interfaces:
            return False
        if self.required_state_interfaces != other.required_state_interfaces:
            return False
        if self.is_chainable != other.is_chainable:
            return False
        if self.is_chained != other.is_chained:
            return False
        if self.reference_interfaces != other.reference_interfaces:
            return False
        if self.chain_connections != other.chain_connections:
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

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

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
    def claimed_interfaces(self):
        """Message field 'claimed_interfaces'."""
        return self._claimed_interfaces

    @claimed_interfaces.setter
    def claimed_interfaces(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'claimed_interfaces' field must be a set or sequence and each value of type 'str'"
        self._claimed_interfaces = value

    @builtins.property
    def required_command_interfaces(self):
        """Message field 'required_command_interfaces'."""
        return self._required_command_interfaces

    @required_command_interfaces.setter
    def required_command_interfaces(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'required_command_interfaces' field must be a set or sequence and each value of type 'str'"
        self._required_command_interfaces = value

    @builtins.property
    def required_state_interfaces(self):
        """Message field 'required_state_interfaces'."""
        return self._required_state_interfaces

    @required_state_interfaces.setter
    def required_state_interfaces(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'required_state_interfaces' field must be a set or sequence and each value of type 'str'"
        self._required_state_interfaces = value

    @builtins.property
    def is_chainable(self):
        """Message field 'is_chainable'."""
        return self._is_chainable

    @is_chainable.setter
    def is_chainable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_chainable' field must be of type 'bool'"
        self._is_chainable = value

    @builtins.property
    def is_chained(self):
        """Message field 'is_chained'."""
        return self._is_chained

    @is_chained.setter
    def is_chained(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_chained' field must be of type 'bool'"
        self._is_chained = value

    @builtins.property
    def reference_interfaces(self):
        """Message field 'reference_interfaces'."""
        return self._reference_interfaces

    @reference_interfaces.setter
    def reference_interfaces(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'reference_interfaces' field must be a set or sequence and each value of type 'str'"
        self._reference_interfaces = value

    @builtins.property
    def chain_connections(self):
        """Message field 'chain_connections'."""
        return self._chain_connections

    @chain_connections.setter
    def chain_connections(self, value):
        if __debug__:
            from controller_manager_msgs.msg import ChainConnection
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
                 all(isinstance(v, ChainConnection) for v in value) and
                 True), \
                "The 'chain_connections' field must be a set or sequence and each value of type 'ChainConnection'"
        self._chain_connections = value
