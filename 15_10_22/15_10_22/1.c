#include<stdio.h>

//int main()
//{
//	int k = 0;
//	float Sn = 0;
//	int n = 1;
//	scanf_s("%d", &k);
//	for (Sn = 1.0; Sn <= k; n++)
//	{
//		Sn = Sn + 1.0 / n;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}
//int sushu(int b)
//{
//	int c = 0;
//	for (c = 2; c < b; c++)
//	{
//	if (b % c == 0)
//			return 0;aaa
//		return 1;
//
//	}
//	
//}
//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (sushu(a) == 1)
//			printf("%d ",a);
//	}
//
//	return 0;
//}
//

//int my_strlen(char* chr)//用自定义函数去实现strrlen
//{
//	int b = 0;
//	while (*chr != '\0')
//	{
//		b++;
//		*chr++;
//	}
//	return b;
//}
//
//
//int main()
//{
//	char ch[] = "tianyao";
//	int c = my_strlen(ch);
//	printf("c = %d", c);
//	return 0;
//}
//

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int fi = fib(n);
//	printf("%d\n", fi);
//	return 0;
//}