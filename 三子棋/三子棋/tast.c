#include"game.h"

//开始界面
void inter()
{
	printf("***********************\n");
	printf("*****   开始：1   *****\n");
	printf("*****   退出：0   *****\n");
	printf("***********************\n");
}
void inter1()
{
	printf("***********************\n");
	printf("*****   单人：1   *****\n");
	printf("*****   双人：2   *****\n");
	printf("***********************\n");
}
//游戏实现模块
void game()
{
	char chess[ROW][LIN]={0};
	init_chess(chess, ROW, LIN);//初始化数组
	print_chess(chess, ROW, LIN );//打印棋盘
	while (1)
	{
		is_people(chess, ROW, LIN,'*');//玩家下棋
		char win=is_win(chess, ROW, LIN, '*');//判断玩家胜利
		if (win == '*')
		{
			printf("恭喜你，取得胜利\n");
			break;
		}//玩家胜利跳出循环
		else if (win == '0')
		{
			printf("平局\n");
			break;
		}//平局跳出循环
		is_windows(chess, ROW, LIN);//电脑下棋
		char win2 = is_win(chess, ROW, LIN, '#');//判断电脑胜利
		if (win2 == '#')
		{
			printf("很遗憾，电脑胜利\n");
			break;
		}//电脑胜利跳出循环
		else if (win == '0')
		{
			printf("平局\n");
			break;
		}//平局跳出循环
	}
}
void game1()
{
	char chess[ROW][LIN] = { 0 };
	init_chess(chess, ROW, LIN);//初始化数组
	print_chess(chess, ROW, LIN);//打印棋盘
	while (1)
	{
		is_people(chess, ROW, LIN,'*');//玩家1下棋
		char win = is_win(chess, ROW, LIN, '*');//判断玩家1胜利
		if (win == '*')
		{
			printf("恭喜你，取得胜利\n");
			break;
		}//玩家1胜利跳出循环
		else if (win == '0')
		{
			printf("平局\n");
			break;
		}//平局跳出循环
		//is_rand(chess, ROW, LIN);
		is_people(chess, ROW, LIN,'#');//玩家2下棋
		char win2 = is_win(chess, ROW, LIN, '#');//判断玩家2胜利
		if (win2 == '#')
		{
			printf("很遗憾，电脑胜利\n");
			break;
		}//玩家2胜利跳出循环
		else if (win == '0')
		{
			printf("平局\n");
			break;
		}//平局跳出循环
	}
}
//实现开始游戏和退出模块
void test()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		inter();
		printf("请选择:");
		scanf_s("%d", &i);
		if (i == 1)
		{
			int i = 0;
			inter1();
			printf("请选择：");
			scanf_s("%d", &i);
			if (i == 1)
			{
				printf("开始游戏\n");
				game();
			}
			if (i == 2)
			{
				printf("开始游戏\n");
				game1();
			}
		}
		else if (i == 0)
		{
			printf("退出游戏\n");
		}
		else
		{
			printf("选择错误重新选择\n");
		}
	} while (i);
}
int main() 
{
	test();
	return 0;
}