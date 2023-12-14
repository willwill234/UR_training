execute_process(COMMAND "/home/will/work/robot_server_side/build/ur_kinematics/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/will/work/robot_server_side/build/ur_kinematics/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
