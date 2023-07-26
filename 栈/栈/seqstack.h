#pragma once

#include<assert.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

typedef int StDataType;


typedef struct stack
{
	StDataType* data;		//数据存放
	int top;				//栈顶下标 or 栈内元素个数
	int capacity;			//栈容量
}St;

void StInit(St* st);						//初始化
void StDestroy(St* st);						//销毁
void StPush(St* st, StDataType x);			//入栈
bool StEmpty(St* st);						//判空
void Stpop(St* st);							//出栈
int StSize(St* st);							//栈内元素个数
StDataType StTop(St* st);					//栈顶元素
