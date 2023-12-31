# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mir_msgs/RobotMode.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class RobotMode(genpy.Message):
  _md5sum = "eba8bb1579179193cb02f80018cc79eb"
  _type = "mir_msgs/RobotMode"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# The robot operates in different mode
uint8 ROBOT_MODE_NONE = 0		# start mode
uint8 ROBOT_MODE_MAPPING = 3		# in mapping a new map is made
uint8 ROBOT_MODE_MISSION = 7		# primary mode when executing a mission (action list)
uint8 ROBOT_MODE_CHANGING = 255		# a transition mode - to say that a transition is in progress

uint8 robotMode
string robotModeString

"""
  # Pseudo-constants
  ROBOT_MODE_NONE = 0
  ROBOT_MODE_MAPPING = 3
  ROBOT_MODE_MISSION = 7
  ROBOT_MODE_CHANGING = 255

  __slots__ = ['robotMode','robotModeString']
  _slot_types = ['uint8','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       robotMode,robotModeString

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RobotMode, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.robotMode is None:
        self.robotMode = 0
      if self.robotModeString is None:
        self.robotModeString = ''
    else:
      self.robotMode = 0
      self.robotModeString = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.robotMode
      buff.write(_get_struct_B().pack(_x))
      _x = self.robotModeString
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.robotMode,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.robotModeString = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.robotModeString = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.robotMode
      buff.write(_get_struct_B().pack(_x))
      _x = self.robotModeString
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.robotMode,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.robotModeString = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.robotModeString = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
