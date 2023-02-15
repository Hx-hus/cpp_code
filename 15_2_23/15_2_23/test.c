#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PRINT(A ,B) printf(#B"的结果是"A"\n",B);

int main()
{
	PRINT("%d",1+2);
	return 0;
}