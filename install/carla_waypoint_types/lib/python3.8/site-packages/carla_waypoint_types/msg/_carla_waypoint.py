# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_waypoint_types:msg/CarlaWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarlaWaypoint(type):
    """Metaclass of message 'CarlaWaypoint'."""

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
            module = import_type_support('carla_waypoint_types')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carla_waypoint_types.msg.CarlaWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__carla_waypoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__carla_waypoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__carla_waypoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__carla_waypoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__carla_waypoint

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


class CarlaWaypoint(metaclass=Metaclass_CarlaWaypoint):
    """Message class 'CarlaWaypoint'."""

    __slots__ = [
        '_road_id',
        '_section_id',
        '_lane_id',
        '_lane_width',
        '_is_junction',
        '_pose',
    ]

    _fields_and_field_types = {
        'road_id': 'int32',
        'section_id': 'int32',
        'lane_id': 'int32',
        'lane_width': 'double',
        'is_junction': 'boolean',
        'pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.road_id = kwargs.get('road_id', int())
        self.section_id = kwargs.get('section_id', int())
        self.lane_id = kwargs.get('lane_id', int())
        self.lane_width = kwargs.get('lane_width', float())
        self.is_junction = kwargs.get('is_junction', bool())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())

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
        if self.road_id != other.road_id:
            return False
        if self.section_id != other.section_id:
            return False
        if self.lane_id != other.lane_id:
            return False
        if self.lane_width != other.lane_width:
            return False
        if self.is_junction != other.is_junction:
            return False
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def road_id(self):
        """Message field 'road_id'."""
        return self._road_id

    @road_id.setter
    def road_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'road_id' field must be an integer in [-2147483648, 2147483647]"
        self._road_id = value

    @property
    def section_id(self):
        """Message field 'section_id'."""
        return self._section_id

    @section_id.setter
    def section_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'section_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'section_id' field must be an integer in [-2147483648, 2147483647]"
        self._section_id = value

    @property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_id' field must be an integer in [-2147483648, 2147483647]"
        self._lane_id = value

    @property
    def lane_width(self):
        """Message field 'lane_width'."""
        return self._lane_width

    @lane_width.setter
    def lane_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_width' field must be of type 'float'"
        self._lane_width = value

    @property
    def is_junction(self):
        """Message field 'is_junction'."""
        return self._is_junction

    @is_junction.setter
    def is_junction(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_junction' field must be of type 'bool'"
        self._is_junction = value

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value
