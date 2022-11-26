#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int main()
{
	int arr[10][10] = { 0 };
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{ 
		int j = 0;
		for (j = 0; j < n; j++)
		{
			scanf("%d", arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{

	}
	return 0;
}
//int main()
//{
//	int Add = 0;
//	int a = 0;
//	int i = 0;
//	int n = 0;
//	int a1 = 0;
//	scanf("%d%d", &a, &n);
//	a1 = a;
//	for (i = 0; i < n; i++)
//	{
//		Add += a;
//		a = a * 10 + a1;
//	}
//	printf("%d", Add);
//	return 0;
//}