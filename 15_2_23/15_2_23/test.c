#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define _ADD(A ,B) num##A+=B;

int main()
{
	int num5 = 5;
	_ADD(5, 10);
	printf("%d", num5);
	return 0;
}