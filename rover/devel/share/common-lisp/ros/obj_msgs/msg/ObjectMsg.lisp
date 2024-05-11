; Auto-generated. Do not edit!


(cl:in-package obj_msgs-msg)


;//! \htmlinclude ObjectMsg.msg.html

(cl:defclass <ObjectMsg> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:integer
    :initform 0)
   (y
    :reader y
    :initarg :y
    :type cl:integer
    :initform 0)
   (height
    :reader height
    :initarg :height
    :type cl:float
    :initform 0.0)
   (width
    :reader width
    :initarg :width
    :type cl:float
    :initform 0.0)
   (distance
    :reader distance
    :initarg :distance
    :type cl:float
    :initform 0.0)
   (class_name
    :reader class_name
    :initarg :class_name
    :type cl:string
    :initform ""))
)

(cl:defclass ObjectMsg (<ObjectMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ObjectMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ObjectMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name obj_msgs-msg:<ObjectMsg> is deprecated: use obj_msgs-msg:ObjectMsg instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <ObjectMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader obj_msgs-msg:x-val is deprecated.  Use obj_msgs-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <ObjectMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader obj_msgs-msg:y-val is deprecated.  Use obj_msgs-msg:y instead.")
  (y m))

(cl:ensure-generic-function 'height-val :lambda-list '(m))
(cl:defmethod height-val ((m <ObjectMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader obj_msgs-msg:height-val is deprecated.  Use obj_msgs-msg:height instead.")
  (height m))

(cl:ensure-generic-function 'width-val :lambda-list '(m))
(cl:defmethod width-val ((m <ObjectMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader obj_msgs-msg:width-val is deprecated.  Use obj_msgs-msg:width instead.")
  (width m))

(cl:ensure-generic-function 'distance-val :lambda-list '(m))
(cl:defmethod distance-val ((m <ObjectMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader obj_msgs-msg:distance-val is deprecated.  Use obj_msgs-msg:distance instead.")
  (distance m))

(cl:ensure-generic-function 'class_name-val :lambda-list '(m))
(cl:defmethod class_name-val ((m <ObjectMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader obj_msgs-msg:class_name-val is deprecated.  Use obj_msgs-msg:class_name instead.")
  (class_name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ObjectMsg>) ostream)
  "Serializes a message object of type '<ObjectMsg>"
  (cl:let* ((signed (cl:slot-value msg 'x)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'y)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'height))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'width))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'class_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'class_name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ObjectMsg>) istream)
  "Deserializes a message object of type '<ObjectMsg>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'x) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'y) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'height) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'width) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'distance) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'class_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'class_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ObjectMsg>)))
  "Returns string type for a message object of type '<ObjectMsg>"
  "obj_msgs/ObjectMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ObjectMsg)))
  "Returns string type for a message object of type 'ObjectMsg"
  "obj_msgs/ObjectMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ObjectMsg>)))
  "Returns md5sum for a message object of type '<ObjectMsg>"
  "56b107eaebcdaea230854f3edfee5b4f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ObjectMsg)))
  "Returns md5sum for a message object of type 'ObjectMsg"
  "56b107eaebcdaea230854f3edfee5b4f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ObjectMsg>)))
  "Returns full string definition for message of type '<ObjectMsg>"
  (cl:format cl:nil "int32 x~%int32 y~%float32 height~%float32 width~%float32 distance~%string class_name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ObjectMsg)))
  "Returns full string definition for message of type 'ObjectMsg"
  (cl:format cl:nil "int32 x~%int32 y~%float32 height~%float32 width~%float32 distance~%string class_name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ObjectMsg>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4 (cl:length (cl:slot-value msg 'class_name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ObjectMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'ObjectMsg
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':height (height msg))
    (cl:cons ':width (width msg))
    (cl:cons ':distance (distance msg))
    (cl:cons ':class_name (class_name msg))
))
