# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_ackermann_msgs:msg/EgoVehicleControlStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EgoVehicleControlStatus(type):
    """Metaclass of message 'EgoVehicleControlStatus'."""

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
                'carla_ackermann_msgs.msg.EgoVehicleControlStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ego_vehicle_control_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ego_vehicle_control_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ego_vehicle_control_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ego_vehicle_control_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ego_vehicle_control_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EgoVehicleControlStatus(metaclass=Metaclass_EgoVehicleControlStatus):
    """Message class 'EgoVehicleControlStatus'."""

    __slots__ = [
        '_status',
        '_speed_control_activation_count',
        '_speed_control_accel_delta',
        '_speed_control_accel_target',
        '_accel_control_pedal_delta',
        '_accel_control_pedal_target',
        '_brake_upper_border',
        '_throttle_lower_border',
    ]

    _fields_and_field_types = {
        'status': 'string',
        'speed_control_activation_count': 'uint8',
        'speed_control_accel_delta': 'float',
        'speed_control_accel_target': 'float',
        'accel_control_pedal_delta': 'float',
        'accel_control_pedal_target': 'float',
        'brake_upper_border': 'float',
        'throttle_lower_border': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.status = kwargs.get('status', str())
        self.speed_control_activation_count = kwargs.get('speed_control_activation_count', int())
        self.speed_control_accel_delta = kwargs.get('speed_control_accel_delta', float())
        self.speed_control_accel_target = kwargs.get('speed_control_accel_target', float())
        self.accel_control_pedal_delta = kwargs.get('accel_control_pedal_delta', float())
        self.accel_control_pedal_target = kwargs.get('accel_control_pedal_target', float())
        self.brake_upper_border = kwargs.get('brake_upper_border', float())
        self.throttle_lower_border = kwargs.get('throttle_lower_border', float())

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
        if self.speed_control_activation_count != other.speed_control_activation_count:
            return False
        if self.speed_control_accel_delta != other.speed_control_accel_delta:
            return False
        if self.speed_control_accel_target != other.speed_control_accel_target:
            return False
        if self.accel_control_pedal_delta != other.accel_control_pedal_delta:
            return False
        if self.accel_control_pedal_target != other.accel_control_pedal_target:
            return False
        if self.brake_upper_border != other.brake_upper_border:
            return False
        if self.throttle_lower_border != other.throttle_lower_border:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @property
    def speed_control_activation_count(self):
        """Message field 'speed_control_activation_count'."""
        return self._speed_control_activation_count

    @speed_control_activation_count.setter
    def speed_control_activation_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_control_activation_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed_control_activation_count' field must be an unsigned integer in [0, 255]"
        self._speed_control_activation_count = value

    @property
    def speed_control_accel_delta(self):
        """Message field 'speed_control_accel_delta'."""
        return self._speed_control_accel_delta

    @speed_control_accel_delta.setter
    def speed_control_accel_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_control_accel_delta' field must be of type 'float'"
        self._speed_control_accel_delta = value

    @property
    def speed_control_accel_target(self):
        """Message field 'speed_control_accel_target'."""
        return self._speed_control_accel_target

    @speed_control_accel_target.setter
    def speed_control_accel_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_control_accel_target' field must be of type 'float'"
        self._speed_control_accel_target = value

    @property
    def accel_control_pedal_delta(self):
        """Message field 'accel_control_pedal_delta'."""
        return self._accel_control_pedal_delta

    @accel_control_pedal_delta.setter
    def accel_control_pedal_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_control_pedal_delta' field must be of type 'float'"
        self._accel_control_pedal_delta = value

    @property
    def accel_control_pedal_target(self):
        """Message field 'accel_control_pedal_target'."""
        return self._accel_control_pedal_target

    @accel_control_pedal_target.setter
    def accel_control_pedal_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_control_pedal_target' field must be of type 'float'"
        self._accel_control_pedal_target = value

    @property
    def brake_upper_border(self):
        """Message field 'brake_upper_border'."""
        return self._brake_upper_border

    @brake_upper_border.setter
    def brake_upper_border(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_upper_border' field must be of type 'float'"
        self._brake_upper_border = value

    @property
    def throttle_lower_border(self):
        """Message field 'throttle_lower_border'."""
        return self._throttle_lower_border

    @throttle_lower_border.setter
    def throttle_lower_border(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_lower_border' field must be of type 'float'"
        self._throttle_lower_border = value
