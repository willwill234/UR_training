;; Auto-generated. Do not edit!


(when (boundp 'mir_actions::MirMoveBaseResult)
  (if (not (find-package "MIR_ACTIONS"))
    (make-package "MIR_ACTIONS"))
  (shadow 'MirMoveBaseResult (find-package "MIR_ACTIONS")))
(unless (find-package "MIR_ACTIONS::MIRMOVEBASERESULT")
  (make-package "MIR_ACTIONS::MIRMOVEBASERESULT"))

(in-package "ROS")
;;//! \htmlinclude MirMoveBaseResult.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(intern "*UNDEFINED*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*UNDEFINED* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*UNDEFINED* 0)
(intern "*GOAL_REACHED*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*GOAL_REACHED* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*GOAL_REACHED* 1)
(intern "*FAILED*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*FAILED* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*FAILED* -1)
(intern "*FAILED_NO_PATH*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*FAILED_NO_PATH* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*FAILED_NO_PATH* -2)
(intern "*FAILED_GOAL_IN_STATIC_OBSTACLE*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*FAILED_GOAL_IN_STATIC_OBSTACLE* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*FAILED_GOAL_IN_STATIC_OBSTACLE* -3)
(intern "*FAILED_GOAL_IN_FORBIDDEN_AREA*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*FAILED_GOAL_IN_FORBIDDEN_AREA* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*FAILED_GOAL_IN_FORBIDDEN_AREA* -4)
(intern "*FAILED_GOAL_IN_DYNAMIC_OBSTACLE*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*FAILED_GOAL_IN_DYNAMIC_OBSTACLE* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*FAILED_GOAL_IN_DYNAMIC_OBSTACLE* -5)
(intern "*FAILED_ROBOT_IN_COLLISION*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*FAILED_ROBOT_IN_COLLISION* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*FAILED_ROBOT_IN_COLLISION* -6)
(intern "*FAILED_ROBOT_IN_FORBIDDEN_AREA*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*FAILED_ROBOT_IN_FORBIDDEN_AREA* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*FAILED_ROBOT_IN_FORBIDDEN_AREA* -7)
(intern "*FAILED_UNKNOWN_TRAILER*" (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(shadow '*FAILED_UNKNOWN_TRAILER* (find-package "MIR_ACTIONS::MIRMOVEBASERESULT"))
(defconstant mir_actions::MirMoveBaseResult::*FAILED_UNKNOWN_TRAILER* -8)

(defun mir_actions::MirMoveBaseResult-to-symbol (const)
  (cond
        ((= const 0) 'mir_actions::MirMoveBaseResult::*UNDEFINED*)
        ((= const 1) 'mir_actions::MirMoveBaseResult::*GOAL_REACHED*)
        ((= const -1) 'mir_actions::MirMoveBaseResult::*FAILED*)
        ((= const -2) 'mir_actions::MirMoveBaseResult::*FAILED_NO_PATH*)
        ((= const -3) 'mir_actions::MirMoveBaseResult::*FAILED_GOAL_IN_STATIC_OBSTACLE*)
        ((= const -4) 'mir_actions::MirMoveBaseResult::*FAILED_GOAL_IN_FORBIDDEN_AREA*)
        ((= const -5) 'mir_actions::MirMoveBaseResult::*FAILED_GOAL_IN_DYNAMIC_OBSTACLE*)
        ((= const -6) 'mir_actions::MirMoveBaseResult::*FAILED_ROBOT_IN_COLLISION*)
        ((= const -7) 'mir_actions::MirMoveBaseResult::*FAILED_ROBOT_IN_FORBIDDEN_AREA*)
        ((= const -8) 'mir_actions::MirMoveBaseResult::*FAILED_UNKNOWN_TRAILER*)
        (t nil)))

(defclass mir_actions::MirMoveBaseResult
  :super ros::object
  :slots (_end_state _end_pose ))

(defmethod mir_actions::MirMoveBaseResult
  (:init
   (&key
    ((:end_state __end_state) 0)
    ((:end_pose __end_pose) (instance geometry_msgs::PoseStamped :init))
    )
   (send-super :init)
   (setq _end_state (round __end_state))
   (setq _end_pose __end_pose)
   self)
  (:end_state
   (&optional __end_state)
   (if __end_state (setq _end_state __end_state)) _end_state)
  (:end_pose
   (&rest __end_pose)
   (if (keywordp (car __end_pose))
       (send* _end_pose __end_pose)
     (progn
       (if __end_pose (setq _end_pose (car __end_pose)))
       _end_pose)))
  (:serialization-length
   ()
   (+
    ;; int16 _end_state
    2
    ;; geometry_msgs/PoseStamped _end_pose
    (send _end_pose :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _end_state
       (write-word _end_state s)
     ;; geometry_msgs/PoseStamped _end_pose
       (send _end_pose :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _end_state
     (setq _end_state (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; geometry_msgs/PoseStamped _end_pose
     (send _end_pose :deserialize buf ptr-) (incf ptr- (send _end_pose :serialization-length))
   ;;
   self)
  )

(setf (get mir_actions::MirMoveBaseResult :md5sum-) "5d78ef95801ef85ff0171f7a59e041d7")
(setf (get mir_actions::MirMoveBaseResult :datatype-) "mir_actions/MirMoveBaseResult")
(setf (get mir_actions::MirMoveBaseResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result definition
int16 UNDEFINED = 0
int16 GOAL_REACHED = 1
int16 FAILED = -1
int16 FAILED_NO_PATH = -2
int16 FAILED_GOAL_IN_STATIC_OBSTACLE = -3
int16 FAILED_GOAL_IN_FORBIDDEN_AREA = -4
int16 FAILED_GOAL_IN_DYNAMIC_OBSTACLE = -5
int16 FAILED_ROBOT_IN_COLLISION = -6
int16 FAILED_ROBOT_IN_FORBIDDEN_AREA = -7
int16 FAILED_UNKNOWN_TRAILER = -8
int16 end_state
geometry_msgs/PoseStamped end_pose

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

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
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
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

")



(provide :mir_actions/MirMoveBaseResult "5d78ef95801ef85ff0171f7a59e041d7")


