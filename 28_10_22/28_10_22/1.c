#include<stdio.h>


void main()
{
	double a = 0, b = 0;
	double d = 52.8;
	double e = 2899.0;
	double f = (int)(a * d / 99);
	printf("请输入书本的数量：");
	scanf_s("%d", &a);
	printf("请输入手机的数量：");
	scanf_s("\n%d", &b);
	if (a < 0 || b < 0)
	{
		printf("商品数量必须大于0\n");
	}

	else if (a > 1000 || b > 1000)
	{
		printf("商品的数量不能大于1000\n");

	}
	printf("总价为：%.1lf\n", e * b + a * d);
	printf("请选择优惠的方案：\n A.每满99减10元\n B.满58减5元,满116减10元，满232减20元\n C.不使用活动优惠\n");
	char c = 0;
	scanf_s("%c\n", c);

	switch (c)
	{
	case'A':

		printf("总价为：%.1lf", e * b + a * d - f * 10);
		break;
	case'B':
		if (a * b >= 58 && a * b < 116)
		{
			printf("总价为：%.1lf", b * e + a * b - 5);
		}
		else if (a * b >= 116 && a * b < 232)
		{
			printf("总价为：%.1lf", b * e + a * b - 10);
		}
		else if (a * b >= 232)
		{
			printf("总价为：%.1lf", b * e + a * b - 10);
		}
		break;
	default:
		printf("总价为：%.1lf", e * b + a * d);
		break;
	}
}



//int main()
//{
//	int n = 0;//前面多少人
//	int b = 0;
//	int c = 0;
//	scanf_s("%d", &n);
//	b = n / 12;
//	c = 4 * b + 2;
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	long long j = 0;
//	scanf_s("%d", &i);
//	for (n = 0; n <= i;n++)
//	{
//		 j+= n;
//	}
//	printf("%ld", j);
//	return 0;
//}
