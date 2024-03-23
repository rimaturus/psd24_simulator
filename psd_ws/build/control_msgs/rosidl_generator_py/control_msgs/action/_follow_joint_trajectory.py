# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_msgs:action/FollowJointTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FollowJointTrajectory_Goal(type):
    """Metaclass of message 'FollowJointTrajectory_Goal'."""

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
                'control_msgs.action.FollowJointTrajectory_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_joint_trajectory__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_joint_trajectory__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_joint_trajectory__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_joint_trajectory__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_joint_trajectory__goal

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from control_msgs.msg import JointComponentTolerance
            if JointComponentTolerance.__class__._TYPE_SUPPORT is None:
                JointComponentTolerance.__class__.__import_type_support__()

            from control_msgs.msg import JointTolerance
            if JointTolerance.__class__._TYPE_SUPPORT is None:
                JointTolerance.__class__.__import_type_support__()

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

            from trajectory_msgs.msg import MultiDOFJointTrajectory
            if MultiDOFJointTrajectory.__class__._TYPE_SUPPORT is None:
                MultiDOFJointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowJointTrajectory_Goal(metaclass=Metaclass_FollowJointTrajectory_Goal):
    """Message class 'FollowJointTrajectory_Goal'."""

    __slots__ = [
        '_trajectory',
        '_multi_dof_trajectory',
        '_path_tolerance',
        '_component_path_tolerance',
        '_goal_tolerance',
        '_component_goal_tolerance',
        '_goal_time_tolerance',
    ]

    _fields_and_field_types = {
        'trajectory': 'trajectory_msgs/JointTrajectory',
        'multi_dof_trajectory': 'trajectory_msgs/MultiDOFJointTrajectory',
        'path_tolerance': 'sequence<control_msgs/JointTolerance>',
        'component_path_tolerance': 'sequence<control_msgs/JointComponentTolerance>',
        'goal_tolerance': 'sequence<control_msgs/JointTolerance>',
        'component_goal_tolerance': 'sequence<control_msgs/JointComponentTolerance>',
        'goal_time_tolerance': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'MultiDOFJointTrajectory'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['control_msgs', 'msg'], 'JointTolerance')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['control_msgs', 'msg'], 'JointComponentTolerance')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['control_msgs', 'msg'], 'JointTolerance')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['control_msgs', 'msg'], 'JointComponentTolerance')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from trajectory_msgs.msg import JointTrajectory
        self.trajectory = kwargs.get('trajectory', JointTrajectory())
        from trajectory_msgs.msg import MultiDOFJointTrajectory
        self.multi_dof_trajectory = kwargs.get('multi_dof_trajectory', MultiDOFJointTrajectory())
        self.path_tolerance = kwargs.get('path_tolerance', [])
        self.component_path_tolerance = kwargs.get('component_path_tolerance', [])
        self.goal_tolerance = kwargs.get('goal_tolerance', [])
        self.component_goal_tolerance = kwargs.get('component_goal_tolerance', [])
        from builtin_interfaces.msg import Duration
        self.goal_time_tolerance = kwargs.get('goal_time_tolerance', Duration())

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
        if self.trajectory != other.trajectory:
            return False
        if self.multi_dof_trajectory != other.multi_dof_trajectory:
            return False
        if self.path_tolerance != other.path_tolerance:
            return False
        if self.component_path_tolerance != other.component_path_tolerance:
            return False
        if self.goal_tolerance != other.goal_tolerance:
            return False
        if self.component_goal_tolerance != other.component_goal_tolerance:
            return False
        if self.goal_time_tolerance != other.goal_time_tolerance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'trajectory' field must be a sub message of type 'JointTrajectory'"
        self._trajectory = value

    @builtins.property
    def multi_dof_trajectory(self):
        """Message field 'multi_dof_trajectory'."""
        return self._multi_dof_trajectory

    @multi_dof_trajectory.setter
    def multi_dof_trajectory(self, value):
        if __debug__:
            from trajectory_msgs.msg import MultiDOFJointTrajectory
            assert \
                isinstance(value, MultiDOFJointTrajectory), \
                "The 'multi_dof_trajectory' field must be a sub message of type 'MultiDOFJointTrajectory'"
        self._multi_dof_trajectory = value

    @builtins.property
    def path_tolerance(self):
        """Message field 'path_tolerance'."""
        return self._path_tolerance

    @path_tolerance.setter
    def path_tolerance(self, value):
        if __debug__:
            from control_msgs.msg import JointTolerance
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
                 all(isinstance(v, JointTolerance) for v in value) and
                 True), \
                "The 'path_tolerance' field must be a set or sequence and each value of type 'JointTolerance'"
        self._path_tolerance = value

    @builtins.property
    def component_path_tolerance(self):
        """Message field 'component_path_tolerance'."""
        return self._component_path_tolerance

    @component_path_tolerance.setter
    def component_path_tolerance(self, value):
        if __debug__:
            from control_msgs.msg import JointComponentTolerance
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
                 all(isinstance(v, JointComponentTolerance) for v in value) and
                 True), \
                "The 'component_path_tolerance' field must be a set or sequence and each value of type 'JointComponentTolerance'"
        self._component_path_tolerance = value

    @builtins.property
    def goal_tolerance(self):
        """Message field 'goal_tolerance'."""
        return self._goal_tolerance

    @goal_tolerance.setter
    def goal_tolerance(self, value):
        if __debug__:
            from control_msgs.msg import JointTolerance
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
                 all(isinstance(v, JointTolerance) for v in value) and
                 True), \
                "The 'goal_tolerance' field must be a set or sequence and each value of type 'JointTolerance'"
        self._goal_tolerance = value

    @builtins.property
    def component_goal_tolerance(self):
        """Message field 'component_goal_tolerance'."""
        return self._component_goal_tolerance

    @component_goal_tolerance.setter
    def component_goal_tolerance(self, value):
        if __debug__:
            from control_msgs.msg import JointComponentTolerance
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
                 all(isinstance(v, JointComponentTolerance) for v in value) and
                 True), \
                "The 'component_goal_tolerance' field must be a set or sequence and each value of type 'JointComponentTolerance'"
        self._component_goal_tolerance = value

    @builtins.property
    def goal_time_tolerance(self):
        """Message field 'goal_time_tolerance'."""
        return self._goal_time_tolerance

    @goal_time_tolerance.setter
    def goal_time_tolerance(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'goal_time_tolerance' field must be a sub message of type 'Duration'"
        self._goal_time_tolerance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowJointTrajectory_Result(type):
    """Metaclass of message 'FollowJointTrajectory_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESSFUL': 0,
        'INVALID_GOAL': -1,
        'INVALID_JOINTS': -2,
        'OLD_HEADER_TIMESTAMP': -3,
        'PATH_TOLERANCE_VIOLATED': -4,
        'GOAL_TOLERANCE_VIOLATED': -5,
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
                'control_msgs.action.FollowJointTrajectory_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_joint_trajectory__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_joint_trajectory__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_joint_trajectory__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_joint_trajectory__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_joint_trajectory__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESSFUL': cls.__constants['SUCCESSFUL'],
            'INVALID_GOAL': cls.__constants['INVALID_GOAL'],
            'INVALID_JOINTS': cls.__constants['INVALID_JOINTS'],
            'OLD_HEADER_TIMESTAMP': cls.__constants['OLD_HEADER_TIMESTAMP'],
            'PATH_TOLERANCE_VIOLATED': cls.__constants['PATH_TOLERANCE_VIOLATED'],
            'GOAL_TOLERANCE_VIOLATED': cls.__constants['GOAL_TOLERANCE_VIOLATED'],
        }

    @property
    def SUCCESSFUL(self):
        """Message constant 'SUCCESSFUL'."""
        return Metaclass_FollowJointTrajectory_Result.__constants['SUCCESSFUL']

    @property
    def INVALID_GOAL(self):
        """Message constant 'INVALID_GOAL'."""
        return Metaclass_FollowJointTrajectory_Result.__constants['INVALID_GOAL']

    @property
    def INVALID_JOINTS(self):
        """Message constant 'INVALID_JOINTS'."""
        return Metaclass_FollowJointTrajectory_Result.__constants['INVALID_JOINTS']

    @property
    def OLD_HEADER_TIMESTAMP(self):
        """Message constant 'OLD_HEADER_TIMESTAMP'."""
        return Metaclass_FollowJointTrajectory_Result.__constants['OLD_HEADER_TIMESTAMP']

    @property
    def PATH_TOLERANCE_VIOLATED(self):
        """Message constant 'PATH_TOLERANCE_VIOLATED'."""
        return Metaclass_FollowJointTrajectory_Result.__constants['PATH_TOLERANCE_VIOLATED']

    @property
    def GOAL_TOLERANCE_VIOLATED(self):
        """Message constant 'GOAL_TOLERANCE_VIOLATED'."""
        return Metaclass_FollowJointTrajectory_Result.__constants['GOAL_TOLERANCE_VIOLATED']


class FollowJointTrajectory_Result(metaclass=Metaclass_FollowJointTrajectory_Result):
    """
    Message class 'FollowJointTrajectory_Result'.

    Constants:
      SUCCESSFUL
      INVALID_GOAL
      INVALID_JOINTS
      OLD_HEADER_TIMESTAMP
      PATH_TOLERANCE_VIOLATED
      GOAL_TOLERANCE_VIOLATED
    """

    __slots__ = [
        '_error_code',
        '_error_string',
    ]

    _fields_and_field_types = {
        'error_code': 'int32',
        'error_string': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error_code = kwargs.get('error_code', int())
        self.error_string = kwargs.get('error_string', str())

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
        if self.error_code != other.error_code:
            return False
        if self.error_string != other.error_string:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'error_code' field must be an integer in [-2147483648, 2147483647]"
        self._error_code = value

    @builtins.property
    def error_string(self):
        """Message field 'error_string'."""
        return self._error_string

    @error_string.setter
    def error_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_string' field must be of type 'str'"
        self._error_string = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowJointTrajectory_Feedback(type):
    """Metaclass of message 'FollowJointTrajectory_Feedback'."""

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
                'control_msgs.action.FollowJointTrajectory_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_joint_trajectory__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_joint_trajectory__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_joint_trajectory__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_joint_trajectory__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_joint_trajectory__feedback

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


class FollowJointTrajectory_Feedback(metaclass=Metaclass_FollowJointTrajectory_Feedback):
    """Message class 'FollowJointTrajectory_Feedback'."""

    __slots__ = [
        '_header',
        '_joint_names',
        '_desired',
        '_actual',
        '_error',
        '_multi_dof_joint_names',
        '_multi_dof_desired',
        '_multi_dof_actual',
        '_multi_dof_error',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'joint_names': 'sequence<string>',
        'desired': 'trajectory_msgs/JointTrajectoryPoint',
        'actual': 'trajectory_msgs/JointTrajectoryPoint',
        'error': 'trajectory_msgs/JointTrajectoryPoint',
        'multi_dof_joint_names': 'sequence<string>',
        'multi_dof_desired': 'trajectory_msgs/MultiDOFJointTrajectoryPoint',
        'multi_dof_actual': 'trajectory_msgs/MultiDOFJointTrajectoryPoint',
        'multi_dof_error': 'trajectory_msgs/MultiDOFJointTrajectoryPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.desired = kwargs.get('desired', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.actual = kwargs.get('actual', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.error = kwargs.get('error', JointTrajectoryPoint())
        self.multi_dof_joint_names = kwargs.get('multi_dof_joint_names', [])
        from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
        self.multi_dof_desired = kwargs.get('multi_dof_desired', MultiDOFJointTrajectoryPoint())
        from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
        self.multi_dof_actual = kwargs.get('multi_dof_actual', MultiDOFJointTrajectoryPoint())
        from trajectory_msgs.msg import MultiDOFJointTrajectoryPoint
        self.multi_dof_error = kwargs.get('multi_dof_error', MultiDOFJointTrajectoryPoint())

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
        if self.desired != other.desired:
            return False
        if self.actual != other.actual:
            return False
        if self.error != other.error:
            return False
        if self.multi_dof_joint_names != other.multi_dof_joint_names:
            return False
        if self.multi_dof_desired != other.multi_dof_desired:
            return False
        if self.multi_dof_actual != other.multi_dof_actual:
            return False
        if self.multi_dof_error != other.multi_dof_error:
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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowJointTrajectory_SendGoal_Request(type):
    """Metaclass of message 'FollowJointTrajectory_SendGoal_Request'."""

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
                'control_msgs.action.FollowJointTrajectory_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_joint_trajectory__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_joint_trajectory__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_joint_trajectory__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_joint_trajectory__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_joint_trajectory__send_goal__request

            from control_msgs.action import FollowJointTrajectory
            if FollowJointTrajectory.Goal.__class__._TYPE_SUPPORT is None:
                FollowJointTrajectory.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowJointTrajectory_SendGoal_Request(metaclass=Metaclass_FollowJointTrajectory_SendGoal_Request):
    """Message class 'FollowJointTrajectory_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'control_msgs/FollowJointTrajectory_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['control_msgs', 'action'], 'FollowJointTrajectory_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_Goal
        self.goal = kwargs.get('goal', FollowJointTrajectory_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_Goal
            assert \
                isinstance(value, FollowJointTrajectory_Goal), \
                "The 'goal' field must be a sub message of type 'FollowJointTrajectory_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowJointTrajectory_SendGoal_Response(type):
    """Metaclass of message 'FollowJointTrajectory_SendGoal_Response'."""

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
                'control_msgs.action.FollowJointTrajectory_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_joint_trajectory__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_joint_trajectory__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_joint_trajectory__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_joint_trajectory__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_joint_trajectory__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowJointTrajectory_SendGoal_Response(metaclass=Metaclass_FollowJointTrajectory_SendGoal_Response):
    """Message class 'FollowJointTrajectory_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_FollowJointTrajectory_SendGoal(type):
    """Metaclass of service 'FollowJointTrajectory_SendGoal'."""

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
                'control_msgs.action.FollowJointTrajectory_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__follow_joint_trajectory__send_goal

            from control_msgs.action import _follow_joint_trajectory
            if _follow_joint_trajectory.Metaclass_FollowJointTrajectory_SendGoal_Request._TYPE_SUPPORT is None:
                _follow_joint_trajectory.Metaclass_FollowJointTrajectory_SendGoal_Request.__import_type_support__()
            if _follow_joint_trajectory.Metaclass_FollowJointTrajectory_SendGoal_Response._TYPE_SUPPORT is None:
                _follow_joint_trajectory.Metaclass_FollowJointTrajectory_SendGoal_Response.__import_type_support__()


class FollowJointTrajectory_SendGoal(metaclass=Metaclass_FollowJointTrajectory_SendGoal):
    from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_SendGoal_Request as Request
    from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowJointTrajectory_GetResult_Request(type):
    """Metaclass of message 'FollowJointTrajectory_GetResult_Request'."""

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
                'control_msgs.action.FollowJointTrajectory_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_joint_trajectory__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_joint_trajectory__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_joint_trajectory__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_joint_trajectory__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_joint_trajectory__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowJointTrajectory_GetResult_Request(metaclass=Metaclass_FollowJointTrajectory_GetResult_Request):
    """Message class 'FollowJointTrajectory_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowJointTrajectory_GetResult_Response(type):
    """Metaclass of message 'FollowJointTrajectory_GetResult_Response'."""

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
                'control_msgs.action.FollowJointTrajectory_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_joint_trajectory__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_joint_trajectory__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_joint_trajectory__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_joint_trajectory__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_joint_trajectory__get_result__response

            from control_msgs.action import FollowJointTrajectory
            if FollowJointTrajectory.Result.__class__._TYPE_SUPPORT is None:
                FollowJointTrajectory.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowJointTrajectory_GetResult_Response(metaclass=Metaclass_FollowJointTrajectory_GetResult_Response):
    """Message class 'FollowJointTrajectory_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'control_msgs/FollowJointTrajectory_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['control_msgs', 'action'], 'FollowJointTrajectory_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_Result
        self.result = kwargs.get('result', FollowJointTrajectory_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_Result
            assert \
                isinstance(value, FollowJointTrajectory_Result), \
                "The 'result' field must be a sub message of type 'FollowJointTrajectory_Result'"
        self._result = value


class Metaclass_FollowJointTrajectory_GetResult(type):
    """Metaclass of service 'FollowJointTrajectory_GetResult'."""

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
                'control_msgs.action.FollowJointTrajectory_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__follow_joint_trajectory__get_result

            from control_msgs.action import _follow_joint_trajectory
            if _follow_joint_trajectory.Metaclass_FollowJointTrajectory_GetResult_Request._TYPE_SUPPORT is None:
                _follow_joint_trajectory.Metaclass_FollowJointTrajectory_GetResult_Request.__import_type_support__()
            if _follow_joint_trajectory.Metaclass_FollowJointTrajectory_GetResult_Response._TYPE_SUPPORT is None:
                _follow_joint_trajectory.Metaclass_FollowJointTrajectory_GetResult_Response.__import_type_support__()


class FollowJointTrajectory_GetResult(metaclass=Metaclass_FollowJointTrajectory_GetResult):
    from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_GetResult_Request as Request
    from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowJointTrajectory_FeedbackMessage(type):
    """Metaclass of message 'FollowJointTrajectory_FeedbackMessage'."""

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
                'control_msgs.action.FollowJointTrajectory_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_joint_trajectory__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_joint_trajectory__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_joint_trajectory__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_joint_trajectory__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_joint_trajectory__feedback_message

            from control_msgs.action import FollowJointTrajectory
            if FollowJointTrajectory.Feedback.__class__._TYPE_SUPPORT is None:
                FollowJointTrajectory.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowJointTrajectory_FeedbackMessage(metaclass=Metaclass_FollowJointTrajectory_FeedbackMessage):
    """Message class 'FollowJointTrajectory_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'control_msgs/FollowJointTrajectory_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['control_msgs', 'action'], 'FollowJointTrajectory_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_Feedback
        self.feedback = kwargs.get('feedback', FollowJointTrajectory_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_Feedback
            assert \
                isinstance(value, FollowJointTrajectory_Feedback), \
                "The 'feedback' field must be a sub message of type 'FollowJointTrajectory_Feedback'"
        self._feedback = value


class Metaclass_FollowJointTrajectory(type):
    """Metaclass of action 'FollowJointTrajectory'."""

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
                'control_msgs.action.FollowJointTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__follow_joint_trajectory

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from control_msgs.action import _follow_joint_trajectory
            if _follow_joint_trajectory.Metaclass_FollowJointTrajectory_SendGoal._TYPE_SUPPORT is None:
                _follow_joint_trajectory.Metaclass_FollowJointTrajectory_SendGoal.__import_type_support__()
            if _follow_joint_trajectory.Metaclass_FollowJointTrajectory_GetResult._TYPE_SUPPORT is None:
                _follow_joint_trajectory.Metaclass_FollowJointTrajectory_GetResult.__import_type_support__()
            if _follow_joint_trajectory.Metaclass_FollowJointTrajectory_FeedbackMessage._TYPE_SUPPORT is None:
                _follow_joint_trajectory.Metaclass_FollowJointTrajectory_FeedbackMessage.__import_type_support__()


class FollowJointTrajectory(metaclass=Metaclass_FollowJointTrajectory):

    # The goal message defined in the action definition.
    from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_Goal as Goal
    # The result message defined in the action definition.
    from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_Result as Result
    # The feedback message defined in the action definition.
    from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from control_msgs.action._follow_joint_trajectory import FollowJointTrajectory_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
