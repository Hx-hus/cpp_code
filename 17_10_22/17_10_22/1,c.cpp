#include<stdio.h>

//int main()
//{
//	double a, b, c;
//	double d = 0;
//	double e = 0;
//	scanf_s("%lf%lf%lf", &a, &b, &c);
//	d = a + b + c;
//	e = d / 3;
//	printf("%.2lf %.2lf", d, e);
//	return 0;
//}

//

//
//

int main()
{
	int a = 0;
	while (scanf_s("%d", &a) != EOF)
	{
		int b = a % 2;
		if (b == 0)
			printf("Even\n");
		else
			printf("Odd\n");
	}
	
		return 0;
}