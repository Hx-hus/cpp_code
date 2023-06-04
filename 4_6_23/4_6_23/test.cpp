#define _CRT_SECURE_NO_WARNINGS 1 

//引入ros的包
#include "ros/ros.h"


int main(int argc, char* argv[])//接受的两个参数
{
	ros::init(argc, argv, "hello_ros");//初始化节点
	ROS_INFO("hello world");//ros包带的输出工具
	return 0;
}

