# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yolo_msgs:msg/YoloDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_YoloDetection(type):
    """Metaclass of message 'YoloDetection'."""

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
            module = import_type_support('yolo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yolo_msgs.msg.YoloDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__yolo_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__yolo_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__yolo_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__yolo_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__yolo_detection

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class YoloDetection(metaclass=Metaclass_YoloDetection):
    """Message class 'YoloDetection'."""

    __slots__ = [
        '_x1',
        '_y1',
        '_x2',
        '_y2',
        '_class_name',
        '_confidence',
    ]

    _fields_and_field_types = {
        'x1': 'int32',
        'y1': 'int32',
        'x2': 'int32',
        'y2': 'int32',
        'class_name': 'string',
        'confidence': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x1 = kwargs.get('x1', int())
        self.y1 = kwargs.get('y1', int())
        self.x2 = kwargs.get('x2', int())
        self.y2 = kwargs.get('y2', int())
        self.class_name = kwargs.get('class_name', str())
        self.confidence = kwargs.get('confidence', float())

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
        if self.x1 != other.x1:
            return False
        if self.y1 != other.y1:
            return False
        if self.x2 != other.x2:
            return False
        if self.y2 != other.y2:
            return False
        if self.class_name != other.class_name:
            return False
        if self.confidence != other.confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x1(self):
        """Message field 'x1'."""
        return self._x1

    @x1.setter
    def x1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x1' field must be an integer in [-2147483648, 2147483647]"
        self._x1 = value

    @property
    def y1(self):
        """Message field 'y1'."""
        return self._y1

    @y1.setter
    def y1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y1' field must be an integer in [-2147483648, 2147483647]"
        self._y1 = value

    @property
    def x2(self):
        """Message field 'x2'."""
        return self._x2

    @x2.setter
    def x2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x2' field must be an integer in [-2147483648, 2147483647]"
        self._x2 = value

    @property
    def y2(self):
        """Message field 'y2'."""
        return self._y2

    @y2.setter
    def y2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y2' field must be an integer in [-2147483648, 2147483647]"
        self._y2 = value

    @property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
        self._confidence = value
