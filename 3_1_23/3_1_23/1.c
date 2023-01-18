#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

size_t my_strlen3(const char* ch)
{
	assert(ch);
	if (*ch)
	{
		return 1 + my_strlen3(ch + 1);
	}
	return 0;
}
int main()
{
	char ch[] = "asdcfdgfg";
	//int len1 = my_strlen1(ch);
	//int len2 = my_strlen2(ch);
	int len3 = my_strlen3(ch);
	//printf("%d\n", len1);
	//printf("%d\n", len2);
	printf("%d\n", len3);
	return 0;
}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	int arr[500] = { 0 };
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			arr[count] = i;
//			count++;
//		}
//	}
//	for (i = 0; i < count - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < count - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("%d", arr[count-1]);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int arr[100] = { 0 };
//	int arr1[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		count = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i] != arr1[j])
//			{
//				count++;
//			}
//			if (count == n)
//			{
//				arr1[a] = arr[i];
//				m++;
//				a++;
//			}
//		}
//	}
//	for (i = 0; i < m - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m - 1 - i; j++)
//		{
//			if (arr1[j] > arr1[j + 1])
//			{
//				int tmp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = tmp;
//			}
//		}
//	}
//	printf("%d\n", m);
//	for (i = 0; i < m; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int ch[100000] = { 0 };
//	int count = 0;
//	int i = 0;
//	int u = 0;
//	int v = 0;
//	int l = 0;
//	int m = 0;
//	scanf("%d%d", &l, &m);
//	for (i = 0; i < l; i++)
//	{
//		ch[i] = 0;
//	}
//	while(m--)
//	{
//		scanf("%d%d", &u, &v);
//		int j = 0;
//		for ( j= u; j <= v; j++)
//		{
//			ch[j] = 1;
//		}
//	}
//	for (i = 0; i <= l; i++)
//	{
//		if (ch[i] == 0)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
