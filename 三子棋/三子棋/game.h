#pragma once

//ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//����ĳ���
#define ROW 20//��
#define LIN 20//��
#define WIN 3//������һ��ʤ��
#define PING ROW*LIN//�����ж��ٸ�����

//ͷ�ļ�����������
void init_chess(char chess[ROW][LIN],int row, int lin);//��ʼ������
void print_chess(char chess[ROW][LIN], int row, int lin);//��ӡ����
void is_people(char chess[ROW][LIN], int row, int lin,char str);//�������
void is_rand(char chess[ROW][LIN], int row, int lin);//�����������
int  is_windows(char chess[ROW][LIN], int row, int lin);//�������壨�Ż��󣬽������������壩
char is_win(char chess[ROW][LIN], int row, int lin, char str);//�ж�ʤ��