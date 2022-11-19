#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main()
{
	int i = 0;
	char arr[12] = "hello world";
	while (i < 12)
	{
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}
//int main()
//{
//	printf("hello world");
//	return 0;
//}