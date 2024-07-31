# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EgoVehicleControlMaxima(type):
    """Metaclass of message 'EgoVehicleControlMaxima'."""

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
                'carla_ackermann_msgs.msg.EgoVehicleControlMaxima')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ego_vehicle_control_maxima
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ego_vehicle_control_maxima
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ego_vehicle_control_maxima
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ego_vehicle_control_maxima
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ego_vehicle_control_maxima

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EgoVehicleControlMaxima(metaclass=Metaclass_EgoVehicleControlMaxima):
    """Message class 'EgoVehicleControlMaxima'."""

    __slots__ = [
        '_max_steering_angle',
        '_max_speed',
        '_max_accel',
        '_max_decel',
        '_min_accel',
        '_max_pedal',
    ]

    _fields_and_field_types = {
        'max_steering_angle': 'float',
        'max_speed': 'float',
        'max_accel': 'float',
        'max_decel': 'float',
        'min_accel': 'float',
        'max_pedal': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.max_steering_angle = kwargs.get('max_steering_angle', float())
        self.max_speed = kwargs.get('max_speed', float())
        self.max_accel = kwargs.get('max_accel', float())
        self.max_decel = kwargs.get('max_decel', float())
        self.min_accel = kwargs.get('min_accel', float())
        self.max_pedal = kwargs.get('max_pedal', float())

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
        if self.max_steering_angle != other.max_steering_angle:
            return False
        if self.max_speed != other.max_speed:
            return False
        if self.max_accel != other.max_accel:
            return False
        if self.max_decel != other.max_decel:
            return False
        if self.min_accel != other.min_accel:
            return False
        if self.max_pedal != other.max_pedal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def max_steering_angle(self):
        """Message field 'max_steering_angle'."""
        return self._max_steering_angle

    @max_steering_angle.setter
    def max_steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_steering_angle' field must be of type 'float'"
        self._max_steering_angle = value

    @property
    def max_speed(self):
        """Message field 'max_speed'."""
        return self._max_speed

    @max_speed.setter
    def max_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_speed' field must be of type 'float'"
        self._max_speed = value

    @property
    def max_accel(self):
        """Message field 'max_accel'."""
        return self._max_accel

    @max_accel.setter
    def max_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_accel' field must be of type 'float'"
        self._max_accel = value

    @property
    def max_decel(self):
        """Message field 'max_decel'."""
        return self._max_decel

    @max_decel.setter
    def max_decel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_decel' field must be of type 'float'"
        self._max_decel = value

    @property
    def min_accel(self):
        """Message field 'min_accel'."""
        return self._min_accel

    @min_accel.setter
    def min_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_accel' field must be of type 'float'"
        self._min_accel = value

    @property
    def max_pedal(self):
        """Message field 'max_pedal'."""
        return self._max_pedal

    @max_pedal.setter
    def max_pedal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_pedal' field must be of type 'float'"
        self._max_pedal = value
