#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	scanf_s("%d", i);
	for (j = 1; j <= 32; j++)
	{ 
		if (j % 2 == 1)
		{
			printf("");
		}
	}
	return 0;
}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int n = 0;
//	scanf_s("%d", &i);
//	while (n < 32)
//	{
//		if (i & (1 << n))
//		{
//			count++;
//		}
//		n++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("转换前：%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("转换后：%d %d\n", a, b);
//	return 0;
//}