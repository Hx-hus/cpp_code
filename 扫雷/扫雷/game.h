#pragma once

//�⺯����ͷ�ļ�
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//#define����ĺ����
#define ROWS 11
#define LINS 11
#define ROW 9
#define LIN 9
#define MINE 10

//Ϊʵ����Ϸ������ʹ�õ��Զ��庯��
void init_board(char mb[ROWS][LINS], int row, int lin, char str);//��ʼ������
void print_board(char mb[ROWS][LINS], int row, int lin);//��ӡ����
void bury_mine(char mine[ROWS][LINS], int row, int lin);//����
int brush_legal(char board[ROWS][LINS], int row, int lin);//�ж��Ų��������Ƿ�Ϸ�
int is_or_no(char mine[ROWS][LINS], int row, int lin);//��������Ƿ�Ϊ��
int num_mine( char mine[ROWS][LINS], int row, int lin);//��ȡ������Χ�׵ĸ���
void brush_mine(char board[ROWS][LINS], char mine[ROWS][LINS], int row, int lin);//�ݹ�չ������
int win_mine(char board[ROWS][LINS], int row, int lin);//�ж��Ƿ�ʤ��
int flag(char board[ROWS][LINS], char mine[ROWS][LINS], int row, int lin);//����