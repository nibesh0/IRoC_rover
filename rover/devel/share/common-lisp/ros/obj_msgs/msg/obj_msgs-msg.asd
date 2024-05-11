
(cl:in-package :asdf)

(defsystem "obj_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "ObjectMsg" :depends-on ("_package_ObjectMsg"))
    (:file "_package_ObjectMsg" :depends-on ("_package"))
  ))