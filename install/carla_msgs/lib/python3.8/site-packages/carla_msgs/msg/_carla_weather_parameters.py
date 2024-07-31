# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_msgs:msg/CarlaWeatherParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarlaWeatherParameters(type):
    """Metaclass of message 'CarlaWeatherParameters'."""

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
                'carla_msgs.msg.CarlaWeatherParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__carla_weather_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__carla_weather_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__carla_weather_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__carla_weather_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__carla_weather_parameters

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarlaWeatherParameters(metaclass=Metaclass_CarlaWeatherParameters):
    """Message class 'CarlaWeatherParameters'."""

    __slots__ = [
        '_cloudiness',
        '_precipitation',
        '_precipitation_deposits',
        '_wind_intensity',
        '_fog_density',
        '_fog_distance',
        '_wetness',
        '_sun_azimuth_angle',
        '_sun_altitude_angle',
    ]

    _fields_and_field_types = {
        'cloudiness': 'float',
        'precipitation': 'float',
        'precipitation_deposits': 'float',
        'wind_intensity': 'float',
        'fog_density': 'float',
        'fog_distance': 'float',
        'wetness': 'float',
        'sun_azimuth_angle': 'float',
        'sun_altitude_angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.cloudiness = kwargs.get('cloudiness', float())
        self.precipitation = kwargs.get('precipitation', float())
        self.precipitation_deposits = kwargs.get('precipitation_deposits', float())
        self.wind_intensity = kwargs.get('wind_intensity', float())
        self.fog_density = kwargs.get('fog_density', float())
        self.fog_distance = kwargs.get('fog_distance', float())
        self.wetness = kwargs.get('wetness', float())
        self.sun_azimuth_angle = kwargs.get('sun_azimuth_angle', float())
        self.sun_altitude_angle = kwargs.get('sun_altitude_angle', float())

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
        if self.cloudiness != other.cloudiness:
            return False
        if self.precipitation != other.precipitation:
            return False
        if self.precipitation_deposits != other.precipitation_deposits:
            return False
        if self.wind_intensity != other.wind_intensity:
            return False
        if self.fog_density != other.fog_density:
            return False
        if self.fog_distance != other.fog_distance:
            return False
        if self.wetness != other.wetness:
            return False
        if self.sun_azimuth_angle != other.sun_azimuth_angle:
            return False
        if self.sun_altitude_angle != other.sun_altitude_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cloudiness(self):
        """Message field 'cloudiness'."""
        return self._cloudiness

    @cloudiness.setter
    def cloudiness(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cloudiness' field must be of type 'float'"
        self._cloudiness = value

    @property
    def precipitation(self):
        """Message field 'precipitation'."""
        return self._precipitation

    @precipitation.setter
    def precipitation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'precipitation' field must be of type 'float'"
        self._precipitation = value

    @property
    def precipitation_deposits(self):
        """Message field 'precipitation_deposits'."""
        return self._precipitation_deposits

    @precipitation_deposits.setter
    def precipitation_deposits(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'precipitation_deposits' field must be of type 'float'"
        self._precipitation_deposits = value

    @property
    def wind_intensity(self):
        """Message field 'wind_intensity'."""
        return self._wind_intensity

    @wind_intensity.setter
    def wind_intensity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wind_intensity' field must be of type 'float'"
        self._wind_intensity = value

    @property
    def fog_density(self):
        """Message field 'fog_density'."""
        return self._fog_density

    @fog_density.setter
    def fog_density(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fog_density' field must be of type 'float'"
        self._fog_density = value

    @property
    def fog_distance(self):
        """Message field 'fog_distance'."""
        return self._fog_distance

    @fog_distance.setter
    def fog_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fog_distance' field must be of type 'float'"
        self._fog_distance = value

    @property
    def wetness(self):
        """Message field 'wetness'."""
        return self._wetness

    @wetness.setter
    def wetness(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wetness' field must be of type 'float'"
        self._wetness = value

    @property
    def sun_azimuth_angle(self):
        """Message field 'sun_azimuth_angle'."""
        return self._sun_azimuth_angle

    @sun_azimuth_angle.setter
    def sun_azimuth_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sun_azimuth_angle' field must be of type 'float'"
        self._sun_azimuth_angle = value

    @property
    def sun_altitude_angle(self):
        """Message field 'sun_altitude_angle'."""
        return self._sun_altitude_angle

    @sun_altitude_angle.setter
    def sun_altitude_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sun_altitude_angle' field must be of type 'float'"
        self._sun_altitude_angle = value
