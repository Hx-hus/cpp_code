#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct st_type
{
    int i;
    int a[0];//ÈáÐÔÊý×é
}st_type;

int main()
{
    printf("%d", sizeof(st_type));
    return 0;
}
//int my_atoi(const char* str)
//{
//	assert(str);
//	int num = 0;
//	int flag = 1;
//	if (!*str)
//	{
//		return 0;
//	}
//	while (*str == ' ')
//	{
//		str++;
//	}
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	while (*str >= '0' && *str <= '9')
//	{
//		num = num * 10 + *str - '0';
//		str++;
//	}
//	return flag*num;
//}
//
//int main()
//{
//	char* ch = "-12345678";
//	int num = 0;
//	num = my_atoi(ch);
//	printf("%d", num);
//	return 0;
//}