#include<stdio.h>

int main()
{

    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int a = 2;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int right = sz - 1;
    int left = 0;
    while (left <= right)
    {
        int z = (left + right) / 2;
        if (arr[z] < a)
        {
            left = z + 1;
        }
        else if (arr[z] > a)
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
//	int i = 0;
//	int a = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			a++;
//		if (i / 10 == 9)
//			a++;
//	}
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	double a = 0;
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 2 == 1)
//			a = a + (1.0/n);
//		if (n % 2 == 0)
//			a = a - (1.0/n);
//	}
//	printf("%f", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0 };
//	int a = 0;
//	int i= 0;
//	for (i = 0; i < 9; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (a = 0; a < 9; a++)
//	{
//		if (arr[a] > arr[a + 1])
//		{
//			int b = arr[a];
//			arr[a] = arr[a + 1];
//			arr[a + 1] = b;
//		}
//		printf("%d", arr[9]); 
//	}
//	
//	return  0;
//}