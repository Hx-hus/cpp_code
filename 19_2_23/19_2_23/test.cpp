#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

#define MAX(A,B) ((A)>(B)?(A):(B))
#undef MAX
#define MAX(A,B) ((A)<(B)?(B):(A))

int main()
{
	int a = 1;
	int b = 2;
	int c = MAX(a++, b++);
	printf("a= %d b= %d c=%d", a, b, c);
	return 0;
}