; Auto-generated. Do not edit!


(cl:in-package mastering_ros_demo_pkg-msg)


;//! \htmlinclude Demo_actionGoal.msg.html

(cl:defclass <Demo_actionGoal> (roslisp-msg-protocol:ros-message)
  ((count
    :reader count
    :initarg :count
    :type cl:integer
    :initform 0))
)

(cl:defclass Demo_actionGoal (<Demo_actionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Demo_actionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Demo_actionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mastering_ros_demo_pkg-msg:<Demo_actionGoal> is deprecated: use mastering_ros_demo_pkg-msg:Demo_actionGoal instead.")))

(cl:ensure-generic-function 'count-val :lambda-list '(m))
(cl:defmethod count-val ((m <Demo_actionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mastering_ros_demo_pkg-msg:count-val is deprecated.  Use mastering_ros_demo_pkg-msg:count instead.")
  (count m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Demo_actionGoal>) ostream)
  "Serializes a message object of type '<Demo_actionGoal>"
  (cl:let* ((signed (cl:slot-value msg 'count)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Demo_actionGoal>) istream)
  "Deserializes a message object of type '<Demo_actionGoal>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'count) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Demo_actionGoal>)))
  "Returns string type for a message object of type '<Demo_actionGoal>"
  "mastering_ros_demo_pkg/Demo_actionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Demo_actionGoal)))
  "Returns string type for a message object of type 'Demo_actionGoal"
  "mastering_ros_demo_pkg/Demo_actionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Demo_actionGoal>)))
  "Returns md5sum for a message object of type '<Demo_actionGoal>"
  "602d642babe509c7c59f497c23e716a9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Demo_actionGoal)))
  "Returns md5sum for a message object of type 'Demo_actionGoal"
  "602d642babe509c7c59f497c23e716a9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Demo_actionGoal>)))
  "Returns full string definition for message of type '<Demo_actionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal 정의~%int32 count~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Demo_actionGoal)))
  "Returns full string definition for message of type 'Demo_actionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal 정의~%int32 count~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Demo_actionGoal>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Demo_actionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'Demo_actionGoal
    (cl:cons ':count (count msg))
))
