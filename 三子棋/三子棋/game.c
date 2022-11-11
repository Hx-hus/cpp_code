#include"game.h"

//����Ԫ��ȫ���滻Ϊ�ո�
void init_chess(char chess[ROW ][LIN], int row, int lin)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < LIN; j++)
		{
			chess[i][j] = ' ';
		}
	}
}
//��ӡ����
void print_chess(char chess[ROW][LIN], int row, int lin)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < LIN; j++)
		{
			printf(" %c ", chess[i][j]);
			if (j < (LIN - 1))
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < (ROW - 1))
		{
			for (j = 0; j < LIN; j++)
			{
				printf("---");
				if (j < (LIN - 1))
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
	
}
//�������
void is_people(char chess[ROW][LIN], int row, int lin,char str)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("��ѡ������λ�ã�");
		scanf_s("%d%d", &i, &j);
		if (i > 0 && i <= ROW && j > 0 && j <= LIN)
		{
			if (chess[i - 1][j - 1] == ' ')
			{
				chess[(i - 1)][j - 1] = str;
			}
			else
			{
				printf("�������Ѿ���ռ�ã�������ѡ��\n");
				continue;
			}
			print_chess(chess, ROW, LIN);
			break;
		}
		else
		{
			printf("�����������ѡ��");
		}
	}
}
//�������壨�Ż�ǰ��
void is_rand(char chess[ROW][LIN], int row, int lin) 
{
	while (1)
	{
		int i = rand() % ROW;
		int j = rand() % LIN;
		if (chess[i][j] == ' ')
		{
			chess[i][j] = '#';
			print_chess(chess, ROW, LIN);
			break;
		}
	}
}
//��������(�Ż���
int is_windows(char chess[ROW][LIN], int row, int lin)
{
	int i = 0;//��
	int j = 0;//��
	printf("��������\n");
	for (i = 0; i < ROW; i++)//�ж�ÿ�е�����һ���
	{
		int count = 0;
		int x = 0;
		int y = 0;
		for (j = 0; j < LIN; j++)
		{
			if (chess[i][j] == '*' || chess[i][j] == '#')
			{
				count++;
			}
			if(chess[i][j]==' ')
			{
				x = i;
				y = j;
			}
			if (count == (WIN - 1))
			{
				chess[x][y] = '#';
				print_chess(chess, ROW, LIN);
				return 1;
			}
		}
		
	}
	for (j = 0; j< LIN; j++)//�ж�ÿ�е�����һ���
	{
		int count = 0;
		int x = 0;
		int y = 0;
		for (i = 0; i < ROW; i++)
		{
			if (chess[i][j] == '*' || chess[i][j] == '#')
			{
				count++;
			}
			if(chess[i][j]==' ')
			{
				x = i;
				y = j;
			}
			if (count == (WIN - 1))
			{
				chess[x][y] = '#';
				print_chess(chess, ROW, LIN);
				return 1;
			}
		}
	}
	int count = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i < ROW; i++)//�Խ��ߣ������ܲ���ȫ��ֻ���ж�����(x,y)��ͬ�ģ�
	{
		if (chess[i][i] == '*' || chess[i][i] == '#')
		{
			count++;
		}
		if(chess[i][j]==' ')
		{
			x = i;
			y = i;
		}
		if (count == (WIN - 1))
		{
			chess[x][y] = '#';
			print_chess(chess, ROW, LIN);
			return 1;
		}
	}
	x = 0; 
	y = 0;
	for (i = 0; i < ROW; i++)//���Խ��ߣ�����ֻ����������������жϣ�
	{
		int count = 0;
		if (chess[i][lin - i - 1] == '*' || chess[i][lin - i - 1] == '#')
		{
			count++;
		}
		if(chess[i][j]==' ')
		{
			x = i;
			y = (lin-i-1);
		}
		if (count == (WIN - 1))
		{
			chess[x][y] = '#';
			print_chess(chess, ROW, LIN);
			return 1;
		}
	}
	is_rand(chess, row, lin);//����Ҳ���Ŀ�꣬�������ӡ
}
//�ж�ʤ��
char is_win(char chess[ROW][LIN], int row, int lin, char str)
{
	int i = 0;
	int j = 0;
	int ping = 0;
	for (j = 0; j < LIN; j++)//�ж���
	{
		int count = 0;
		for (i = 0; i < ROW; i++)
		{
			if (chess[i][j] == str)
			{
				count++;
			}
			if (count == WIN)
			{
				return str;
			}
		}
	}
	for (i = 0; i < ROW; i++)//�ж���
	{
		int count = 0;
		for (j = 0; j < ROW; j++)
		{
			if (chess[i][j] == str)
			{
				count++;
			}
			if (count == WIN)
			{
				return str;
			}

		}
	}
	for (i = 0; i < ROW; i++)//�Խ���
	{
		int count = 0;
		if (chess[i][i] == str)
		{
			count;
		}
		if (count == WIN)
		{
			return str;
		}
	}
	for (i = 0; i < ROW; i++)//���Խ���
	{
		int count = 0;
		if (chess[i][lin - i - 1] == str)
		{
			count++;
		}
		if (count == WIN)
		{
			return str;
		}
	}
	for (i = 0; i < ROW; i++)//�ж�ƽ��
	{
		for (j = 0; j < LIN; j++)
		{
			if (chess[i][j] != ' ')
			{
				ping++;
			}
			if (ping == PING  )
			{
				return '0';
			}
		}
	}	
}
