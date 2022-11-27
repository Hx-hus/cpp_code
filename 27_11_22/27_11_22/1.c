#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

void odd(int* p)

int main()
{
	int arr[10] = { 0 };
	int tmp[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		tmp[i] = arr[i];
		odd(arr);
	}
	for (i = 9; i >=0; i--)
	{
		count = 9;
		if (tmp[i] % 2 == 0)
		{
			tmp[count] = tmp[i];
			count--;
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			printf("%d ", arr[i]);
		}
		else
		{
			printf("%d ", tmp[i]);
		}
	}
	return 0;
}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			num1 += arr1[i][j];
//			num2 += arr2[i][j];
//		}
//	}
//	if (num1 == num2)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 1; i < n; i++)
//	{
//		int j = 0;
//		for(j = 0; j < i; j++)
//		{
//			num += arr[i][j];
//		}
//	}
//	if (num == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}