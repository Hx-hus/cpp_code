#define _CRT_SECURE_NO_WARNINGS 1 

#define INT_PTR int*
typedef int* int_ptr;
INT_PTR a, b;
int_ptr c, d;

#include<stdio.h>

int main()
{
	printf("%d %d %d %d", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
	return 0;
}