#include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int arr[50] = { 0 };
	scanf_s("%d", &a);
	for (i = 0; i < a; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &n);
	for (i = 0; i < a; i++)
	{
		if (arr[i] != n)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	scanf_s("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//	for (j = 0; j < m; j++)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10] = { 0 };
//	scanf_s("%d", &i);
//	while (i)
//	{
//		arr[j] = i % 6;
//		i /= 6;
//		j++;
//	}
//	for (--j; j >= 0; j--)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
//}