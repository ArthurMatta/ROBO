# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from stdr_msgs/SpawnRobotActionGoal.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import stdr_msgs.msg
import geometry_msgs.msg
import genpy
import actionlib_msgs.msg
import std_msgs.msg

class SpawnRobotActionGoal(genpy.Message):
  _md5sum = "a4114e2999fb6554dc798d33047e1922"
  _type = "stdr_msgs/SpawnRobotActionGoal"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
SpawnRobotGoal goal

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
string frame_id

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: stdr_msgs/SpawnRobotGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#goal definition
stdr_msgs/RobotMsg description

================================================================================
MSG: stdr_msgs/RobotMsg
geometry_msgs/Pose2D initialPose

stdr_msgs/FootprintMsg footprint

stdr_msgs/LaserSensorMsg[] laserSensors
stdr_msgs/SonarSensorMsg[] sonarSensors
stdr_msgs/RfidSensorMsg[] rfidSensors
stdr_msgs/CO2SensorMsg[] co2Sensors
stdr_msgs/SoundSensorMsg[] soundSensors
stdr_msgs/ThermalSensorMsg[] thermalSensors

stdr_msgs/KinematicMsg kinematicModel

================================================================================
MSG: geometry_msgs/Pose2D
# Deprecated
# Please use the full 3D pose.

# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.

# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.


# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta

================================================================================
MSG: stdr_msgs/FootprintMsg
geometry_msgs/Point[] points
float32 radius # for circular footprints

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: stdr_msgs/LaserSensorMsg
# Laser Sensor description
float32 maxAngle
float32 minAngle
float32 maxRange
float32 minRange
int32 numRays

stdr_msgs/Noise noise

float32 frequency

string frame_id
geometry_msgs/Pose2D pose # sensor pose, relative to robot center

================================================================================
MSG: stdr_msgs/Noise
bool noise
float32 noiseMean
float32 noiseStd

================================================================================
MSG: stdr_msgs/SonarSensorMsg
# Rfid sensor description
float32 maxRange
float32 minRange
float32 coneAngle

float32 frequency
stdr_msgs/Noise noise

string frame_id
geometry_msgs/Pose2D pose # sensor pose, relative to robot center

================================================================================
MSG: stdr_msgs/RfidSensorMsg
# Rfid sensor description
float32 maxRange
float32 angleSpan
float32 signalCutoff

float32 frequency

string frame_id
geometry_msgs/Pose2D pose # sensor pose, relative to robot center

================================================================================
MSG: stdr_msgs/CO2SensorMsg
# Sensor description

float32 maxRange
float32 frequency
string frame_id

# sensor pose, relative to robot center
geometry_msgs/Pose2D pose 

================================================================================
MSG: stdr_msgs/SoundSensorMsg
# Sensor description

float32 maxRange
float32 frequency
float32 angleSpan
string frame_id

# sensor pose, relative to robot center
geometry_msgs/Pose2D pose 

================================================================================
MSG: stdr_msgs/ThermalSensorMsg
# Sensor description

float32 maxRange
float32 frequency
float32 angleSpan
string frame_id

# sensor pose, relative to robot center
geometry_msgs/Pose2D pose 

================================================================================
MSG: stdr_msgs/KinematicMsg
# Container for the kinematic model parameters. The parameters selected/
# are quite general. For a more accurate motion model a per-kinematic model
# approach should be followed.
# Parameters are in the form a_C_D, where C is affected by D.
# ux is the linear speed
# uy is the lateral speed (for omni vehicles)
# w is the angular speed
# g is a cofficient that directly affects the angular speed
# For more information check the MotionController::sampleVelocities function.

