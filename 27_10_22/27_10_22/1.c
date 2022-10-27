#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void jiemian()
{
	printf("*****************************\n");
	printf("****     1. 开始游戏     ****\n");
	printf("****     0. 退出游戏     ****\n");
	printf("*****************************\n");
}
void game()
{

	int a = 0;
	int sui = rand()%100+1;//%100，剩下的数范围在）0~99，加1就是一百
	while (1)
	{
		printf("请输入数字：");
		scanf_s("%d", &a);
		if (a > sui)
			printf("猜大了");
		else if (a < sui)
			printf("猜小了");
		else
		{
			printf("猜对了,你真棒\n");
			break;
		}
	}
}

int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));//只用调用一次
	do
	{
		jiemian();
		printf("请选择：");
		scanf_s("%d", &a);
		if (a == 1)
		{
			printf("开始游戏");
			game();
		}
		else if (a == 0)
		{
			printf("退出游戏");
			break;
		}
		else
		{
			printf("输入错误，重新选择");
		}


	} while (a);
	return 0;
}