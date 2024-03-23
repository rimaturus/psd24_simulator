# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_manager_msgs:srv/SetHardwareComponentState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetHardwareComponentState_Request(type):
    """Metaclass of message 'SetHardwareComponentState_Request'."""

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
                'controller_manager_msgs.srv.SetHardwareComponentState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_hardware_component_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_hardware_component_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_hardware_component_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_hardware_component_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_hardware_component_state__request

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


class SetHardwareComponentState_Request(metaclass=Metaclass_SetHardwareComponentState_Request):
    """Message class 'SetHardwareComponentState_Request'."""

    __slots__ = [
        '_name',
        '_target_state',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'target_state': 'lifecycle_msgs/State',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lifecycle_msgs', 'msg'], 'State'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from lifecycle_msgs.msg import State
        self.target_state = kwargs.get('target_state', State())

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
        if self.target_state != other.target_state:
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
    def target_state(self):
        """Message field 'target_state'."""
        return self._target_state

    @target_state.setter
    def target_state(self, value):
        if __debug__:
            from lifecycle_msgs.msg import State
            assert \
                isinstance(value, State), \
                "The 'target_state' field must be a sub message of type 'State'"
        self._target_state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetHardwareComponentState_Response(type):
    """Metaclass of message 'SetHardwareComponentState_Response'."""

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
                'controller_manager_msgs.srv.SetHardwareComponentState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_hardware_component_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_hardware_component_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_hardware_component_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_hardware_component_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_hardware_component_state__response

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


class SetHardwareComponentState_Response(metaclass=Metaclass_SetHardwareComponentState_Response):
    """Message class 'SetHardwareComponentState_Response'."""

    __slots__ = [
        '_ok',
        '_state',
    ]

    _fields_and_field_types = {
        'ok': 'boolean',
        'state': 'lifecycle_msgs/State',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lifecycle_msgs', 'msg'], 'State'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ok = kwargs.get('ok', bool())
        from lifecycle_msgs.msg import State
        self.state = kwargs.get('state', State())

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
        if self.state != other.state:
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


class Metaclass_SetHardwareComponentState(type):
    """Metaclass of service 'SetHardwareComponentState'."""

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
                'controller_manager_msgs.srv.SetHardwareComponentState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_hardware_component_state

            from controller_manager_msgs.srv import _set_hardware_component_state
            if _set_hardware_component_state.Metaclass_SetHardwareComponentState_Request._TYPE_SUPPORT is None:
                _set_hardware_component_state.Metaclass_SetHardwareComponentState_Request.__import_type_support__()
            if _set_hardware_component_state.Metaclass_SetHardwareComponentState_Response._TYPE_SUPPORT is None:
                _set_hardware_component_state.Metaclass_SetHardwareComponentState_Response.__import_type_support__()


class SetHardwareComponentState(metaclass=Metaclass_SetHardwareComponentState):
    from controller_manager_msgs.srv._set_hardware_component_state import SetHardwareComponentState_Request as Request
    from controller_manager_msgs.srv._set_hardware_component_state import SetHardwareComponentState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
