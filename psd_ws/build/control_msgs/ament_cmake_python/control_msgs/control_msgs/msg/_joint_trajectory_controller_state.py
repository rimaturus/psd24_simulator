# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_msgs:msg/JointTrajectoryControllerState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointTrajectoryControllerState(type):
    """Metaclass of message 'JointTrajectoryControllerState'."""

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
                'control_msgs.msg.JointTrajectoryControllerState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_trajectory_controller_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_trajectory_controller_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_trajectory_controller_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_trajectory_controller_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_trajectory_controller_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from trajectory_msgs.msg import JointTrajectoryPoint
            if JointTrajectoryPoint.__class__._TYPE_SUPPORT is None:
                JointTrajectoryPoint.__class__.__import_type_support__()

            from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
            if MultiDOFJointTrajectoryPoint.__class__._TYPE_SUPPORT is None:
                MultiDOFJointTrajectoryPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointTrajectoryControllerState(metaclass=Metaclass_JointTrajectoryControllerState):
    """Message class 'JointTrajectoryControllerState'."""

    __slots__ = [
        '_header',
        '_joint_names',
        '_reference',
        '_feedback',
        '_error',
        '_output',
        '_desired',
        '_actual',
        '_multi_dof_joint_names',
        '_multi_dof_reference',
        '_multi_dof_feedback',
        '_multi_dof_error',
        '_multi_dof_output',
        '_multi_dof_desired',
        '_multi_dof_actual',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'joint_names': 'sequence<string>',
        'reference': 'trajectory_msgs/JointTrajectoryPoint',
        'feedback': 'trajectory_msgs/JointTrajectoryPoint',
        'error': 'trajectory_msgs/JointTrajectoryPoint',
        'output': 'trajectory_msgs/JointTrajectoryPoint',
        'desired': 'trajectory_msgs/JointTrajectoryPoint',
        'actual': 'trajectory_msgs/JointTrajectoryPoint',
        'multi_dof_joint_names': 'sequence<string>',
        'multi_dof_reference': 'trajectory_msgs/MultiDOFJointTrajectoryPoint',
        'multi_dof_feedback': 'trajectory_msgs/MultiDOFJointTrajectoryPoint',
        'multi_dof_error': 'trajectory_msgs/MultiDOFJointTrajectoryPoint',
        'multi_dof_output': 'trajectory_msgs/MultiDOFJointTrajectoryPoint',
        'multi_dof_desired': 'trajectory_msgs/MultiDOFJointTrajectoryPoint',
        'multi_dof_actual': 'trajectory_msgs/MultiDOFJointTrajectoryPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'MultiDOFJointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'MultiDOFJointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'MultiDOFJointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'MultiDOFJointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'MultiDOFJointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'MultiDOFJointTrajectoryPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.joint_names = kwargs.get('joint_names', [])
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.reference = kwargs.get('reference', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.feedback = kwargs.get('feedback', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.error = kwargs.get('error', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.output = kwargs.get('output', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.desired = kwargs.get('desired', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.actual = kwargs.get('actual', JointTrajectoryPoint())
        self.multi_dof_joint_names = kwargs.get('multi_dof_joint_names', [])
        from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
        self.multi_dof_reference = kwargs.get('multi_dof_reference', MultiDOFJointTrajectoryPoint())
        from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
        self.multi_dof_feedback = kwargs.get('multi_dof_feedback', MultiDOFJointTrajectoryPoint())
        from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
        self.multi_dof_error = kwargs.get('multi_dof_error', MultiDOFJointTrajectoryPoint())
        from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
        self.multi_dof_output = kwargs.get('multi_dof_output', MultiDOFJointTrajectoryPoint())
        from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
        self.multi_dof_desired = kwargs.get('multi_dof_desired', MultiDOFJointTrajectoryPoint())
        from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
        self.multi_dof_actual = kwargs.get('multi_dof_actual', MultiDOFJointTrajectoryPoint())

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
        if self.joint_names != other.joint_names:
            return False
        if self.reference != other.reference:
            return False
        if self.feedback != other.feedback:
            return False
        if self.error != other.error:
            return False
        if self.output != other.output:
            return False
        if self.desired != other.desired:
            return False
        if self.actual != other.actual:
            return False
        if self.multi_dof_joint_names != other.multi_dof_joint_names:
            return False
        if self.multi_dof_reference != other.multi_dof_reference:
            return False
        if self.multi_dof_feedback != other.multi_dof_feedback:
            return False
        if self.multi_dof_error != other.multi_dof_error:
            return False
        if self.multi_dof_output != other.multi_dof_output:
            return False
        if self.multi_dof_desired != other.multi_dof_desired:
            return False
        if self.multi_dof_actual != other.multi_dof_actual:
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
    def joint_names(self):
        """Message field 'joint_names'."""
        return self._joint_names

    @joint_names.setter
    def joint_names(self, value):
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
                "The 'joint_names' field must be a set or sequence and each value of type 'str'"
        self._joint_names = value

    @builtins.property
    def reference(self):
        """Message field 'reference'."""
        return self._reference

    @reference.setter
    def reference(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'reference' field must be a sub message of type 'JointTrajectoryPoint'"
        self._reference = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'feedback' field must be a sub message of type 'JointTrajectoryPoint'"
        self._feedback = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'error' field must be a sub message of type 'JointTrajectoryPoint'"
        self._error = value

    @builtins.property
    def output(self):
        """Message field 'output'."""
        return self._output

    @output.setter
    def output(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'output' field must be a sub message of type 'JointTrajectoryPoint'"
        self._output = value

    @builtins.property
    def desired(self):
        """Message field 'desired'."""
        return self._desired

    @desired.setter
    def desired(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'desired' field must be a sub message of type 'JointTrajectoryPoint'"
        self._desired = value

    @builtins.property
    def actual(self):
        """Message field 'actual'."""
        return self._actual

    @actual.setter
    def actual(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'actual' field must be a sub message of type 'JointTrajectoryPoint'"
        self._actual = value

    @builtins.property
    def multi_dof_joint_names(self):
        """Message field 'multi_dof_joint_names'."""
        return self._multi_dof_joint_names

    @multi_dof_joint_names.setter
    def multi_dof_joint_names(self, value):
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
                "The 'multi_dof_joint_names' field must be a set or sequence and each value of type 'str'"
        self._multi_dof_joint_names = value

    @builtins.property
    def multi_dof_reference(self):
        """Message field 'multi_dof_reference'."""
        return self._multi_dof_reference

    @multi_dof_reference.setter
    def multi_dof_reference(self, value):
        if __debug__:
            from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
            assert \
                isinstance(value, MultiDOFJointTrajectoryPoint), \
                "The 'multi_dof_reference' field must be a sub message of type 'MultiDOFJointTrajectoryPoint'"
        self._multi_dof_reference = value

    @builtins.property
    def multi_dof_feedback(self):
        """Message field 'multi_dof_feedback'."""
        return self._multi_dof_feedback

    @multi_dof_feedback.setter
    def multi_dof_feedback(self, value):
        if __debug__:
            from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
            assert \
                isinstance(value, MultiDOFJointTrajectoryPoint), \
                "The 'multi_dof_feedback' field must be a sub message of type 'MultiDOFJointTrajectoryPoint'"
        self._multi_dof_feedback = value

    @builtins.property
    def multi_dof_error(self):
        """Message field 'multi_dof_error'."""
        return self._multi_dof_error

    @multi_dof_error.setter
    def multi_dof_error(self, value):
        if __debug__:
            from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
            assert \
                isinstance(value, MultiDOFJointTrajectoryPoint), \
                "The 'multi_dof_error' field must be a sub message of type 'MultiDOFJointTrajectoryPoint'"
        self._multi_dof_error = value

    @builtins.property
    def multi_dof_output(self):
        """Message field 'multi_dof_output'."""
        return self._multi_dof_output

    @multi_dof_output.setter
    def multi_dof_output(self, value):
        if __debug__:
            from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
            assert \
                isinstance(value, MultiDOFJointTrajectoryPoint), \
                "The 'multi_dof_output' field must be a sub message of type 'MultiDOFJointTrajectoryPoint'"
        self._multi_dof_output = value

    @builtins.property
    def multi_dof_desired(self):
        """Message field 'multi_dof_desired'."""
        return self._multi_dof_desired

    @multi_dof_desired.setter
    def multi_dof_desired(self, value):
        if __debug__:
            from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
            assert \
                isinstance(value, MultiDOFJointTrajectoryPoint), \
                "The 'multi_dof_desired' field must be a sub message of type 'MultiDOFJointTrajectoryPoint'"
        self._multi_dof_desired = value

    @builtins.property
    def multi_dof_actual(self):
        """Message field 'multi_dof_actual'."""
        return self._multi_dof_actual

    @multi_dof_actual.setter
    def multi_dof_actual(self, value):
        if __debug__:
            from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
            assert \
                isinstance(value, MultiDOFJointTrajectoryPoint), \
                "The 'multi_dof_actual' field must be a sub message of type 'MultiDOFJointTrajectoryPoint'"
        self._multi_dof_actual = value
