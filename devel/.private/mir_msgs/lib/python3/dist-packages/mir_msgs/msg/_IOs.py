# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mir_msgs/IOs.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class IOs(genpy.Message):
  _md5sum = "6266405913b096bf8e69b775d090b781"
  _type = "mir_msgs/IOs"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """string module_guid
bool connected
uint8 DONE=0
uint8 STARTED=1
uint8 ERROR=3
uint8 status
int8 num_inputs
bool[] input_state
int8 num_outputs
bool[] output_state
string ip
string error"""
  # Pseudo-constants
  DONE = 0
  STARTED = 1
  ERROR = 3

  __slots__ = ['module_guid','connected','status','num_inputs','input_state','num_outputs','output_state','ip','error']
  _slot_types = ['string','bool','uint8','int8','bool[]','int8','bool[]','string','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       module_guid,connected,status,num_inputs,input_state,num_outputs,output_state,ip,error

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(IOs, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.module_guid is None:
        self.module_guid = ''
      if self.connected is None:
        self.connected = False
      if self.status is None:
        self.status = 0
      if self.num_inputs is None:
        self.num_inputs = 0
      if self.input_state is None:
        self.input_state = []
      if self.num_outputs is None:
        self.num_outputs = 0
      if self.output_state is None:
        self.output_state = []
      if self.ip is None:
        self.ip = ''
      if self.error is None:
        self.error = ''
    else:
      self.module_guid = ''
      self.connected = False
      self.status = 0
      self.num_inputs = 0
      self.input_state = []
      self.num_outputs = 0
      self.output_state = []
      self.ip = ''
      self.error = ''

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
      _x = self.module_guid
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2Bb().pack(_x.connected, _x.status, _x.num_inputs))
      length = len(self.input_state)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.Struct(pattern).pack(*self.input_state))
      _x = self.num_outputs
      buff.write(_get_struct_b().pack(_x))
      length = len(self.output_state)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.Struct(pattern).pack(*self.output_state))
      _x = self.ip
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.error
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
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.module_guid = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.module_guid = str[start:end]
      _x = self
      start = end
      end += 3
      (_x.connected, _x.status, _x.num_inputs,) = _get_struct_2Bb().unpack(str[start:end])
      self.connected = bool(self.connected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.input_state = s.unpack(str[start:end])
      self.input_state = list(map(bool, self.input_state))
      start = end
      end += 1
      (self.num_outputs,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.output_state = s.unpack(str[start:end])
      self.output_state = list(map(bool, self.output_state))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.ip = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.ip = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.error = str[start:end]
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
      _x = self.module_guid
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2Bb().pack(_x.connected, _x.status, _x.num_inputs))
      length = len(self.input_state)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.input_state.tostring())
      _x = self.num_outputs
      buff.write(_get_struct_b().pack(_x))
      length = len(self.output_state)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.output_state.tostring())
      _x = self.ip
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.error
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
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.module_guid = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.module_guid = str[start:end]
      _x = self
      start = end
      end += 3
      (_x.connected, _x.status, _x.num_inputs,) = _get_struct_2Bb().unpack(str[start:end])
      self.connected = bool(self.connected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.input_state = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.input_state = list(map(bool, self.input_state))
      start = end
      end += 1
      (self.num_outputs,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.output_state = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.output_state = list(map(bool, self.output_state))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.ip = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.ip = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.error = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2Bb = None
def _get_struct_2Bb():
    global _struct_2Bb
    if _struct_2Bb is None:
        _struct_2Bb = struct.Struct("<2Bb")
    return _struct_2Bb
_struct_b = None
def _get_struct_b():
    global _struct_b
    if _struct_b is None:
        _struct_b = struct.Struct("<b")
    return _struct_b
