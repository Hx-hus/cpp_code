#pragma once

#include<assert.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

typedef int StDataType;


typedef struct stack
{
	StDataType* data;		//���ݴ��
	int top;				//ջ���±� or ջ��Ԫ�ظ���
	int capacity;			//ջ����
}St;

void StInit(St* st);						//��ʼ��
void StDestroy(St* st);						//����
void StPush(St* st, StDataType x);			//��ջ
bool StEmpty(St* st);						//�п�
void Stpop(St* st);							//��ջ
int StSize(St* st);							//ջ��Ԫ�ظ���
StDataType StTop(St* st);					//ջ��Ԫ��
