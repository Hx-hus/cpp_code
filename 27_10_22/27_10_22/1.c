#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void jiemian()
{
	printf("*****************************\n");
	printf("****     1. ��ʼ��Ϸ     ****\n");
	printf("****     0. �˳���Ϸ     ****\n");
	printf("*****************************\n");
}
void game()
{

	int a = 0;
	int sui = rand()%100+1;//%100��ʣ�µ�����Χ�ڣ�0~99����1����һ��
	while (1)
	{
		printf("���������֣�");
		scanf_s("%d", &a);
		if (a > sui)
			printf("�´���");
		else if (a < sui)
			printf("��С��");
		else
		{
			printf("�¶���,�����\n");
			break;
		}
	}
}

int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));//ֻ�õ���һ��
	do
	{
		jiemian();
		printf("��ѡ��");
		scanf_s("%d", &a);
		if (a == 1)
		{
			printf("��ʼ��Ϸ");
			game();
		}
		else if (a == 0)
		{
			printf("�˳���Ϸ");
			break;
		}
		else
		{
			printf("�����������ѡ��");
		}


	} while (a);
	return 0;
}