# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_msgs:srv/SpawnObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpawnObject_Request(type):
    """Metaclass of message 'SpawnObject_Request'."""

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
                'carla_msgs.srv.SpawnObject_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spawn_object__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spawn_object__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spawn_object__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spawn_object__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spawn_object__request

            from diagnostic_msgs.msg import KeyValue
            if KeyValue.__class__._TYPE_SUPPORT is None:
                KeyValue.__class__.__import_type_support__()

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


class SpawnObject_Request(metaclass=Metaclass_SpawnObject_Request):
    """Message class 'SpawnObject_Request'."""

    __slots__ = [
        '_type',
        '_id',
        '_attributes',
        '_transform',
        '_attach_to',
        '_random_pose',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'id': 'string',
        'attributes': 'sequence<diagnostic_msgs/KeyValue>',
        'transform': 'geometry_msgs/Pose',
        'attach_to': 'uint32',
        'random_pose': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'KeyValue')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.id = kwargs.get('id', str())
        self.attributes = kwargs.get('attributes', [])
        from geometry_msgs.msg import Pose
        self.transform = kwargs.get('transform', Pose())
        self.attach_to = kwargs.get('attach_to', int())
        self.random_pose = kwargs.get('random_pose', bool())

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
        if self.type != other.type:
            return False
        if self.id != other.id:
            return False
        if self.attributes != other.attributes:
            return False
        if self.transform != other.transform:
            return False
        if self.attach_to != other.attach_to:
            return False
        if self.random_pose != other.random_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @property
    def attributes(self):
        """Message field 'attributes'."""
        return self._attributes

    @attributes.setter
    def attributes(self, value):
        if __debug__:
            from diagnostic_msgs.msg import KeyValue
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
                 all(isinstance(v, KeyValue) for v in value) and
                 True), \
                "The 'attributes' field must be a set or sequence and each value of type 'KeyValue'"
        self._attributes = value

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
    def attach_to(self):
        """Message field 'attach_to'."""
        return self._attach_to

    @attach_to.setter
    def attach_to(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attach_to' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'attach_to' field must be an unsigned integer in [0, 4294967295]"
        self._attach_to = value

    @property
    def random_pose(self):
        """Message field 'random_pose'."""
        return self._random_pose

    @random_pose.setter
    def random_pose(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'random_pose' field must be of type 'bool'"
        self._random_pose = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SpawnObject_Response(type):
    """Metaclass of message 'SpawnObject_Response'."""

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
                'carla_msgs.srv.SpawnObject_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spawn_object__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spawn_object__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spawn_object__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spawn_object__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spawn_object__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpawnObject_Response(metaclass=Metaclass_SpawnObject_Response):
    """Message class 'SpawnObject_Response'."""

    __slots__ = [
        '_id',
        '_error_string',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'error_string': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.error_string = kwargs.get('error_string', str())

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
        if self.error_string != other.error_string:
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @property
    def error_string(self):
        """Message field 'error_string'."""
        return self._error_string

    @error_string.setter
    def error_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_string' field must be of type 'str'"
        self._error_string = value


class Metaclass_SpawnObject(type):
    """Metaclass of service 'SpawnObject'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carla_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carla_msgs.srv.SpawnObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__spawn_object

            from carla_msgs.srv import _spawn_object
            if _spawn_object.Metaclass_SpawnObject_Request._TYPE_SUPPORT is None:
                _spawn_object.Metaclass_SpawnObject_Request.__import_type_support__()
            if _spawn_object.Metaclass_SpawnObject_Response._TYPE_SUPPORT is None:
                _spawn_object.Metaclass_SpawnObject_Response.__import_type_support__()


class SpawnObject(metaclass=Metaclass_SpawnObject):
    from carla_msgs.srv._spawn_object import SpawnObject_Request as Request
    from carla_msgs.srv._spawn_object import SpawnObject_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
