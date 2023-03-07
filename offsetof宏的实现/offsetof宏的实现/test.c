#define _CRT_SECURE_NO_WARNINGS 1 
#define OFFSETOF(type,member) (int) &(((struct man*)0)->member)

#include<stdio.h>

struct man
{
	char _name[20];
	int _age;
	char _car[10];
};
int main()
{
	printf("%d\n", OFFSETOF(struct man, _name));
	printf("%d\n", OFFSETOF(struct man, _age));
	printf("%d\n", OFFSETOF(struct man, _car));
	return 0;
}