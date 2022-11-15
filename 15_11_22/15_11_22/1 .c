#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int n[100] = { 0 };
	scanf_s("%d", &i);
	while (1)
	{
		j++;
		if (i > 5)
		{
			n[j] = i % 6;
			i /= 6;
		}
		else if (j == 0)
		{
			printf("%d", i);
		}
		else
		{
			break;
		}
	}
	for (; j >= 0; j--)
	{
		printf("%d", n[j]);
	}
	return 0;
}
//int main ()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int add = 0;
//	int arr[10][10]={0};
//	scanf_s("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//			{
//				add = add + arr[i][j];
//			}
//		}
//	}
//	printf("%d", add);
//	return 0;
//}