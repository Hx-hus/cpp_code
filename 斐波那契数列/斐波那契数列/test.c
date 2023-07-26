#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int Fib1(int sum)
{
	int x = 1;
	int y = 1;
	int z = 0;
	for (int i = 3; i <= sum; i++)
	{
		z = x + y;
		x = y;
		y = z;
	}
	return z;
}

int Fib2(int sum)
{
	if (sum < 2) return sum == 0 ? 0 : 1;//当是0的时候返回0
	return Fib2(sum - 1) + Fib2(sum - 2);
}


int main()
{
	printf("%d\n", Fib1(40));
	printf("%d\n", Fib2(40));

	return 0;
}