# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_msgs:msg/CarlaStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarlaStatus(type):
    """Metaclass of message 'CarlaStatus'."""

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
                'carla_msgs.msg.CarlaStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__carla_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__carla_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__carla_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__carla_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__carla_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarlaStatus(metaclass=Metaclass_CarlaStatus):
    """Message class 'CarlaStatus'."""

    __slots__ = [
        '_frame',
        '_fixed_delta_seconds',
        '_synchronous_mode',
        '_synchronous_mode_running',
    ]

    _fields_and_field_types = {
        'frame': 'uint64',
        'fixed_delta_seconds': 'float',
        'synchronous_mode': 'boolean',
        'synchronous_mode_running': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.frame = kwargs.get('frame', int())
        self.fixed_delta_seconds = kwargs.get('fixed_delta_seconds', float())
        self.synchronous_mode = kwargs.get('synchronous_mode', bool())
        self.synchronous_mode_running = kwargs.get('synchronous_mode_running', bool())

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
        if self.frame != other.frame:
            return False
        if self.fixed_delta_seconds != other.fixed_delta_seconds:
            return False
        if self.synchronous_mode != other.synchronous_mode:
            return False
        if self.synchronous_mode_running != other.synchronous_mode_running:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'frame' field must be an unsigned integer in [0, 18446744073709551615]"
        self._frame = value

    @property
    def fixed_delta_seconds(self):
        """Message field 'fixed_delta_seconds'."""
        return self._fixed_delta_seconds

    @fixed_delta_seconds.setter
    def fixed_delta_seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fixed_delta_seconds' field must be of type 'float'"
        self._fixed_delta_seconds = value

    @property
    def synchronous_mode(self):
        """Message field 'synchronous_mode'."""
        return self._synchronous_mode

    @synchronous_mode.setter
    def synchronous_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'synchronous_mode' field must be of type 'bool'"
        self._synchronous_mode = value

    @property
    def synchronous_mode_running(self):
        """Message field 'synchronous_mode_running'."""
        return self._synchronous_mode_running

    @synchronous_mode_running.setter
    def synchronous_mode_running(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'synchronous_mode_running' field must be of type 'bool'"
        self._synchronous_mode_running = value
