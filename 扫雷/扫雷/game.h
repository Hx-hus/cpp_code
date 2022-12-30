#pragma once

//库函数的头文件
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//#define定义的宏变量
#define ROWS 11
#define LINS 11
#define ROW 9
#define LIN 9
#define MINE 10

//为实现游戏功能所使用的自定义函数
void init_board(char mb[ROWS][LINS], int row, int lin, char str);//初始化棋盘
void print_board(char mb[ROWS][LINS], int row, int lin);//打印棋盘
void bury_mine(char mine[ROWS][LINS], int row, int lin);//埋雷
int brush_legal(char board[ROWS][LINS], int row, int lin);//判断排查坐标是是否合法
int is_or_no(char mine[ROWS][LINS], int row, int lin);//检查坐标是否为雷
int num_mine( char mine[ROWS][LINS], int row, int lin);//获取坐标周围雷的个数
void brush_mine(char board[ROWS][LINS], char mine[ROWS][LINS], int row, int lin);//递归展开排雷
int win_mine(char board[ROWS][LINS], int row, int lin);//判断是否胜利
int flag(char board[ROWS][LINS], char mine[ROWS][LINS], int row, int lin);//插旗