#define _CRT_SECURE_NO_WARNINGS 1 

#include "seqstack.h"

//��ʼ��
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

//����
void StDestroy(St* st)
{
	assert(st);

	free(st->data);
	st->data = NULL;
	st->top = 0;
	st->capacity = 0;
}

//����
void Stdilata(St* st)
{
	assert(st);//�������Ϊ����˵��������������������
	if (st->top == st->capacity)//�����Ǵ�ŵ�Ԫ�ظ����������������һ����ʱ��˵����Ҫ����
	{
		StDataType* tmp = (StDataType*)realloc(st->data, sizeof(StDataType) * st->capacity * 2);
		if (tmp == NULL)
		{
			perror("");
			return;
		}
		st->data = tmp;//��Ϊrealloc���ٵĿռ��ʱ����ܻ�����һ���ط�
		st->capacity *= 2;
	}
}

//��ջ
void StPush(St* st, StDataType x)
{
	assert(st);

	Stdilata(st); //���ݺ����ڲ��Լ�����Ƿ���������

	st->data[st->top++] = x;//����++����ʹ����++��������Ԫ�غ�top�Ż����
}

//�п�
bool StEmpty(St* st)
{
	assert(st);
	
	return st->top == 0;
}

//��ջ
void Stpop(St* st)
{
	assert(!StEmpty(st));//�пպ����ڲ��ж�st

	st->top--;
}

//ջ��Ԫ�ظ���
int StSize(St* st)
{
	assert(st);

	return st->top;
}

//ջ��Ԫ��
StDataType StTop(St* st)
{
	assert(st);
	
	return st->data[st->top - 1];
}
