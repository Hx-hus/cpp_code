#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PRINT(A ,B) printf(#B"�Ľ����"A"\n",B);

int main()
{
	PRINT("%d",1+2);
	return 0;
}