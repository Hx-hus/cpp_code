#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int com_arr(int* arr, int n)
{
	int i = 0;
	int count = 0;
	while (1)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (*(arr + i) >= *(arr + i + 1))
			{
				count++;
			}
		}
		break;
	}
	if (count == n - 1 || count == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int j = com_arr(arr, n);
	if (j == 1)
	{
		printf("sorted");
	}
	else
	{
		printf("unsorted");
	}
	return 0;
}
//void bubule_sort(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-i-1; j++)
//		{
//			if (*(arr + j) > *(arr + j + 1))
//			{
//				int tmp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[2000] = { 0 };
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i <m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int j = n+m;
//	for (i = 0; i < n; i++)
//	{
//		arr3[i] = arr1[i];
//	}
//	for (i = n; i < j; i++)
//	{
//		arr3[i] = arr2[i-n];
//	}
//	bubule_sort(arr3, n + m);
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
//void part_num(int* arr, int i)
//{
//	int count = 0;
//	int n = 0;
//	int tmp_arr[100] = { 0 };
//	int tmp_arr1[100] = { 0 };
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		if ((*arr + j) % 2 != 0)
//		{
//		tmp_arr[count] = *arr + j;
//		count++;
//		}
//		else
//		{
//			tmp_arr1[n] = *arr + j;
//			n++;
//		}
//	}
//	for (j = 0; j < count; j++)
//	{
//		*(arr + j) = tmp_arr[j];
//	}
//	int count1 = count;
//	for (j = 0; j < i - count; j++)
//	{
//		*(arr + count1) = tmp_arr1[j];
//		count++;
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	int a = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	part_num(arr,a);
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}