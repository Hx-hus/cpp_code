#define _CRT_SECURE_NO_WARNINGS 1 

#include "seqstack.h"

//初始化
void StInit(St* st)
{
	assert(st);

	st->data = (StDataType*)malloc(sizeof(StDataType) * 4);

	if (st->data == NULL)
	{
		perror("malloc");
	}

	st->top = 0;
	st->capacity = 4;
}

//销毁
void StDestroy(St* st)
{
	assert(st);

	free(st->data);
	st->data = NULL;
	st->top = 0;
	st->capacity = 0;
}

//扩容
void Stdilata(St* st)
{
	assert(st);//断言如果为空则说明传过来的数据有问题
	if (st->top == st->capacity)//当我们存放的元素个数和容器最大容量一样的时候，说明需要扩容
	{
		StDataType* tmp = (StDataType*)realloc(st->data, sizeof(StDataType) * st->capacity * 2);
		if (tmp == NULL)
		{
			perror("");
			return;
		}
		st->data = tmp;//因为realloc开辟的空间的时候可能换到另一个地方
		st->capacity *= 2;
	}
}

//入栈
void StPush(St* st, StDataType x)
{
	assert(st);

	Stdilata(st); //扩容函数内部自己检查是否容量已满

	st->data[st->top++] = x;//后置++是先使用在++，当插入元素后top才会更新
}

//判空
bool StEmpty(St* st)
{
	assert(st);
	
	return st->top == 0;
}

//出栈
void Stpop(St* st)
{
	assert(!StEmpty(st));//判空函数内部判断st

	st->top--;
}

//栈内元素个数
int StSize(St* st)
{
	assert(st);

	return st->top;
}

//栈顶元素
StDataType StTop(St* st)
{
	assert(st);
	
	return st->data[st->top - 1];
}
