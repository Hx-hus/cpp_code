#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

void func(char* p) { p = p + 1; }
int main()
{
	char s[] = { '1', '2', '3', '4' };
	func(s);
	printf("%c", *s);
	return 0;
}
//int main()
//{
//	char para[100];
//	void* p = malloc(100);
//	printf("%d, %d\n", sizeof(para), sizeof(p));
//	return 0;
//}
//int main()
//{
//	int value = 1024;
//	char condition = *((char*)(&value));
//	if (condition)value += 1; condition = *((char*)(&value));
//	if (condition)value += 1; condition = *((char*)(&value)); 
//	printf("%d %d", value, condition);
//	return 0;
//}
//int main()
//{
//	char a = 101;
//	int sum = 200;
//	a += 27;
//	printf("%d", a);
//
//	return 0;
//}