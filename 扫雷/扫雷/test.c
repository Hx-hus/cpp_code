#define _CRT_SECURE_NO_WARNINGS 1 

#include"game.h"

//开始菜单
void is_start()
{
	printf("**********************\n");
	printf("*****   1：开始  *****\n");
	printf("*****   0：退出  *****\n");
	printf("**********************\n");
}
//游戏实现模块          
void game()
{
	//两个数组一个给玩家看，一个用来埋雷
	char mine[ROWS][LINS];//雷
	char board[ROWS][LINS];//玩家
	//初始化棋盘
	init_board(mine, ROWS, LINS, '0');
	init_board(board, ROWS, LINS, '*');
	//打印棋盘
	print_board(board, ROW, LIN);
	//埋雷
	bury_mine(mine, ROW, LIN);
	print_board(mine, ROW, LIN);
	//排查坐标是否合法
	while (1)
	{
		int x = 0;
		printf("选择排查（1）还是插旗（2）:>");
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
				
				//排雷
				int n = is_or_no(mine, i, j);
				if (n == 1)
				{
					brush_mine(board, mine, i, j);
					print_board(board, ROW, LIN);
					win = win_mine(board, ROWS, LINS);
					if (win == 1)
					{
						printf("排雷成功\n");
						break;
					}
				}
				else
				{
					printf("你被炸死了，游戏结束\n");
					break;
				}
			}
			else
			{
				printf("该坐标已经被排查或者超出排查范围，请重新选择。\n");
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
					printf("排雷成功\n");
					break;
				}
			}
			else
			{
				printf("该坐标已经被排查或者超出排查范围，请重新选择。\n");
			}
		}
		else
		{
			printf("选择错误，重新选择\n");
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
		printf("请选择：");
		scanf_s("%d", &i);
		if (i == 1)
		{
			game();
			printf("开始游戏\n");
		}
		else if (i == 0)
		{
			printf("退出游戏\n");
		}
		else
		{
			printf("选择错误，重新选择\n");
		}
	} while (i);
}
int main()
{
	test();
	return 0;
}