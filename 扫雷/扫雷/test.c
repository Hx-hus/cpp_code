#define _CRT_SECURE_NO_WARNINGS 1 

#include"game.h"

//��ʼ�˵�
void is_start()
{
	printf("**********************\n");
	printf("*****   1����ʼ  *****\n");
	printf("*****   0���˳�  *****\n");
	printf("**********************\n");
}
//��Ϸʵ��ģ��          
void game()
{
	//��������һ������ҿ���һ����������
	char mine[ROWS][LINS];//��
	char board[ROWS][LINS];//���
	//��ʼ������
	init_board(mine, ROWS, LINS, '0');
	init_board(board, ROWS, LINS, '*');
	//��ӡ����
	print_board(board, ROW, LIN);
	//����
	bury_mine(mine, ROW, LIN);
	print_board(mine, ROW, LIN);
	//�Ų������Ƿ�Ϸ�
	while (1)
	{
		int x = 0;
		printf("ѡ���Ų飨1�����ǲ��죨2��:>");
		scanf("%d", &x);
		if (x == 1)
		{
			int win = 0;
			int i = 0;
			int j = 0;
			scanf("%d%d", &i, &j);
			int legal = brush_legal(board, i, j);
			if (legal == 1)
			{
				
				//����
				int n = is_or_no(mine, i, j);
				if (n == 1)
				{
					brush_mine(board, mine, i, j);
					print_board(board, ROW, LIN);
					win = win_mine(board, ROWS, LINS);
					if (win == 1)
					{
						printf("���׳ɹ�\n");
						break;
					}
				}
				else
				{
					printf("�㱻ը���ˣ���Ϸ����\n");
					break;
				}
			}
			else
			{
				printf("�������Ѿ����Ų���߳����Ų鷶Χ��������ѡ��\n");
			}
		}
		else if (x == 2)
		{
			int win = 0;
			int i = 0;
			int j = 0;
			scanf("%d%d", &i, &j);
			int legal = brush_legal(board, i, j);
			if (legal == 1)
			{
				int n = flag(board, mine, i, j);
				if (n == 1)
				{
					win++;
				}
				if (win == 10)
				{
					printf("���׳ɹ�\n");
					break;
				}
			}
			else
			{
				printf("�������Ѿ����Ų���߳����Ų鷶Χ��������ѡ��\n");
			}
		}
		else
		{
			printf("ѡ���������ѡ��\n");
		}
	}
}
void test()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		is_start();
		printf("��ѡ��");
		scanf_s("%d", &i);
		if (i == 1)
		{
			game();
			printf("��ʼ��Ϸ\n");
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