#define _CRT_SECURE_NO_WARNINGS 1 

//����ros�İ�
#include "ros/ros.h"


int main(int argc, char* argv[])//���ܵ���������
{
	ros::init(argc, argv, "hello_ros");//��ʼ���ڵ�
	ROS_INFO("hello world");//ros�������������
	return 0;
}

