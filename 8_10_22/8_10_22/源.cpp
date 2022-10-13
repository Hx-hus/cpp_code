#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个有序数组，注意必须为有序数组
	int a = 1;//此处定义出你要找的数字
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int left = 0;
	while (left <= right)
	{
		int z = (left + right) / 2;
		if (arr[z] < a)
		{
			left = z + 1;

			if (arr[z] > a)
			{
				right = z - 1;
			}
			else
			{
				printf("找到目标");
				break;
			}
		}
		if (left > right)
			printf("该数组没有所找目标");
		return 0;
	}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	for (c = 1; c <= 10; c++)
//	{
//		b *= c;"
//		a = a + b;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()

//	int a = 0;
//	int b = 1;
//	int c;
//	int d = 0;
//	scanf_s("%d\n", &a);
//	for (c = 1; c <= 10; c++)
//	{
//		b = 1;
//		for (a=1; a <= c; a++)
//		{
//			b *= a;
//		}
//		d = d + b;
//	}
//	printf("%d", d);
//
//	return 0;
//}
//int main()
//{
//	int a;
//	long long num = 1;
//	printf("请输入一个整数\n");
//	scanf_s("%d\n", &a);
//	for (; a > 0; a--)
//	{
//		num *= a;
//	}
//	printf("%d", num);
//	return 0;
//}
