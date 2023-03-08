#define _CRT_SECURE_NO_WARNINGS 1 

#include"SeqLish.h"

//顺序表扩容
void SeqListdilata(SeqList* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		SeqList* tmp = (SeqList*)realloc(ps->a, sizeof(SeqList) * ps->capacity * 2);
		if (tmp == NULL)
		{
			perror("dilata");
			return;
		}
		ps->a = tmp;
		ps->capacity *= 2;
	}
}
//初始化顺序表
void SeqListInit(SeqList* ps)
{
	ps->a = (SeqList*)malloc(sizeof(SeqList) * INIT_CAPACITY);//开辟空间
	if (ps->a == NULL)
	{
		perror("SeqList");
	}
	ps->size = 0;//顺序表中的元素个数
	ps->capacity = INIT_CAPACITY;//顺序表容器的大小
}
//清空顺序表
void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	//ps->a = NULL;
	ps->size = ps->capacity = 0;
}
//打印顺序表
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
//顺序表尾插
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	//先判断是否需要扩容
	SeqListdilata(ps);
	//然后插入数据,注意size要增加
	ps->a[ps->size++] = x;
}
//顺序表头插
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	//同样判断是否需要扩容
	SeqListdilata(ps);
	//头插需要先将元素全部后移一位，将头空出来
	for (int i = ps->size - 1; i >= 0; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}
//顺序表头删
void SeqListPopFront(SeqList* ps)
{
	//断言检查
	assert(ps->a);
	//头删只需要讲全部元素前移一位即可
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->size--;
}
//顺序表尾删
void SeqListPopBack(SeqList* ps)
{
	//断言检查
	assert(ps->a);
	//只需要size--，就访问不到最后的元素了
	ps->size--;
}
// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	//遍历数组，对比数组中和x是否相等，相等跳出去，返回x的下标
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}
//// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	//先扩容
	SeqListdilata(ps);
	//判断一下pos是哪个位置，如果是特殊情况，如头插尾插，就进行头插和尾插
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	//如同插入
	if (pos == 0)
		SeqListPopFront(ps);
	if (pos == ps->size)
		SeqListPopBack(ps);
	for (int i = pos+1; i < ps->size ; i++)
	{
		ps->a[i-1] = ps->a[i];
	}
	ps->size--;
}