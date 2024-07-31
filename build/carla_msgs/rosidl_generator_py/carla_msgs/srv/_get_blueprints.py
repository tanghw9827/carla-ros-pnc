# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carla_msgs:srv/GetBlueprints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetBlueprints_Request(type):
    """Metaclass of message 'GetBlueprints_Request'."""

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
                'carla_msgs.srv.GetBlueprints_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_blueprints__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_blueprints__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_blueprints__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_blueprints__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_blueprints__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBlueprints_Request(metaclass=Metaclass_GetBlueprints_Request):
    """Message class 'GetBlueprints_Request'."""

    __slots__ = [
        '_filter',
    ]

    _fields_and_field_types = {
        'filter': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.filter = kwargs.get('filter', str())

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
        if self.filter != other.filter:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def filter(self):  # noqa: A003
        """Message field 'filter'."""
        return self._filter

    @filter.setter  # noqa: A003
    def filter(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'filter' field must be of type 'str'"
        self._filter = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetBlueprints_Response(type):
    """Metaclass of message 'GetBlueprints_Response'."""

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
                'carla_msgs.srv.GetBlueprints_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_blueprints__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_blueprints__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_blueprints__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_blueprints__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_blueprints__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBlueprints_Response(metaclass=Metaclass_GetBlueprints_Response):
    """Message class 'GetBlueprints_Response'."""

    __slots__ = [
        '_blueprints',
    ]

    _fields_and_field_types = {
        'blueprints': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.blueprints = kwargs.get('blueprints', [])

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
        if self.blueprints != other.blueprints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def blueprints(self):
        """Message field 'blueprints'."""
        return self._blueprints

    @blueprints.setter
    def blueprints(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'blueprints' field must be a set or sequence and each value of type 'str'"
        self._blueprints = value


class Metaclass_GetBlueprints(type):
    """Metaclass of service 'GetBlueprints'."""

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
                'carla_msgs.srv.GetBlueprints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_blueprints

            from carla_msgs.srv import _get_blueprints
            if _get_blueprints.Metaclass_GetBlueprints_Request._TYPE_SUPPORT is None:
                _get_blueprints.Metaclass_GetBlueprints_Request.__import_type_support__()
            if _get_blueprints.Metaclass_GetBlueprints_Response._TYPE_SUPPORT is None:
                _get_blueprints.Metaclass_GetBlueprints_Response.__import_type_support__()


class GetBlueprints(metaclass=Metaclass_GetBlueprints):
    from carla_msgs.srv._get_blueprints import GetBlueprints_Request as Request
    from carla_msgs.srv._get_blueprints import GetBlueprints_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
