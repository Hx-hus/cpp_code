#include<stdio.h>

void maopao_paixu(int arr[], int sz)
{
	int j = 0;
	int  i= 0;
	for (j = 0; j < sz - 1; j++)
	{
		for (i = 0; i < sz - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tihuan = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tihuan;
			}
		}
	}

}

int main()
{
	int arr[] = { 90,38,34,27,162,487,293 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	maopao_paixu(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//int main() 
//{
//    int a;
//    while (scanf_s("%d", &a) != EOF)
//    {
//        if (a >= 60)
//            printf("Pass");
//        else
//            printf("Fail");
//
//    }
//    return 0;
//}

//int Add(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf_s("%d%d", &x, &y);
//	int c = Add(x, y);
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//    int a, b;
//    while (scanf_s("%d %d", &a, &b) != EOF)
//    { 
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}