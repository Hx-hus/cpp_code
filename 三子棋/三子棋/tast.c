#include"game.h"

//��ʼ����
void inter()
{
	printf("***********************\n");
	printf("*****   ��ʼ��1   *****\n");
	printf("*****   �˳���0   *****\n");
	printf("***********************\n");
}
void inter1()
{
	printf("***********************\n");
	printf("*****   ���ˣ�1   *****\n");
	printf("*****   ˫�ˣ�2   *****\n");
	printf("***********************\n");
}
//��Ϸʵ��ģ��
void game()
{
	char chess[ROW][LIN]={0};
	init_chess(chess, ROW, LIN);//��ʼ������
	print_chess(chess, ROW, LIN );//��ӡ����
	while (1)
	{
		is_people(chess, ROW, LIN,'*');//�������
		char win=is_win(chess, ROW, LIN, '*');//�ж����ʤ��
		if (win == '*')
		{
			printf("��ϲ�㣬ȡ��ʤ��\n");
			break;
		}//���ʤ������ѭ��
		else if (win == '0')
		{
			printf("ƽ��\n");
			break;
		}//ƽ������ѭ��
		is_windows(chess, ROW, LIN);//��������
		char win2 = is_win(chess, ROW, LIN, '#');//�жϵ���ʤ��
		if (win2 == '#')
		{
			printf("���ź�������ʤ��\n");
			break;
		}//����ʤ������ѭ��
		else if (win == '0')
		{
			printf("ƽ��\n");
			break;
		}//ƽ������ѭ��
	}
}
void game1()
{
	char chess[ROW][LIN] = { 0 };
	init_chess(chess, ROW, LIN);//��ʼ������
	print_chess(chess, ROW, LIN);//��ӡ����
	while (1)
	{
		is_people(chess, ROW, LIN,'*');//���1����
		char win = is_win(chess, ROW, LIN, '*');//�ж����1ʤ��
		if (win == '*')
		{
			printf("��ϲ�㣬ȡ��ʤ��\n");
			break;
		}//���1ʤ������ѭ��
		else if (win == '0')
		{
			printf("ƽ��\n");
			break;
		}//ƽ������ѭ��
		//is_rand(chess, ROW, LIN);
		is_people(chess, ROW, LIN,'#');//���2����
		char win2 = is_win(chess, ROW, LIN, '#');//�ж����2ʤ��
		if (win2 == '#')
		{
			printf("���ź�������ʤ��\n");
			break;
		}//���2ʤ������ѭ��
		else if (win == '0')
		{
			printf("ƽ��\n");
			break;
		}//ƽ������ѭ��
	}
}
//ʵ�ֿ�ʼ��Ϸ���˳�ģ��
void test()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		inter();
		printf("��ѡ��:");
		scanf_s("%d", &i);
		if (i == 1)
		{
			int i = 0;
			inter1();
			printf("��ѡ��");
			scanf_s("%d", &i);
			if (i == 1)
			{
				printf("��ʼ��Ϸ\n");
				game();
			}
			if (i == 2)
			{
				printf("��ʼ��Ϸ\n");
				game1();
			}
		}
		else if (i == 0)
		{
			printf("�˳���Ϸ\n");
		}
		else
		{
			printf("ѡ���������ѡ��\n");
		}
	} while (i);
}
int main() 
{
	test();
	return 0;
}