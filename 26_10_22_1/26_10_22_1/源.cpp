#include<stdio.h>

void jiemian()
{
	printf("*****************************\n");
	printf("****     1. 开始游戏     ****\n");
	printf("****     0. 退出游戏     ****\n");
	printf("*****************************\n");
}

int mian()
{
	int a = 0;
	do
	{
		jiemian();
		if (a == 1)
		{
			printf("开始游戏");

		}
		else if (a == 0)
		{
			printf("退出游戏");
		}
		else
		{
			printf("输入错误，重新选择");
		}

	} while (a == 0);
	return 0;
}