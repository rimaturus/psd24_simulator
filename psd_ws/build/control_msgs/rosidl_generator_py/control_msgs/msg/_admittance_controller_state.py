# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_msgs:msg/AdmittanceControllerState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AdmittanceControllerState(type):
    """Metaclass of message 'AdmittanceControllerState'."""

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
                'control_msgs.msg.AdmittanceControllerState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__admittance_controller_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__admittance_controller_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__admittance_controller_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__admittance_controller_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__admittance_controller_state

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistStamped
            if TwistStamped.__class__._TYPE_SUPPORT is None:
                TwistStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import WrenchStamped
            if WrenchStamped.__class__._TYPE_SUPPORT is None:
                WrenchStamped.__class__.__import_type_support__()

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

            from std_msgs.msg import Float64MultiArray
            if Float64MultiArray.__class__._TYPE_SUPPORT is None:
                Float64MultiArray.__class__.__import_type_support__()

            from std_msgs.msg import Int8MultiArray
            if Int8MultiArray.__class__._TYPE_SUPPORT is None:
                Int8MultiArray.__class__.__import_type_support__()

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AdmittanceControllerState(metaclass=Metaclass_AdmittanceControllerState):
    """Message class 'AdmittanceControllerState'."""

    __slots__ = [
        '_mass',
        '_damping',
        '_stiffness',
        '_rot_base_control',
        '_ref_trans_base_ft',
        '_selected_axes',
        '_ft_sensor_frame',
        '_admittance_position',
        '_admittance_acceleration',
        '_admittance_velocity',
        '_wrench_base',
        '_joint_state',
    ]

    _fields_and_field_types = {
        'mass': 'std_msgs/Float64MultiArray',
        'damping': 'std_msgs/Float64MultiArray',
        'stiffness': 'std_msgs/Float64MultiArray',
        'rot_base_control': 'geometry_msgs/Quaternion',
        'ref_trans_base_ft': 'geometry_msgs/TransformStamped',
        'selected_axes': 'std_msgs/Int8MultiArray',
        'ft_sensor_frame': 'std_msgs/String',
        'admittance_position': 'geometry_msgs/TransformStamped',
        'admittance_acceleration': 'geometry_msgs/TwistStamped',
        'admittance_velocity': 'geometry_msgs/TwistStamped',
        'wrench_base': 'geometry_msgs/WrenchStamped',
        'joint_state': 'sensor_msgs/JointState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'WrenchStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64MultiArray
        self.mass = kwargs.get('mass', Float64MultiArray())
        from std_msgs.msg import Float64MultiArray
        self.damping = kwargs.get('damping', Float64MultiArray())
        from std_msgs.msg import Float64MultiArray
        self.stiffness = kwargs.get('stiffness', Float64MultiArray())
        from geometry_msgs.msg import Quaternion
        self.rot_base_control = kwargs.get('rot_base_control', Quaternion())
        from geometry_msgs.msg import TransformStamped
        self.ref_trans_base_ft = kwargs.get('ref_trans_base_ft', TransformStamped())
        from std_msgs.msg import Int8MultiArray
        self.selected_axes = kwargs.get('selected_axes', Int8MultiArray())
        from std_msgs.msg import String
        self.ft_sensor_frame = kwargs.get('ft_sensor_frame', String())
        from geometry_msgs.msg import TransformStamped
        self.admittance_position = kwargs.get('admittance_position', TransformStamped())
        from geometry_msgs.msg import TwistStamped
        self.admittance_acceleration = kwargs.get('admittance_acceleration', TwistStamped())
        from geometry_msgs.msg import TwistStamped
        self.admittance_velocity = kwargs.get('admittance_velocity', TwistStamped())
        from geometry_msgs.msg import WrenchStamped
        self.wrench_base = kwargs.get('wrench_base', WrenchStamped())
        from sensor_msgs.msg import JointState
        self.joint_state = kwargs.get('joint_state', JointState())

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
        if self.mass != other.mass:
            return False
        if self.damping != other.damping:
            return False
        if self.stiffness != other.stiffness:
            return False
        if self.rot_base_control != other.rot_base_control:
            return False
        if self.ref_trans_base_ft != other.ref_trans_base_ft:
            return False
        if self.selected_axes != other.selected_axes:
            return False
        if self.ft_sensor_frame != other.ft_sensor_frame:
            return False
        if self.admittance_position != other.admittance_position:
            return False
        if self.admittance_acceleration != other.admittance_acceleration:
            return False
        if self.admittance_velocity != other.admittance_velocity:
            return False
        if self.wrench_base != other.wrench_base:
            return False
        if self.joint_state != other.joint_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mass(self):
        """Message field 'mass'."""
        return self._mass

    @mass.setter
    def mass(self, value):
        if __debug__:
            from std_msgs.msg import Float64MultiArray
            assert \
                isinstance(value, Float64MultiArray), \
                "The 'mass' field must be a sub message of type 'Float64MultiArray'"
        self._mass = value

    @builtins.property
    def damping(self):
        """Message field 'damping'."""
        return self._damping

    @damping.setter
    def damping(self, value):
        if __debug__:
            from std_msgs.msg import Float64MultiArray
            assert \
                isinstance(value, Float64MultiArray), \
                "The 'damping' field must be a sub message of type 'Float64MultiArray'"
        self._damping = value

    @builtins.property
    def stiffness(self):
        """Message field 'stiffness'."""
        return self._stiffness

    @stiffness.setter
    def stiffness(self, value):
        if __debug__:
            from std_msgs.msg import Float64MultiArray
            assert \
                isinstance(value, Float64MultiArray), \
                "The 'stiffness' field must be a sub message of type 'Float64MultiArray'"
        self._stiffness = value

    @builtins.property
    def rot_base_control(self):
        """Message field 'rot_base_control'."""
        return self._rot_base_control

    @rot_base_control.setter
    def rot_base_control(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'rot_base_control' field must be a sub message of type 'Quaternion'"
        self._rot_base_control = value

    @builtins.property
    def ref_trans_base_ft(self):
        """Message field 'ref_trans_base_ft'."""
        return self._ref_trans_base_ft

    @ref_trans_base_ft.setter
    def ref_trans_base_ft(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
            assert \
                isinstance(value, TransformStamped), \
                "The 'ref_trans_base_ft' field must be a sub message of type 'TransformStamped'"
        self._ref_trans_base_ft = value

    @builtins.property
    def selected_axes(self):
        """Message field 'selected_axes'."""
        return self._selected_axes

    @selected_axes.setter
    def selected_axes(self, value):
        if __debug__:
            from std_msgs.msg import Int8MultiArray
            assert \
                isinstance(value, Int8MultiArray), \
                "The 'selected_axes' field must be a sub message of type 'Int8MultiArray'"
        self._selected_axes = value

    @builtins.property
    def ft_sensor_frame(self):
        """Message field 'ft_sensor_frame'."""
        return self._ft_sensor_frame

    @ft_sensor_frame.setter
    def ft_sensor_frame(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'ft_sensor_frame' field must be a sub message of type 'String'"
        self._ft_sensor_frame = value

    @builtins.property
    def admittance_position(self):
        """Message field 'admittance_position'."""
        return self._admittance_position

    @admittance_position.setter
    def admittance_position(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
            assert \
                isinstance(value, TransformStamped), \
                "The 'admittance_position' field must be a sub message of type 'TransformStamped'"
        self._admittance_position = value

    @builtins.property
    def admittance_acceleration(self):
        """Message field 'admittance_acceleration'."""
        return self._admittance_acceleration

    @admittance_acceleration.setter
    def admittance_acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistStamped
            assert \
                isinstance(value, TwistStamped), \
                "The 'admittance_acceleration' field must be a sub message of type 'TwistStamped'"
        self._admittance_acceleration = value

    @builtins.property
    def admittance_velocity(self):
        """Message field 'admittance_velocity'."""
        return self._admittance_velocity

    @admittance_velocity.setter
    def admittance_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistStamped
            assert \
                isinstance(value, TwistStamped), \
                "The 'admittance_velocity' field must be a sub message of type 'TwistStamped'"
        self._admittance_velocity = value

    @builtins.property
    def wrench_base(self):
        """Message field 'wrench_base'."""
        return self._wrench_base

    @wrench_base.setter
    def wrench_base(self, value):
        if __debug__:
            from geometry_msgs.msg import WrenchStamped
            assert \
                isinstance(value, WrenchStamped), \
                "The 'wrench_base' field must be a sub message of type 'WrenchStamped'"
        self._wrench_base = value

    @builtins.property
    def joint_state(self):
        """Message field 'joint_state'."""
        return self._joint_state

    @joint_state.setter
    def joint_state(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'joint_state' field must be a sub message of type 'JointState'"
        self._joint_state = value
