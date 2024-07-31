# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_msgs:msg/CarlaTrafficLightInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarlaTrafficLightInfo(type):
    """Metaclass of message 'CarlaTrafficLightInfo'."""

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
                'carla_msgs.msg.CarlaTrafficLightInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__carla_traffic_light_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__carla_traffic_light_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__carla_traffic_light_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__carla_traffic_light_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__carla_traffic_light_info

            from carla_msgs.msg import CarlaBoundingBox
            if CarlaBoundingBox.__class__._TYPE_SUPPORT is None:
                CarlaBoundingBox.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarlaTrafficLightInfo(metaclass=Metaclass_CarlaTrafficLightInfo):
    """Message class 'CarlaTrafficLightInfo'."""

    __slots__ = [
        '_id',
        '_transform',
        '_trigger_volume',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'transform': 'geometry_msgs/Pose',
        'trigger_volume': 'carla_msgs/CarlaBoundingBox',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carla_msgs', 'msg'], 'CarlaBoundingBox'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from geometry_msgs.msg import Pose
        self.transform = kwargs.get('transform', Pose())
        from carla_msgs.msg import CarlaBoundingBox
        self.trigger_volume = kwargs.get('trigger_volume', CarlaBoundingBox())

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
        if self.transform != other.transform:
            return False
        if self.trigger_volume != other.trigger_volume:
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

    @property
    def transform(self):
        """Message field 'transform'."""
        return self._transform

    @transform.setter
    def transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'transform' field must be a sub message of type 'Pose'"
        self._transform = value

    @property
    def trigger_volume(self):
        """Message field 'trigger_volume'."""
        return self._trigger_volume

    @trigger_volume.setter
    def trigger_volume(self, value):
        if __debug__:
            from carla_msgs.msg import CarlaBoundingBox
            assert \
                isinstance(value, CarlaBoundingBox), \
                "The 'trigger_volume' field must be a sub message of type 'CarlaBoundingBox'"
        self._trigger_volume = value
