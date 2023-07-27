#pragma once

#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int QuDataType;

typedef struct queue
{
	QuDataType* data;
	int size;
	int capacity;
}Qu;

void QuInit(Qu* qu);				//��ʼ��
void QuDeQuroy(Qu* Qu);				//����
void QuPush(Qu* qu, QuDataType x);	//����
bool Quempty(Qu* qu);				//�п�
void Qupop(Qu* qu);					//ɾ��

