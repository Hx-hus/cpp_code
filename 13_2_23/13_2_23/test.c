#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

#define MUL(x,y) ((x)*(y))

int main()
{
	printf("%d", 3 * MUL(3+3, 4+4));
	return 0;
}