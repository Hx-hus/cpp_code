#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 101; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				;
			else
				printf("%d ", i);
			break;
		}
	}
}

//void jiemian()
//{
//	printf("*****************************\n");
//	printf("****     1. ��ʼ��Ϸ     ****\n");
//	printf("****     0. �˳���Ϸ     ****\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	while (1)
//	{
//		if(a)
//
//
//
//
//	}
//}
//
//int main ()
//{
//	int a = 0;
//
//	do
//	{
//		jiemian();
//		scanf_s("%d", &a);
//		if (a == 1)
//		{
//			printf("��ʼ��Ϸ");
//			game();
//		}
//		else if (a == 0)
//		{
//			printf("�˳���Ϸ");
//		}
//		else
//		{
//			printf("�����������ѡ��");
//		}
//
//
//	} while (a != 0);
//	return 0;
//}