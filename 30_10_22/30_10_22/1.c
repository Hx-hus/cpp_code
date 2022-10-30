#include<stdio.h>

int is_prime_number(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i != 0)
		{
			return 1;
		}
		return 0;
	}

}
int main()
{
	int number = 0;
	for (number = 100; number <= 200; number++)
	{
		if (is_prime_number(number) == 1)
			printf("%d ",number);
	}
	return 0;
}
//int is_leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year)==1)
//			printf("%d ", year);
//	}
//	return 0;
//}
//void is_exchange(int* x, int* y)
//{
//	int a = *x;
//	*x = *y;
//	*y = a;
//}
//int main ()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	is_exchange(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//void chengfabiao(int x)
//{
//	int d = 0;
//	int b = 0;
//	int c = 0;
//	int e = 0;
//	for (b = 1; b <= x; b++)
//	{
//		e++;
//		for (d = e; d <= x; d++)
//		{
//			c = b * d;
//			printf("%d*%d=%d ", b, d, c);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf_s("%d", &a);
//	chengfabiao(a);
//	return 0;
//}

//int main()
//{&a
//	float x = 0;
//	float y = 0;
//	float a = 0;
//	for (y = 1.5; y > -1.5; y -= 0.1)i0
//	{
//		for (x = -1.5; x < 1.5; x += 0.05)
//		{
//			a = x * x + y * y - 1;
//			putchar(a * a * a - x * x * y * y * y < 0.0f ? '*' : ' ');
//		}
//		Sleep(50);
//		system("color 0c");
//		putchar(' \n');
//	}
//	return 0;
//}