#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<string.h>
#include<assert.h>

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int month_day[12] = { 31,59,90,120,151,181,212,243,273,304,334,365 };
	scanf("%d%d%d", &year, &month, &day);
	if (month == 1)
	{
		printf("%d", day);
	}
	else
	{
		if (month>2)
		{
			if (year % 4 == 0 & year % 100 != 0 || year % 400 == 0)
			{
				printf("%d", month_day[month - 2] + 1 + day);
			}
			else
			{
				printf("%d", month_day[month - 2] + day);
			}
		}
		else
		{
			printf("%d", month_day[month-2]+day);
		}
	}
	
	return 0;
}
//int* printNumbers(int n, int* returnSize) {
//	int i = 0;
//	int count = 0;
//	int arr[10000] = { 0 };
//	while (1)
//	{
//		while (1)
//		{
//			if (i < 10)
//			{
//				count++;
//				break;
//			}
//			else
//			{
//				i /= 10;
//				count++;
//			}
//		}
//		if (count <= n)
//		{
//			arr[i] = i;
//			i++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return arr;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100000] = { 0 };
//	int* ar = printNumbers(n, arr);
//	printf("[");
//	int i = 0;
//	while (1)
//	{
//		printf("%d", *(ar+i));
//		i++;
//	}
//	printf("]");
//}
//int my_long(int i)
//{
//	if (i < 10)
//	{
//		return 1;
//	}
//	else
//	{
//		i /= 10;
//		return 1+my_long(i);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	printf("[");
//	while (1)
//	{
//		int j=my_long(i);
//		if (j <= n)
//		{
//			printf("%d ", i);
//			i++;
//		}
//		else
//		{
//			printf("]");
//			break;
//		}
//	}
//	return 0;
//}
//int my_strlen(char* ch)
//{
//	assert(ch);
//	int count = 0;
//	while (1)
//	{
//		if (*ch != '\0')
//		{
//			count++;
//			ch++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char ch[20] = { 0 };
//	gets(ch);
//	printf("%d", my_strlen(ch));
//	return 0;
//}
//void my_strcpy(char* ch1, const char* ch2)
//{
//	assert(ch1);
//	assert(ch2);
//	while (1)
//	{
//		if (*ch2 != '\0')
//		{
//			*ch1++ = *ch2++;
//		}
//		else
//		{
//			break;
//		}
//
//	}
//	*ch1 = '\0';
//}
//int main()
//{
//	char ch1[10] = { 0 };
//	char ch2[10] = { 0 };
//	gets(ch1);
//	gets(ch2);
//	my_strcpy(ch1,ch2);
//	printf("%s", ch1);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "werewrew";
//	char arr2[] = "gjskdkf";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}