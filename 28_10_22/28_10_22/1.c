#include<stdio.h>


void main()
{
	double a = 0, b = 0;
	double d = 52.8;
	double e = 2899.0;
	double f = (int)(a * d / 99);
	printf("�������鱾��������");
	scanf_s("%d", &a);
	printf("�������ֻ���������");
	scanf_s("\n%d", &b);
	if (a < 0 || b < 0)
	{
		printf("��Ʒ�����������0\n");
	}

	else if (a > 1000 || b > 1000)
	{
		printf("��Ʒ���������ܴ���1000\n");

	}
	printf("�ܼ�Ϊ��%.1lf\n", e * b + a * d);
	printf("��ѡ���Żݵķ�����\n A.ÿ��99��10Ԫ\n B.��58��5Ԫ,��116��10Ԫ����232��20Ԫ\n C.��ʹ�û�Ż�\n");
	char c = 0;
	scanf_s("%c\n", c);

	switch (c)
	{
	case'A':

		printf("�ܼ�Ϊ��%.1lf", e * b + a * d - f * 10);
		break;
	case'B':
		if (a * b >= 58 && a * b < 116)
		{
			printf("�ܼ�Ϊ��%.1lf", b * e + a * b - 5);
		}
		else if (a * b >= 116 && a * b < 232)
		{
			printf("�ܼ�Ϊ��%.1lf", b * e + a * b - 10);
		}
		else if (a * b >= 232)
		{
			printf("�ܼ�Ϊ��%.1lf", b * e + a * b - 10);
		}
		break;
	default:
		printf("�ܼ�Ϊ��%.1lf", e * b + a * d);
		break;
	}
}



//int main()
//{
//	int n = 0;//ǰ�������
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
