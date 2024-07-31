# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_waypoint_types:srv/GetActorWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetActorWaypoint_Request(type):
    """Metaclass of message 'GetActorWaypoint_Request'."""

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
                'carla_waypoint_types.srv.GetActorWaypoint_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_actor_waypoint__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_actor_waypoint__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_actor_waypoint__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_actor_waypoint__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_actor_waypoint__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetActorWaypoint_Request(metaclass=Metaclass_GetActorWaypoint_Request):
    """Message class 'GetActorWaypoint_Request'."""

    __slots__ = [
        '_id',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetActorWaypoint_Response(type):
    """Metaclass of message 'GetActorWaypoint_Response'."""

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
                'carla_waypoint_types.srv.GetActorWaypoint_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_actor_waypoint__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_actor_waypoint__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_actor_waypoint__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_actor_waypoint__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_actor_waypoint__response

            from carla_waypoint_types.msg import CarlaWaypoint
            if CarlaWaypoint.__class__._TYPE_SUPPORT is None:
                CarlaWaypoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetActorWaypoint_Response(metaclass=Metaclass_GetActorWaypoint_Response):
    """Message class 'GetActorWaypoint_Response'."""

    __slots__ = [
        '_waypoint',
    ]

    _fields_and_field_types = {
        'waypoint': 'carla_waypoint_types/CarlaWaypoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carla_waypoint_types', 'msg'], 'CarlaWaypoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carla_waypoint_types.msg import CarlaWaypoint
        self.waypoint = kwargs.get('waypoint', CarlaWaypoint())

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
        if self.waypoint != other.waypoint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def waypoint(self):
        """Message field 'waypoint'."""
        return self._waypoint

    @waypoint.setter
    def waypoint(self, value):
        if __debug__:
            from carla_waypoint_types.msg import CarlaWaypoint
            assert \
                isinstance(value, CarlaWaypoint), \
                "The 'waypoint' field must be a sub message of type 'CarlaWaypoint'"
        self._waypoint = value


class Metaclass_GetActorWaypoint(type):
    """Metaclass of service 'GetActorWaypoint'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carla_waypoint_types')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carla_waypoint_types.srv.GetActorWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_actor_waypoint

            from carla_waypoint_types.srv import _get_actor_waypoint
            if _get_actor_waypoint.Metaclass_GetActorWaypoint_Request._TYPE_SUPPORT is None:
                _get_actor_waypoint.Metaclass_GetActorWaypoint_Request.__import_type_support__()
            if _get_actor_waypoint.Metaclass_GetActorWaypoint_Response._TYPE_SUPPORT is None:
                _get_actor_waypoint.Metaclass_GetActorWaypoint_Response.__import_type_support__()


class GetActorWaypoint(metaclass=Metaclass_GetActorWaypoint):
    from carla_waypoint_types.srv._get_actor_waypoint import GetActorWaypoint_Request as Request
    from carla_waypoint_types.srv._get_actor_waypoint import GetActorWaypoint_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
