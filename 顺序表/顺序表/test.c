#define _CRT_SECURE_NO_WARNINGS 1 

#include"SeqLish.h"

int main()
{
	SeqList  a;
	SeqListInit(&a);
	SeqListDestroy(&a);
	for (int i = 0; i < 5; i++)
	{
		SeqListPushBack(&a, i);
	}
	for (int i = 5; i < 10; i++)
	{
		SeqListPushFront(&a, i);
	}
	SeqListPopFront(&a);
	SeqListPopBack(&a);	
	SeqListPrint(&a);
	SeqListDestroy(&a);

	return 0;
}