#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int nar_num(int num, int count)
{
	if (num > 9)
	{
		count++;
		return nar_num(num / 10,count);
	}
	else
	{
		count++;
		return count;
	}

}
int nar_count(int num, int count)
{
	if (num > 9)
	{
		count++;
		return nar_num(num / 10, count);
	}
	else
	{
		count++;
		return num * count;
	}

}
int main()
{
	int i = 0;
	int num = 0;
	int count = 0;
	for (i = 0; i < 100000; i++,count++)
	{
		count = 0;
		int na_num = nar_num(i,count);
		int num_count = nar_count(i, count);
		
	}
	return 0;
}
//int judge_day(int x, int y)
//{
//	switch (y)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		return 31;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		return 30;
//	case 2:
//		if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		{
//			return 29;
//		}
//		return 28;
//	}
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d%d", &year, &month);
//	int day = judge_day(year, month);
//	printf("%d", day);
//	return 0;
}
//int step_means(int x)
//{
//	if (x <= 2)
//	{
//		return x;
//	}
//	else
//	{
//		return step_means(x - 1) + step_means(x - 2);
//	}
//}
//int main()
//{
//	int step = 0;//台阶数
//	scanf("%d", &step);
//	int means=step_means(step);
//	printf("%d", means);
//}
//int com_fun(int x, int y)
//{
//	int ret = x ^ y;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (ret & (1<<i))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	int count=com_fun(x, y);
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//
//void printf_i(int i)
//{
//	int j = 0;
//	int x = 0;
//	printf("奇数位：");
//	for (j = 0; j < 32; j += 2)
//	{		
//		printf("%d", (i>>j )& 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (x = 1; x < 32; x += 2)
//	{	
//		printf("%d", (i>>x) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf_i(i);
//	return 0;
//}
//#include<stdio.h>
//
////将数组里面全换成空格
//void init_ch(char* p)
//{
//	int i = 0;
//	for (i = 0; i < 13; i++) 
//	{
//		*(p + i) = ' ';
//	}
//}
////打印菱形
//void printf_ch(char* p)
//{
//	int i = 6;
//	int j = 6;
//	for (i = 6, j = 6; i >= 0 && j <= 12; i--, j++)
//	{
//		*(p + i) = '*';
//		*(p + j) = '*';
//		int a = 0;
//		for (a = 0; a < 13; a++)
//		{
//			printf("%c", *(p + a));
//		}
//		printf("\n");
//	}
//	for (i = 0, j = 12; i < 6 && j > 6; i++, j--)
//	{
//		*(p + i) = ' ';
//		*(p + j) = ' ';
//		int a = 0;
//		for (a = 0; a < 13; a++)
//		{
//			printf("%c", *(p + a));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	char ch[13] = { 0 };
//	char* p = ch;
//	init_ch(p);
//	printf_ch(p);
//	return 0;
//}
//void printf_char_str(char* p, int count)
//{
//	int i = 0;
//	for (i = 0; i <= count; i++, count--)
//	{
//		char ch = *(p + i);
//		*(p + i) = *(p + count);
//		*(p + count) = ch;
//	}
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	char str[] = "abcdefg";
//	char* p = str;
//	while(*(p+i)!='\0')
//	{
//		i++;
//		count++;
//	}
//	printf_char_str(p,(count-1));
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", *(p+i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}