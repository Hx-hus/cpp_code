#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int is_prime(int sum)
{
	if (sum <= 1) return 0;//素数必须是大于1的自然数
	for (int i = 2; i < sum / 2; i++)//对于一个数而言，当比它的一半都大的时候，后面就不可能出现可以整除的数了
		if (sum % i == 0) //找到可以整除的数，不是素数直接返回
			return 0;
	return 1;
}

int main()
{
	int sum = 0;
	scanf("%d", &sum);
	int ans = is_prime(sum);
	if (ans == 0) printf("不是");
	else printf("是");
	return 0;
}