string type
float32 a_ux_ux
float32 a_ux_uy
float32 a_ux_w
float32 a_uy_ux
float32 a_uy_uy
float32 a_uy_w
float32 a_w_ux
float32 a_w_uy
float32 a_w_w
float32 a_g_ux
float32 a_g_uy
float32 a_g_w
"""
  __slots__ = ['header','goal_id','goal']
  _slot_types = ['std_msgs/Header','actionlib_msgs/GoalID','stdr_msgs/SpawnRobotGoal']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,goal_id,goal

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SpawnRobotActionGoal, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.goal_id is None:
        self.goal_id = actionlib_msgs.msg.GoalID()
      if self.goal is None:
        self.goal = stdr_msgs.msg.SpawnRobotGoal()
    else:
      self.header = std_msgs.msg.Header()
      self.goal_id = actionlib_msgs.msg.GoalID()
      self.goal = stdr_msgs.msg.SpawnRobotGoal()

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.goal_id.stamp.secs, _x.goal_id.stamp.nsecs))
      _x = self.goal_id.id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3d().pack(_x.goal.description.initialPose.x, _x.goal.description.initialPose.y, _x.goal.description.initialPose.theta))
      length = len(self.goal.description.footprint.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.footprint.points:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
      buff.write(_get_struct_f().pack(self.goal.description.footprint.radius))
      length = len(self.goal.description.laserSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.laserSensors:
        _x = val1
        buff.write(_get_struct_4fi().pack(_x.maxAngle, _x.minAngle, _x.maxRange, _x.minRange, _x.numRays))
        _v1 = val1.noise
        _x = _v1
        buff.write(_get_struct_B2f().pack(_x.noise, _x.noiseMean, _x.noiseStd))
        buff.write(_get_struct_f().pack(val1.frequency))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v2 = val1.pose
        _x = _v2
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.sonarSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.sonarSensors:
        _x = val1
        buff.write(_get_struct_4f().pack(_x.maxRange, _x.minRange, _x.coneAngle, _x.frequency))
        _v3 = val1.noise
        _x = _v3
        buff.write(_get_struct_B2f().pack(_x.noise, _x.noiseMean, _x.noiseStd))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v4 = val1.pose
        _x = _v4
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.rfidSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.rfidSensors:
        _x = val1
        buff.write(_get_struct_4f().pack(_x.maxRange, _x.angleSpan, _x.signalCutoff, _x.frequency))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v5 = val1.pose
        _x = _v5
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.co2Sensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.co2Sensors:
        _x = val1
        buff.write(_get_struct_2f().pack(_x.maxRange, _x.frequency))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v6 = val1.pose
        _x = _v6
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.soundSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.soundSensors:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.maxRange, _x.frequency, _x.angleSpan))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v7 = val1.pose
        _x = _v7
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.thermalSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.thermalSensors:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.maxRange, _x.frequency, _x.angleSpan))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v8 = val1.pose
        _x = _v8
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      _x = self.goal.description.kinematicModel.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_12f().pack(_x.goal.description.kinematicModel.a_ux_ux, _x.goal.description.kinematicModel.a_ux_uy, _x.goal.description.kinematicModel.a_ux_w, _x.goal.description.kinematicModel.a_uy_ux, _x.goal.description.kinematicModel.a_uy_uy, _x.goal.description.kinematicModel.a_uy_w, _x.goal.description.kinematicModel.a_w_ux, _x.goal.description.kinematicModel.a_w_uy, _x.goal.description.kinematicModel.a_w_w, _x.goal.description.kinematicModel.a_g_ux, _x.goal.description.kinematicModel.a_g_uy, _x.goal.description.kinematicModel.a_g_w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.goal_id is None:
        self.goal_id = actionlib_msgs.msg.GoalID()
      if self.goal is None:
        self.goal = stdr_msgs.msg.SpawnRobotGoal()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.goal_id.stamp.secs, _x.goal_id.stamp.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.goal_id.id = str[start:end].decode('utf-8')
      else:
        self.goal_id.id = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.goal.description.initialPose.x, _x.goal.description.initialPose.y, _x.goal.description.initialPose.theta,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.footprint.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.footprint.points.append(val1)
      start = end
      end += 4
      (self.goal.description.footprint.radius,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.laserSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.LaserSensorMsg()
        _x = val1
        start = end
        end += 20
        (_x.maxAngle, _x.minAngle, _x.maxRange, _x.minRange, _x.numRays,) = _get_struct_4fi().unpack(str[start:end])
        _v9 = val1.noise
        _x = _v9
        start = end
        end += 9
        (_x.noise, _x.noiseMean, _x.noiseStd,) = _get_struct_B2f().unpack(str[start:end])
        _v9.noise = bool(_v9.noise)
        start = end
        end += 4
        (val1.frequency,) = _get_struct_f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v10 = val1.pose
        _x = _v10
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.laserSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.sonarSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.SonarSensorMsg()
        _x = val1
        start = end
        end += 16
        (_x.maxRange, _x.minRange, _x.coneAngle, _x.frequency,) = _get_struct_4f().unpack(str[start:end])
        _v11 = val1.noise
        _x = _v11
        start = end
        end += 9
        (_x.noise, _x.noiseMean, _x.noiseStd,) = _get_struct_B2f().unpack(str[start:end])
        _v11.noise = bool(_v11.noise)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v12 = val1.pose
        _x = _v12
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.sonarSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.rfidSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.RfidSensorMsg()
        _x = val1
        start = end
        end += 16
        (_x.maxRange, _x.angleSpan, _x.signalCutoff, _x.frequency,) = _get_struct_4f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v13 = val1.pose
        _x = _v13
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.rfidSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.co2Sensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.CO2SensorMsg()
        _x = val1
        start = end
        end += 8
        (_x.maxRange, _x.frequency,) = _get_struct_2f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v14 = val1.pose
        _x = _v14
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.co2Sensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.soundSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.SoundSensorMsg()
        _x = val1
        start = end
        end += 12
        (_x.maxRange, _x.frequency, _x.angleSpan,) = _get_struct_3f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v15 = val1.pose
        _x = _v15
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.soundSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.thermalSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.ThermalSensorMsg()
        _x = val1
        start = end
        end += 12
        (_x.maxRange, _x.frequency, _x.angleSpan,) = _get_struct_3f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v16 = val1.pose
        _x = _v16
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.thermalSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.goal.description.kinematicModel.type = str[start:end].decode('utf-8')
      else:
        self.goal.description.kinematicModel.type = str[start:end]
      _x = self
      start = end
      end += 48
      (_x.goal.description.kinematicModel.a_ux_ux, _x.goal.description.kinematicModel.a_ux_uy, _x.goal.description.kinematicModel.a_ux_w, _x.goal.description.kinematicModel.a_uy_ux, _x.goal.description.kinematicModel.a_uy_uy, _x.goal.description.kinematicModel.a_uy_w, _x.goal.description.kinematicModel.a_w_ux, _x.goal.description.kinematicModel.a_w_uy, _x.goal.description.kinematicModel.a_w_w, _x.goal.description.kinematicModel.a_g_ux, _x.goal.description.kinematicModel.a_g_uy, _x.goal.description.kinematicModel.a_g_w,) = _get_struct_12f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.goal_id.stamp.secs, _x.goal_id.stamp.nsecs))
      _x = self.goal_id.id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3d().pack(_x.goal.description.initialPose.x, _x.goal.description.initialPose.y, _x.goal.description.initialPose.theta))
      length = len(self.goal.description.footprint.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.footprint.points:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
      buff.write(_get_struct_f().pack(self.goal.description.footprint.radius))
      length = len(self.goal.description.laserSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.laserSensors:
        _x = val1
        buff.write(_get_struct_4fi().pack(_x.maxAngle, _x.minAngle, _x.maxRange, _x.minRange, _x.numRays))
        _v17 = val1.noise
        _x = _v17
        buff.write(_get_struct_B2f().pack(_x.noise, _x.noiseMean, _x.noiseStd))
        buff.write(_get_struct_f().pack(val1.frequency))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v18 = val1.pose
        _x = _v18
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.sonarSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.sonarSensors:
        _x = val1
        buff.write(_get_struct_4f().pack(_x.maxRange, _x.minRange, _x.coneAngle, _x.frequency))
        _v19 = val1.noise
        _x = _v19
        buff.write(_get_struct_B2f().pack(_x.noise, _x.noiseMean, _x.noiseStd))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v20 = val1.pose
        _x = _v20
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.rfidSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.rfidSensors:
        _x = val1
        buff.write(_get_struct_4f().pack(_x.maxRange, _x.angleSpan, _x.signalCutoff, _x.frequency))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v21 = val1.pose
        _x = _v21
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.co2Sensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.co2Sensors:
        _x = val1
        buff.write(_get_struct_2f().pack(_x.maxRange, _x.frequency))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v22 = val1.pose
        _x = _v22
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.soundSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.soundSensors:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.maxRange, _x.frequency, _x.angleSpan))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v23 = val1.pose
        _x = _v23
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      length = len(self.goal.description.thermalSensors)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.description.thermalSensors:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.maxRange, _x.frequency, _x.angleSpan))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v24 = val1.pose
        _x = _v24
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
      _x = self.goal.description.kinematicModel.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_12f().pack(_x.goal.description.kinematicModel.a_ux_ux, _x.goal.description.kinematicModel.a_ux_uy, _x.goal.description.kinematicModel.a_ux_w, _x.goal.description.kinematicModel.a_uy_ux, _x.goal.description.kinematicModel.a_uy_uy, _x.goal.description.kinematicModel.a_uy_w, _x.goal.description.kinematicModel.a_w_ux, _x.goal.description.kinematicModel.a_w_uy, _x.goal.description.kinematicModel.a_w_w, _x.goal.description.kinematicModel.a_g_ux, _x.goal.description.kinematicModel.a_g_uy, _x.goal.description.kinematicModel.a_g_w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.goal_id is None:
        self.goal_id = actionlib_msgs.msg.GoalID()
      if self.goal is None:
        self.goal = stdr_msgs.msg.SpawnRobotGoal()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.goal_id.stamp.secs, _x.goal_id.stamp.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.goal_id.id = str[start:end].decode('utf-8')
      else:
        self.goal_id.id = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.goal.description.initialPose.x, _x.goal.description.initialPose.y, _x.goal.description.initialPose.theta,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.footprint.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.footprint.points.append(val1)
      start = end
      end += 4
      (self.goal.description.footprint.radius,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.laserSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.LaserSensorMsg()
        _x = val1
        start = end
        end += 20
        (_x.maxAngle, _x.minAngle, _x.maxRange, _x.minRange, _x.numRays,) = _get_struct_4fi().unpack(str[start:end])
        _v25 = val1.noise
        _x = _v25
        start = end
        end += 9
        (_x.noise, _x.noiseMean, _x.noiseStd,) = _get_struct_B2f().unpack(str[start:end])
        _v25.noise = bool(_v25.noise)
        start = end
        end += 4
        (val1.frequency,) = _get_struct_f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v26 = val1.pose
        _x = _v26
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.laserSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.sonarSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.SonarSensorMsg()
        _x = val1
        start = end
        end += 16
        (_x.maxRange, _x.minRange, _x.coneAngle, _x.frequency,) = _get_struct_4f().unpack(str[start:end])
        _v27 = val1.noise
        _x = _v27
        start = end
        end += 9
        (_x.noise, _x.noiseMean, _x.noiseStd,) = _get_struct_B2f().unpack(str[start:end])
        _v27.noise = bool(_v27.noise)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v28 = val1.pose
        _x = _v28
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.sonarSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.rfidSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.RfidSensorMsg()
        _x = val1
        start = end
        end += 16
        (_x.maxRange, _x.angleSpan, _x.signalCutoff, _x.frequency,) = _get_struct_4f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v29 = val1.pose
        _x = _v29
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.rfidSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.co2Sensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.CO2SensorMsg()
        _x = val1
        start = end
        end += 8
        (_x.maxRange, _x.frequency,) = _get_struct_2f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v30 = val1.pose
        _x = _v30
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.co2Sensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.soundSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.SoundSensorMsg()
        _x = val1
        start = end
        end += 12
        (_x.maxRange, _x.frequency, _x.angleSpan,) = _get_struct_3f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v31 = val1.pose
        _x = _v31
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.soundSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.description.thermalSensors = []
      for i in range(0, length):
        val1 = stdr_msgs.msg.ThermalSensorMsg()
        _x = val1
        start = end
        end += 12
        (_x.maxRange, _x.frequency, _x.angleSpan,) = _get_struct_3f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8')
        else:
          val1.frame_id = str[start:end]
        _v32 = val1.pose
        _x = _v32
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.goal.description.thermalSensors.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.goal.description.kinematicModel.type = str[start:end].decode('utf-8')
      else:
        self.goal.description.kinematicModel.type = str[start:end]
      _x = self
      start = end
      end += 48
      (_x.goal.description.kinematicModel.a_ux_ux, _x.goal.description.kinematicModel.a_ux_uy, _x.goal.description.kinematicModel.a_ux_w, _x.goal.description.kinematicModel.a_uy_ux, _x.goal.description.kinematicModel.a_uy_uy, _x.goal.description.kinematicModel.a_uy_w, _x.goal.description.kinematicModel.a_w_ux, _x.goal.description.kinematicModel.a_w_uy, _x.goal.description.kinematicModel.a_w_w, _x.goal.description.kinematicModel.a_g_ux, _x.goal.description.kinematicModel.a_g_uy, _x.goal.description.kinematicModel.a_g_w,) = _get_struct_12f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4fi = None
def _get_struct_4fi():
    global _struct_4fi
    if _struct_4fi is None:
        _struct_4fi = struct.Struct("<4fi")
    return _struct_4fi
_struct_12f = None
def _get_struct_12f():
    global _struct_12f
    if _struct_12f is None:
        _struct_12f = struct.Struct("<12f")
    return _struct_12f
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_4f = None
def _get_struct_4f():
    global _struct_4f
    if _struct_4f is None:
        _struct_4f = struct.Struct("<4f")
    return _struct_4f
_struct_B2f = None
def _get_struct_B2f():
    global _struct_B2f
    if _struct_B2f is None:
        _struct_B2f = struct.Struct("<B2f")
    return _struct_B2f
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
