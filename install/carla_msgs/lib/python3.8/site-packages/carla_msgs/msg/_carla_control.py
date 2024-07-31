# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_msgs:msg/CarlaControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarlaControl(type):
    """Metaclass of message 'CarlaControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PLAY': 0,
        'PAUSE': 1,
        'STEP_ONCE': 2,
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
                'carla_msgs.msg.CarlaControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__carla_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__carla_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__carla_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__carla_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__carla_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PLAY': cls.__constants['PLAY'],
            'PAUSE': cls.__constants['PAUSE'],
            'STEP_ONCE': cls.__constants['STEP_ONCE'],
        }

    @property
    def PLAY(self):
        """Message constant 'PLAY'."""
        return Metaclass_CarlaControl.__constants['PLAY']

    @property
    def PAUSE(self):
        """Message constant 'PAUSE'."""
        return Metaclass_CarlaControl.__constants['PAUSE']

    @property
    def STEP_ONCE(self):
        """Message constant 'STEP_ONCE'."""
        return Metaclass_CarlaControl.__constants['STEP_ONCE']


class CarlaControl(metaclass=Metaclass_CarlaControl):
    """
    Message class 'CarlaControl'.

    Constants:
      PLAY
      PAUSE
      STEP_ONCE
    """

    __slots__ = [
        '_command',
    ]

    _fields_and_field_types = {
        'command': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())

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
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'command' field must be an integer in [-128, 127]"
        self._command = value
