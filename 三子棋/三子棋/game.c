#include"game.h"

//数组元素全部替换为空格
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
//打印棋盘
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
//玩家下棋
void is_people(char chess[ROW][LIN], int row, int lin,char str)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("请选择落子位置：");
		scanf_s("%d%d", &i, &j);
		if (i > 0 && i <= ROW && j > 0 && j <= LIN)
		{
			if (chess[i - 1][j - 1] == ' ')
			{
				chess[(i - 1)][j - 1] = str;
			}
			else
			{
				printf("该坐标已经被占用，请重新选择\n");
				continue;
			}
			print_chess(chess, ROW, LIN);
			break;
		}
		else
		{
			printf("输入错误，重新选择");
		}
	}
}
//电脑下棋（优化前）
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
//电脑下棋(优化后）
int is_windows(char chess[ROW][LIN], int row, int lin)
{
	int i = 0;//行
	int j = 0;//列
	printf("电脑下棋\n");
	for (i = 0; i < ROW; i++)//判断每行的连在一起的
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
	for (j = 0; j< LIN; j++)//判断每列的连在一起的
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
	for (i = 0; i < ROW; i++)//对角线（但功能不完全，只能判断坐标(x,y)相同的）
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
	for (i = 0; i < ROW; i++)//反对角线（功能只能作用于三子棋的判断）
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
	is_rand(chess, row, lin);//如果找不到目标，就随机打印
}
//判断胜利
char is_win(char chess[ROW][LIN], int row, int lin, char str)
{
	int i = 0;
	int j = 0;
	int ping = 0;
	for (j = 0; j < LIN; j++)//判断列
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
	for (i = 0; i < ROW; i++)//判断行
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
	for (i = 0; i < ROW; i++)//对角线
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
	for (i = 0; i < ROW; i++)//反对角线
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
	for (i = 0; i < ROW; i++)//判断平局
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
