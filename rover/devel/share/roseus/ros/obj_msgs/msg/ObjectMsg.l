;; Auto-generated. Do not edit!


(when (boundp 'obj_msgs::ObjectMsg)
  (if (not (find-package "OBJ_MSGS"))
    (make-package "OBJ_MSGS"))
  (shadow 'ObjectMsg (find-package "OBJ_MSGS")))
(unless (find-package "OBJ_MSGS::OBJECTMSG")
  (make-package "OBJ_MSGS::OBJECTMSG"))

(in-package "ROS")
;;//! \htmlinclude ObjectMsg.msg.html


(defclass obj_msgs::ObjectMsg
  :super ros::object
  :slots (_x _y _height _width _distance _class_name ))

(defmethod obj_msgs::ObjectMsg
  (:init
   (&key
    ((:x __x) 0)
    ((:y __y) 0)
    ((:height __height) 0.0)
    ((:width __width) 0.0)
    ((:distance __distance) 0.0)
    ((:class_name __class_name) "")
    )
   (send-super :init)
   (setq _x (round __x))
   (setq _y (round __y))
   (setq _height (float __height))
   (setq _width (float __width))
   (setq _distance (float __distance))
   (setq _class_name (string __class_name))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:distance
   (&optional __distance)
   (if __distance (setq _distance __distance)) _distance)
  (:class_name
   (&optional __class_name)
   (if __class_name (setq _class_name __class_name)) _class_name)
  (:serialization-length
   ()
   (+
    ;; int32 _x
    4
    ;; int32 _y
    4
    ;; float32 _height
    4
    ;; float32 _width
    4
    ;; float32 _distance
    4
    ;; string _class_name
    4 (length _class_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _x
       (write-long _x s)
     ;; int32 _y
       (write-long _y s)
     ;; float32 _height
       (sys::poke _height (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _width
       (sys::poke _width (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _distance
       (sys::poke _distance (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; string _class_name
       (write-long (length _class_name) s) (princ _class_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _x
     (setq _x (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _y
     (setq _y (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _height
     (setq _height (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _width
     (setq _width (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _distance
     (setq _distance (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; string _class_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _class_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get obj_msgs::ObjectMsg :md5sum-) "56b107eaebcdaea230854f3edfee5b4f")
(setf (get obj_msgs::ObjectMsg :datatype-) "obj_msgs/ObjectMsg")
(setf (get obj_msgs::ObjectMsg :definition-)
      "int32 x
int32 y
float32 height
float32 width
float32 distance
string class_name

")



(provide :obj_msgs/ObjectMsg "56b107eaebcdaea230854f3edfee5b4f")


