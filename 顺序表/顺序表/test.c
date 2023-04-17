#define _CRT_SECURE_NO_WARNINGS 1 

#include"SeqLish.h"

int main()
{
	SeqList  a;
	SeqListInit(&a);

	for (int i = 0; i < 5; i++)
	{
		SeqListPushBack(&a, i);
	}
	for (int i = 5; i < 10; i++)
	{
		SeqListPushFront(&a, i);
	}
	SeqListPrint(&a);
	SeqListPopFront(&a);
	SeqListPrint(&a);
	SeqListPopBack(&a);
	SeqListPrint(&a);
	SeqListDestroy(&a);
	SeqListPrint(&a);
	return 0;
}