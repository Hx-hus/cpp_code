#include<stdio.h>

int main()
{
	int a=0, b=0, c=0;
	scanf_s("%d%d", &a, &b);
	while(a%b!=0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}
//int main()
//{
//	int nian = 0;
//	for (nian = 1000; nian <= 2000; nian++)
//	{
//		if(nian%4==0)
//		{ 
//			printf("%d ", nian);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int q = 0;
//		for (q = 2; q < i; q++)
//		{
//			if (i % q == 0)
//			{
//				printf("%d ", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a=0, b=0, c=0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int e = a;
//		a = b;
//		b = e;
//	}
//	if (a < c)
//	{
//		int e = a;
//		a = c;
//		c = e;
//	}
//	if (b < c)
//	{
//		int e = b;
//		b = c;
//		c = e;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}