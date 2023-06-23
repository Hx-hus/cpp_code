#pragma once

//头文件
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//定义的常量
#define ROW 20//行
#define LIN 20//列
#define WIN 3//几个连一起胜利
#define PING ROW*LIN//棋盘有多少个格子

//头文件中声明函数
void init_chess(char chess[ROW][LIN],int row, int lin);//初始化棋盘
void print_chess(char chess[ROW][LIN], int row, int lin);//打印棋盘
void is_people(char chess[ROW][LIN], int row, int lin,char str);//玩家下棋
void is_rand(char chess[ROW][LIN], int row, int lin);//电脑随机下棋
int  is_windows(char chess[ROW][LIN], int row, int lin);//电脑下棋（优化后，仅适用于三子棋）
char is_win(char chess[ROW][LIN], int row, int lin, char str);//判断胜利