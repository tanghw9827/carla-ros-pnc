# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_msgs:msg/CarlaEgoVehicleInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarlaEgoVehicleInfo(type):
    """Metaclass of message 'CarlaEgoVehicleInfo'."""

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
                'carla_msgs.msg.CarlaEgoVehicleInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__carla_ego_vehicle_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__carla_ego_vehicle_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__carla_ego_vehicle_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__carla_ego_vehicle_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__carla_ego_vehicle_info

            from carla_msgs.msg import CarlaEgoVehicleInfoWheel
            if CarlaEgoVehicleInfoWheel.__class__._TYPE_SUPPORT is None:
                CarlaEgoVehicleInfoWheel.__class__.__import_type_support__()

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


class CarlaEgoVehicleInfo(metaclass=Metaclass_CarlaEgoVehicleInfo):
    """Message class 'CarlaEgoVehicleInfo'."""

    __slots__ = [
        '_id',
        '_type',
        '_rolename',
        '_wheels',
        '_max_rpm',
        '_moi',
        '_damping_rate_full_throttle',
        '_damping_rate_zero_throttle_clutch_engaged',
        '_damping_rate_zero_throttle_clutch_disengaged',
        '_use_gear_autobox',
        '_gear_switch_time',
        '_clutch_strength',
        '_mass',
        '_drag_coefficient',
        '_center_of_mass',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'type': 'string',
        'rolename': 'string',
        'wheels': 'sequence<carla_msgs/CarlaEgoVehicleInfoWheel>',
        'max_rpm': 'float',
        'moi': 'float',
        'damping_rate_full_throttle': 'float',
        'damping_rate_zero_throttle_clutch_engaged': 'float',
        'damping_rate_zero_throttle_clutch_disengaged': 'float',
        'use_gear_autobox': 'boolean',
        'gear_switch_time': 'float',
        'clutch_strength': 'float',
        'mass': 'float',
        'drag_coefficient': 'float',
        'center_of_mass': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carla_msgs', 'msg'], 'CarlaEgoVehicleInfoWheel')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', str())
        self.rolename = kwargs.get('rolename', str())
        self.wheels = kwargs.get('wheels', [])
        self.max_rpm = kwargs.get('max_rpm', float())
        self.moi = kwargs.get('moi', float())
        self.damping_rate_full_throttle = kwargs.get('damping_rate_full_throttle', float())
        self.damping_rate_zero_throttle_clutch_engaged = kwargs.get('damping_rate_zero_throttle_clutch_engaged', float())
        self.damping_rate_zero_throttle_clutch_disengaged = kwargs.get('damping_rate_zero_throttle_clutch_disengaged', float())
        self.use_gear_autobox = kwargs.get('use_gear_autobox', bool())
        self.gear_switch_time = kwargs.get('gear_switch_time', float())
        self.clutch_strength = kwargs.get('clutch_strength', float())
        self.mass = kwargs.get('mass', float())
        self.drag_coefficient = kwargs.get('drag_coefficient', float())
        from geometry_msgs.msg import Vector3
        self.center_of_mass = kwargs.get('center_of_mass', Vector3())

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
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.rolename != other.rolename:
            return False
        if self.wheels != other.wheels:
            return False
        if self.max_rpm != other.max_rpm:
            return False
        if self.moi != other.moi:
            return False
        if self.damping_rate_full_throttle != other.damping_rate_full_throttle:
            return False
        if self.damping_rate_zero_throttle_clutch_engaged != other.damping_rate_zero_throttle_clutch_engaged:
            return False
        if self.damping_rate_zero_throttle_clutch_disengaged != other.damping_rate_zero_throttle_clutch_disengaged:
            return False
        if self.use_gear_autobox != other.use_gear_autobox:
            return False
        if self.gear_switch_time != other.gear_switch_time:
            return False
        if self.clutch_strength != other.clutch_strength:
            return False
        if self.mass != other.mass:
            return False
        if self.drag_coefficient != other.drag_coefficient:
            return False
        if self.center_of_mass != other.center_of_mass:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @property  # noqa: A003
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

    @property
    def rolename(self):
        """Message field 'rolename'."""
        return self._rolename

    @rolename.setter
    def rolename(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rolename' field must be of type 'str'"
        self._rolename = value

    @property
    def wheels(self):
        """Message field 'wheels'."""
        return self._wheels

    @wheels.setter
    def wheels(self, value):
        if __debug__:
            from carla_msgs.msg import CarlaEgoVehicleInfoWheel
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
                 all(isinstance(v, CarlaEgoVehicleInfoWheel) for v in value) and
                 True), \
                "The 'wheels' field must be a set or sequence and each value of type 'CarlaEgoVehicleInfoWheel'"
        self._wheels = value

    @property
    def max_rpm(self):
        """Message field 'max_rpm'."""
        return self._max_rpm

    @max_rpm.setter
    def max_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_rpm' field must be of type 'float'"
        self._max_rpm = value

    @property
    def moi(self):
        """Message field 'moi'."""
        return self._moi

    @moi.setter
    def moi(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'moi' field must be of type 'float'"
        self._moi = value

    @property
    def damping_rate_full_throttle(self):
        """Message field 'damping_rate_full_throttle'."""
        return self._damping_rate_full_throttle

    @damping_rate_full_throttle.setter
    def damping_rate_full_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'damping_rate_full_throttle' field must be of type 'float'"
        self._damping_rate_full_throttle = value

    @property
    def damping_rate_zero_throttle_clutch_engaged(self):
        """Message field 'damping_rate_zero_throttle_clutch_engaged'."""
        return self._damping_rate_zero_throttle_clutch_engaged

    @damping_rate_zero_throttle_clutch_engaged.setter
    def damping_rate_zero_throttle_clutch_engaged(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'damping_rate_zero_throttle_clutch_engaged' field must be of type 'float'"
        self._damping_rate_zero_throttle_clutch_engaged = value

    @property
    def damping_rate_zero_throttle_clutch_disengaged(self):
        """Message field 'damping_rate_zero_throttle_clutch_disengaged'."""
        return self._damping_rate_zero_throttle_clutch_disengaged

    @damping_rate_zero_throttle_clutch_disengaged.setter
    def damping_rate_zero_throttle_clutch_disengaged(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'damping_rate_zero_throttle_clutch_disengaged' field must be of type 'float'"
        self._damping_rate_zero_throttle_clutch_disengaged = value

    @property
    def use_gear_autobox(self):
        """Message field 'use_gear_autobox'."""
        return self._use_gear_autobox

    @use_gear_autobox.setter
    def use_gear_autobox(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_gear_autobox' field must be of type 'bool'"
        self._use_gear_autobox = value

    @property
    def gear_switch_time(self):
        """Message field 'gear_switch_time'."""
        return self._gear_switch_time

    @gear_switch_time.setter
    def gear_switch_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gear_switch_time' field must be of type 'float'"
        self._gear_switch_time = value

    @property
    def clutch_strength(self):
        """Message field 'clutch_strength'."""
        return self._clutch_strength

    @clutch_strength.setter
    def clutch_strength(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'clutch_strength' field must be of type 'float'"
        self._clutch_strength = value

    @property
    def mass(self):
        """Message field 'mass'."""
        return self._mass

    @mass.setter
    def mass(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mass' field must be of type 'float'"
        self._mass = value

    @property
    def drag_coefficient(self):
        """Message field 'drag_coefficient'."""
        return self._drag_coefficient

    @drag_coefficient.setter
    def drag_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drag_coefficient' field must be of type 'float'"
        self._drag_coefficient = value

    @property
    def center_of_mass(self):
        """Message field 'center_of_mass'."""
        return self._center_of_mass

    @center_of_mass.setter
    def center_of_mass(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'center_of_mass' field must be a sub message of type 'Vector3'"
        self._center_of_mass = value
