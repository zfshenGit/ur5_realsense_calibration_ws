# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from easy_handeye/ComputeCalibrationRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ComputeCalibrationRequest(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "easy_handeye/ComputeCalibrationRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ComputeCalibrationRequest, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from easy_handeye/ComputeCalibrationResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import easy_handeye.msg
import geometry_msgs.msg
import std_msgs.msg

class ComputeCalibrationResponse(genpy.Message):
  _md5sum = "93e3866c4ed928ecb649cca85b0b0261"
  _type = "easy_handeye/ComputeCalibrationResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """HandeyeCalibration calibration

================================================================================
MSG: easy_handeye/HandeyeCalibration
bool eye_on_hand
geometry_msgs/TransformStamped transform
================================================================================
MSG: geometry_msgs/TransformStamped
# This expresses a transform from coordinate frame header.frame_id
# to the coordinate frame child_frame_id
#
# This message is mostly used by the 
# <a href="http://wiki.ros.org/tf">tf</a> package. 
# See its documentation for more information.

Header header
string child_frame_id # the frame id of the child frame
Transform transform

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Transform
# This represents the transform between two coordinate frames in free space.

Vector3 translation
Quaternion rotation

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['calibration']
  _slot_types = ['easy_handeye/HandeyeCalibration']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       calibration

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ComputeCalibrationResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.calibration is None:
        self.calibration = easy_handeye.msg.HandeyeCalibration()
    else:
      self.calibration = easy_handeye.msg.HandeyeCalibration()

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
      _x = self
      buff.write(_get_struct_B3I().pack(_x.calibration.eye_on_hand, _x.calibration.transform.header.seq, _x.calibration.transform.header.stamp.secs, _x.calibration.transform.header.stamp.nsecs))
      _x = self.calibration.transform.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.calibration.transform.child_frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.calibration.transform.transform.translation.x, _x.calibration.transform.transform.translation.y, _x.calibration.transform.transform.translation.z, _x.calibration.transform.transform.rotation.x, _x.calibration.transform.transform.rotation.y, _x.calibration.transform.transform.rotation.z, _x.calibration.transform.transform.rotation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.calibration is None:
        self.calibration = easy_handeye.msg.HandeyeCalibration()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.calibration.eye_on_hand, _x.calibration.transform.header.seq, _x.calibration.transform.header.stamp.secs, _x.calibration.transform.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      self.calibration.eye_on_hand = bool(self.calibration.eye_on_hand)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.calibration.transform.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.calibration.transform.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.calibration.transform.child_frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.calibration.transform.child_frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.calibration.transform.transform.translation.x, _x.calibration.transform.transform.translation.y, _x.calibration.transform.transform.translation.z, _x.calibration.transform.transform.rotation.x, _x.calibration.transform.transform.rotation.y, _x.calibration.transform.transform.rotation.z, _x.calibration.transform.transform.rotation.w,) = _get_struct_7d().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_B3I().pack(_x.calibration.eye_on_hand, _x.calibration.transform.header.seq, _x.calibration.transform.header.stamp.secs, _x.calibration.transform.header.stamp.nsecs))
      _x = self.calibration.transform.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.calibration.transform.child_frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.calibration.transform.transform.translation.x, _x.calibration.transform.transform.translation.y, _x.calibration.transform.transform.translation.z, _x.calibration.transform.transform.rotation.x, _x.calibration.transform.transform.rotation.y, _x.calibration.transform.transform.rotation.z, _x.calibration.transform.transform.rotation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.calibration is None:
        self.calibration = easy_handeye.msg.HandeyeCalibration()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.calibration.eye_on_hand, _x.calibration.transform.header.seq, _x.calibration.transform.header.stamp.secs, _x.calibration.transform.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      self.calibration.eye_on_hand = bool(self.calibration.eye_on_hand)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.calibration.transform.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.calibration.transform.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.calibration.transform.child_frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.calibration.transform.child_frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.calibration.transform.transform.translation.x, _x.calibration.transform.transform.translation.y, _x.calibration.transform.transform.translation.z, _x.calibration.transform.transform.rotation.x, _x.calibration.transform.transform.rotation.y, _x.calibration.transform.transform.rotation.z, _x.calibration.transform.transform.rotation.w,) = _get_struct_7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d
_struct_B3I = None
def _get_struct_B3I():
    global _struct_B3I
    if _struct_B3I is None:
        _struct_B3I = struct.Struct("<B3I")
    return _struct_B3I
class ComputeCalibration(object):
  _type          = 'easy_handeye/ComputeCalibration'
  _md5sum = '93e3866c4ed928ecb649cca85b0b0261'
  _request_class  = ComputeCalibrationRequest
  _response_class = ComputeCalibrationResponse
