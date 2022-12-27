#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int Add(int sum1, int sum2)
{
	int num = sum1 + sum2;
	return num;
}
//
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	scanf("%d%d", &sum1, &sum2);
//	int num = Add(sum1, sum2);
//	printf("%d", num);
//	return 0;
//}
int main()
{
	int sum1 = 0;
	int sum2 =0;
	int num = 0;
	scanf("%d%d", &sum1, &sum2);
	num = sum1 + sum2;
	printf("%d", num);
	return 0;
}