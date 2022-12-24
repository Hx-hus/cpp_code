#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int main()
{
	char ch1[] = "hello world";
	char ch2[] = { 'h','e','l','l','o',' ','w','o','r','l','d' };
	//printf("%d", sizeof(ch));
	printf("%s\n", ch1);
	printf("%s\n", ch2);
	return 0;
}