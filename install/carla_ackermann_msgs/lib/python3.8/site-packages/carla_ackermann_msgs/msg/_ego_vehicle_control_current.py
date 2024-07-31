# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_ackermann_msgs:msg/EgoVehicleControlCurrent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EgoVehicleControlCurrent(type):
    """Metaclass of message 'EgoVehicleControlCurrent'."""

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
            module = import_type_support('carla_ackermann_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carla_ackermann_msgs.msg.EgoVehicleControlCurrent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ego_vehicle_control_current
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ego_vehicle_control_current
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ego_vehicle_control_current
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ego_vehicle_control_current
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ego_vehicle_control_current

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EgoVehicleControlCurrent(metaclass=Metaclass_EgoVehicleControlCurrent):
    """Message class 'EgoVehicleControlCurrent'."""

    __slots__ = [
        '_time_sec',
        '_speed',
        '_speed_abs',
        '_accel',
    ]

    _fields_and_field_types = {
        'time_sec': 'float',
        'speed': 'float',
        'speed_abs': 'float',
        'accel': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_sec = kwargs.get('time_sec', float())
        self.speed = kwargs.get('speed', float())
        self.speed_abs = kwargs.get('speed_abs', float())
        self.accel = kwargs.get('accel', float())

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
        if self.time_sec != other.time_sec:
            return False
        if self.speed != other.speed:
            return False
        if self.speed_abs != other.speed_abs:
            return False
        if self.accel != other.accel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def time_sec(self):
        """Message field 'time_sec'."""
        return self._time_sec

    @time_sec.setter
    def time_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_sec' field must be of type 'float'"
        self._time_sec = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

    @property
    def speed_abs(self):
        """Message field 'speed_abs'."""
        return self._speed_abs

    @speed_abs.setter
    def speed_abs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_abs' field must be of type 'float'"
        self._speed_abs = value

    @property
    def accel(self):
        """Message field 'accel'."""
        return self._accel

    @accel.setter
    def accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel' field must be of type 'float'"
        self._accel = value
