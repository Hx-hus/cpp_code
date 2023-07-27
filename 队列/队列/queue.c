#define _CRT_SECURE_NO_WARNINGS 1 

#include "queue.h"

//初始化
void QuInit(Qu* Qu)
{
	assert(Qu);

	Qu->data = (QuDataType*)malloc(sizeof(QuDataType) * 4);

	if (Qu->data == NULL)
	{
		perror("malloc");
	}

	Qu->size = 0;
	Qu->capacity = 4;
}

//销毁
void QuDeQuroy(Qu* Qu)
{
	assert(Qu);

	free(Qu->data);
	Qu->data = NULL;
	Qu->size = 0;
	Qu->capacity = 0;
}

//扩容
void Qudilata(Qu* Qu)
{
	assert(Qu);//断言如果为空则说明传过来的数据有问题
	if (Qu->size == Qu->capacity)//当我们存放的元素个数和容器最大容量一样的时候，说明需要扩容
	{
		QuDataType* tmp = (QuDataType*)realloc(Qu->data, sizeof(QuDataType) * Qu->capacity * 2);
		if (tmp == NULL)
		{
			perror("");
			return;
		}
		Qu->data = tmp;//因为realloc开辟的空间的时候可能换到另一个地方
		Qu->capacity *= 2;
	}
}

//插入
void QuPush(Qu* qu, QuDataType x)
{
	assert(qu);

	Qudilata(qu); //扩容函数内部自己检查是否容量已满

	qu->data[qu->size++] = x;//后置++是先使用在++，当插入元素后size才会更新
}

//判空
bool Quempty(Qu* qu)
{
	assert(qu);

	return qu->size == 0;
}

//删除
void Qupop(Qu* qu)
{
	assert(Quempty(qu));

	for (int i = 1; i < qu->size; i++)//从第一个位置开始覆盖掉队头元素
	{
		qu[i] = qu[i - 1];
	}
	qu->size--;
}

//获取队里面有多少元素
int Qusize(Qu* qu)
{
	assert(qu);

	return qu->size;
}

//队头元素
QuDataType Qutop(Qu* qu)
{
	assert(QuEmpty(qu));

	return qu->data[0];
}