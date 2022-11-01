#include<stdio.h>

int my_shu(int a)
{
	if (a > 9)
		my_shu(a / 10);
	printf("%d ", a % 10);
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	int arr = my_shu(a);
	printf("%d", arr);
	return  0;
}
//int my_strlen(char arr[],int i)
//{
//	if (arr[i] != '\0')
//		return my_strlen(arr, i + 1)+1;
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int i = 0;
//	int strlen = my_strlen(arr,i);
//	printf("%d", strlen);
//	return 0;
//}
//int my_Add(int a)
//{
//	if (a > 9)
//		return my_Add(a / 10) +a % 10;
//	else
//		return a;
//}
//int main ()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int Add = my_Add(a);
//	printf("%d", Add);
//	return 0;
//}

//int my_power(int n, int k)
//{
//	if (k > 1)
//		return my_power(n, k - 1) * n;
//	else
//		return n;
//}
//int main ()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n, &k);
//	int power = my_power(n, k);
//	printf("%d", power);
//	return 0;
//}