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

void QuInit(Qu* qu);				//初始化
void QuDeQuroy(Qu* Qu);				//销毁
void QuPush(Qu* qu, QuDataType x);	//插入
bool Quempty(Qu* qu);				//判空
void Qupop(Qu* qu);					//删除

