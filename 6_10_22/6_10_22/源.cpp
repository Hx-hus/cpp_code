#include<stdio.h>
#include<string.h>

int main()
{
	printf("来到大学\n");
	int a = 0;
	int b = 0;
	printf("你会努力学习c++吗？(选择1or0)\n");
	scanf_s("%d\n", &a);
	if (a == 1)
	{
		while (b < 20000)
		{
			printf("努力学习c++\n",b);
			b++;
		}
		if (b >= 20000)
			printf("好offer\n");
	}
	else
	{
		printf("进电子厂\n");
	}
	return 0;
}

//int main()
//{
//	int a = 0;
//	printf("输入一个整数，判断为是否为奇数\n");
//	scanf_s("%d\n", &a);
//	if (a % 2 == 1)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return