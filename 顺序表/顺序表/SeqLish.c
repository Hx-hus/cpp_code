#define _CRT_SECURE_NO_WARNINGS 1 

#include"SeqLish.h"

//˳�������
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
//��ʼ��˳���
void SeqListInit(SeqList* ps)
{
	ps->a = (SeqList*)malloc(sizeof(SeqList) * INIT_CAPACITY);//���ٿռ�
	if (ps->a == NULL)
	{
		perror("SeqList");
	}
	ps->size = 0;//˳����е�Ԫ�ظ���
	ps->capacity = INIT_CAPACITY;//˳��������Ĵ�С
}
//���˳���
void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	//ps->a = NULL;
	ps->size = ps->capacity = 0;
}
//��ӡ˳���
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
//˳���β��
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	//���ж��Ƿ���Ҫ����
	SeqListdilata(ps);
	//Ȼ���������,ע��sizeҪ����
	ps->a[ps->size++] = x;
}
//˳���ͷ��
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	//ͬ���ж��Ƿ���Ҫ����
	SeqListdilata(ps);
	//ͷ����Ҫ�Ƚ�Ԫ��ȫ������һλ����ͷ�ճ���
	for (int i = ps->size - 1; i >= 0; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}
//˳���ͷɾ
void SeqListPopFront(SeqList* ps)
{
	//���Լ��
	assert(ps->a);
	//ͷɾֻ��Ҫ��ȫ��Ԫ��ǰ��һλ����
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->size--;
}
//˳���βɾ
void SeqListPopBack(SeqList* ps)
{
	//���Լ��
	assert(ps->a);
	//ֻ��Ҫsize--���ͷ��ʲ�������Ԫ����
	ps->size--;
}
// ˳������
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	//�������飬�Ա������к�x�Ƿ���ȣ��������ȥ������x���±�
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}
//// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	//������
	SeqListdilata(ps);
	//�ж�һ��pos���ĸ�λ�ã�����������������ͷ��β�壬�ͽ���ͷ���β��
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	//��ͬ����
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