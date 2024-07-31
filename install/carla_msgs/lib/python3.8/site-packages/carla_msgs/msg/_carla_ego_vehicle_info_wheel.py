# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_msgs:msg/CarlaEgoVehicleInfoWheel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarlaEgoVehicleInfoWheel(type):
    """Metaclass of message 'CarlaEgoVehicleInfoWheel'."""

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
            module = import_type_support('carla_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carla_msgs.msg.CarlaEgoVehicleInfoWheel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__carla_ego_vehicle_info_wheel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__carla_ego_vehicle_info_wheel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__carla_ego_vehicle_info_wheel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__carla_ego_vehicle_info_wheel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__carla_ego_vehicle_info_wheel

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarlaEgoVehicleInfoWheel(metaclass=Metaclass_CarlaEgoVehicleInfoWheel):
    """Message class 'CarlaEgoVehicleInfoWheel'."""

    __slots__ = [
        '_tire_friction',
        '_damping_rate',
        '_max_steer_angle',
        '_radius',
        '_max_brake_torque',
        '_max_handbrake_torque',
        '_position',
    ]

    _fields_and_field_types = {
        'tire_friction': 'float',
        'damping_rate': 'float',
        'max_steer_angle': 'float',
        'radius': 'float',
        'max_brake_torque': 'float',
        'max_handbrake_torque': 'float',
        'position': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tire_friction = kwargs.get('tire_friction', float())
        self.damping_rate = kwargs.get('damping_rate', float())
        self.max_steer_angle = kwargs.get('max_steer_angle', float())
        self.radius = kwargs.get('radius', float())
        self.max_brake_torque = kwargs.get('max_brake_torque', float())
        self.max_handbrake_torque = kwargs.get('max_handbrake_torque', float())
        from geometry_msgs.msg import Vector3
        self.position = kwargs.get('position', Vector3())

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
        if self.tire_friction != other.tire_friction:
            return False
        if self.damping_rate != other.damping_rate:
            return False
        if self.max_steer_angle != other.max_steer_angle:
            return False
        if self.radius != other.radius:
            return False
        if self.max_brake_torque != other.max_brake_torque:
            return False
        if self.max_handbrake_torque != other.max_handbrake_torque:
            return False
        if self.position != other.position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def tire_friction(self):
        """Message field 'tire_friction'."""
        return self._tire_friction

    @tire_friction.setter
    def tire_friction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tire_friction' field must be of type 'float'"
        self._tire_friction = value

    @property
    def damping_rate(self):
        """Message field 'damping_rate'."""
        return self._damping_rate

    @damping_rate.setter
    def damping_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'damping_rate' field must be of type 'float'"
        self._damping_rate = value

    @property
    def max_steer_angle(self):
        """Message field 'max_steer_angle'."""
        return self._max_steer_angle

    @max_steer_angle.setter
    def max_steer_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_steer_angle' field must be of type 'float'"
        self._max_steer_angle = value

    @property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius' field must be of type 'float'"
        self._radius = value

    @property
    def max_brake_torque(self):
        """Message field 'max_brake_torque'."""
        return self._max_brake_torque

    @max_brake_torque.setter
    def max_brake_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_brake_torque' field must be of type 'float'"
        self._max_brake_torque = value

    @property
    def max_handbrake_torque(self):
        """Message field 'max_handbrake_torque'."""
        return self._max_handbrake_torque

    @max_handbrake_torque.setter
    def max_handbrake_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_handbrake_torque' field must be of type 'float'"
        self._max_handbrake_torque = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'position' field must be a sub message of type 'Vector3'"
        self._position = value
