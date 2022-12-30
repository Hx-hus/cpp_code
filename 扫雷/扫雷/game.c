#define _CRT_SECURE_NO_WARNINGS 1 

#include "game.h"

//初始化棋盘
void init_board(char mb[ROWS][LINS], int row, int lin, char str)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{		
		int j = 0;
		for (j = 0; j < lin; j++)
		{
			mb[i][j] = str;
		}
	}
}
//打印棋盘
void print_board(char mb[ROWS][LINS], int row, int lin)
{
	int j = 0;
	for (j = 0; j <=lin; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	int i = 0;
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		j = 0;
		for (j = 1; j <= lin; j++)
		{
			printf("%c ", mb[i][j]);
		}
		printf("\n");
	}
}
//埋雷
void bury_mine(char mine[ROWS][LINS], int row, int lin)
{
	int count = 0;
	while (1)
	{
		int i = rand() % row + 1;
		int j = rand() % lin + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count++;
		}
		if (count == MINE)
		{
			break;
		}
	}
}
//判断排查坐标是否合法
int brush_legal(char board[ROWS][LINS], int row, int lin)
{
	if (row < 10 && row>0&& lin < 10 && lin>0&& board[row][lin] == '*')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//检查所选坐标是否为雷
int is_or_no(char mine[ROWS][LINS], int row, int lin)
{
	if (mine[row][lin] == '1')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
//获取坐标周围雷的个数
int num_mine(char mine[ROWS][LINS], int row, int lin)
{
	int count = 0;
	int i = 0;
	for (i = row + 1; i > row - 2; i--)
	{
		int j = 0;
		for (j = lin - 1; j < lin + 2; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}
//递归展开排雷
void brush_mine(char board[ROWS][LINS], char mine[ROWS][LINS], int row, int lin)
{
	int count = num_mine(mine, row, lin);
	if (row > 0 && row <= ROW && lin>0 && lin <= LIN)
	{
		if (count == 0)
		{
			board[row][lin] = ' ';
			int i = 0;
			for (i = row + 1; i > row - 2; i--)
			{
				int j = 0;
				for (j = lin - 1; j < lin + 2; j++)
				{
					if (board[i][j] == '*')
					{
						brush_mine(board, mine, row, lin);
					}
				}

			}
		}
		else
		{
			board[row][lin] = '0' + count;
		}
	}
}
//判断是否胜利
int win_mine(char board[ROWS][LINS], int row, int lin)
{
	int count = 0;
	int i = 0;
	for (i = 1; i < row - 1; i++)
	{
		int j = 0;
		for (j = 1; j < lin - 1; j++)
		{
			if (board[i][j] == '*')
			{
				count++;
			}
		}
	}
	if (count == 10)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//插旗
int flag(char board[ROWS][LINS],char mine[ROWS][LINS], int row, int lin)
{
	int count = 0;
	board[row][lin] = "|>";
	if (mine[row][lin] == '1')
	{
		return 1;
	}
	return 0;
}