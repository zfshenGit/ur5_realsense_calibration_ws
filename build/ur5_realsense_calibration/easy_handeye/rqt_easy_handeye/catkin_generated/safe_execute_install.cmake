execute_process(COMMAND "/home/zhifeishen/ur5_realsense_calibration_ws/build/ur5_realsense_calibration/easy_handeye/rqt_easy_handeye/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/zhifeishen/ur5_realsense_calibration_ws/build/ur5_realsense_calibration/easy_handeye/rqt_easy_handeye/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
