#include<stdio.h>

void jiemian()
{
	printf("*****************************\n");
	printf("****     1. ��ʼ��Ϸ     ****\n");
	printf("****     0. �˳���Ϸ     ****\n");
	printf("*****************************\n");
}

int mian()
{
	int a = 0;
	do
	{
		jiemian();
		if (a == 1)
		{
			printf("��ʼ��Ϸ");

		}
		else if (a == 0)
		{
			printf("�˳���Ϸ");
		}
		else
		{
			printf("�����������ѡ��");
		}

	} while (a == 0);
	return 0;
}