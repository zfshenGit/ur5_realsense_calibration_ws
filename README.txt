使用说明:

https://github.com/portgasray/ur5_realsense_calibration

参考资料:
https://zhuanlan.zhihu.com/p/92339362

https://mp.weixin.qq.com/s?__biz=MzA5MDE2MjQ0OQ==&mid=2652786821&idx=1&sn=297af3939075dbc926e6d785911104e9&chksm=8be524fbbc92aded68bacb1766df0a17127a96f22e1e39199f554b51511a1a9dae4a639810ef#rd

https://blog.csdn.net/Thinkin9/article/details/123743924

1.去https://github.com/portgasray/ur5_realsense_calibration下载项目文件，安装依赖，删掉realsense包，采用自己的realsense驱动包

2.去https://chev.me/arucogen/生成一个Aruco Marker，打印原始比例输出为pdf，这里id为582,size为0.076m


3.catkin_ws路径下启动ur5（注意把launch文件里rviz注销掉）
	roslaunch ur_control ur5_control_bringup.launch

4.ur5_realsense_calibration_ws路径下启动相机
	roslaunch realsense2_camera rs_rgbd.launch
5.ur5_realsense_calibration_ws路径下启动标定launch文件
	roslaunch easy_handeye ur5_realsense_handeyecalibration_eye_on_hand.launch
6.采样17组点（不一定要17组，不过至少要8组，一般都是采15组），计算，并保存标定结果
