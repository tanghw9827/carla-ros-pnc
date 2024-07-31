# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pnc_msgs:msg/TrajectoryPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryPoint(type):
    """Metaclass of message 'TrajectoryPoint'."""

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
            module = import_type_support('pnc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pnc_msgs.msg.TrajectoryPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_point

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryPoint(metaclass=Metaclass_TrajectoryPoint):
    """Message class 'TrajectoryPoint'."""

    __slots__ = [
        '_x',
        '_y',
        '_heading',
        '_kappa',
        '_v',
        '_ax',
        '_ay',
        '_a_tau',
        '_time_stamped',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'heading': 'double',
        'kappa': 'double',
        'v': 'double',
        'ax': 'double',
        'ay': 'double',
        'a_tau': 'double',
        'time_stamped': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.heading = kwargs.get('heading', float())
        self.kappa = kwargs.get('kappa', float())
        self.v = kwargs.get('v', float())
        self.ax = kwargs.get('ax', float())
        self.ay = kwargs.get('ay', float())
        self.a_tau = kwargs.get('a_tau', float())
        self.time_stamped = kwargs.get('time_stamped', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.heading != other.heading:
            return False
        if self.kappa != other.kappa:
            return False
        if self.v != other.v:
            return False
        if self.ax != other.ax:
            return False
        if self.ay != other.ay:
            return False
        if self.a_tau != other.a_tau:
            return False
        if self.time_stamped != other.time_stamped:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
        self._heading = value

    @property
    def kappa(self):
        """Message field 'kappa'."""
        return self._kappa

    @kappa.setter
    def kappa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kappa' field must be of type 'float'"
        self._kappa = value

    @property
    def v(self):
        """Message field 'v'."""
        return self._v

    @v.setter
    def v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v' field must be of type 'float'"
        self._v = value

    @property
    def ax(self):
        """Message field 'ax'."""
        return self._ax

    @ax.setter
    def ax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ax' field must be of type 'float'"
        self._ax = value

    @property
    def ay(self):
        """Message field 'ay'."""
        return self._ay

    @ay.setter
    def ay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ay' field must be of type 'float'"
        self._ay = value

    @property
    def a_tau(self):
        """Message field 'a_tau'."""
        return self._a_tau

    @a_tau.setter
    def a_tau(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a_tau' field must be of type 'float'"
        self._a_tau = value

    @property
    def time_stamped(self):
        """Message field 'time_stamped'."""
        return self._time_stamped

    @time_stamped.setter
    def time_stamped(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_stamped' field must be of type 'float'"
        self._time_stamped = value
