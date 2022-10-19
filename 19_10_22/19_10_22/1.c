#include<stdio.h>

int main()
{
	int a = 0;
	while (scanf_s("%d", &a) != EOF)
	{
		if (a > 0)
			printf("1\n");
		else if (a == 0)
			printf("0\n");
		else
			printf("-1\n");
	}
	return 0;
}

//int main()
//{
//	int seconds = 0;
//	scanf_s("%d", &seconds);
//	int xiaoshi = seconds / 3600;
//	int fen = seconds % 3600 / 60;
//	int miao = seconds - 3600 * xiaoshi - 60 * fen;
//	printf("%d %d %d ", xiaoshi, fen, miao);
//	return 0;
//}



//int main()
//{
//	int a = 0,b=0;
//	while (scanf_s("%d", &b) != EOF)
//	{
//		for (a = 0; a < b; a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	double a = 0, b = 0, c = 0, d = 0, e = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf_s("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
//		double f = a + b + c + d + e;
//		printf("%.1lf %.1lf %.1lf %.1lf %.1lf %.1lf\n", a, b, c, d, e, f);
//	}
//
//	return 0;
//}