#define _CRT_SECURE_NO_WARNINGS 1 

#include "queue.h"

//��ʼ��
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

//����
void QuDeQuroy(Qu* Qu)
{
	assert(Qu);

	free(Qu->data);
	Qu->data = NULL;
	Qu->size = 0;
	Qu->capacity = 0;
}

//����
void Qudilata(Qu* Qu)
{
	assert(Qu);//�������Ϊ����˵��������������������
	if (Qu->size == Qu->capacity)//�����Ǵ�ŵ�Ԫ�ظ����������������һ����ʱ��˵����Ҫ����
	{
		QuDataType* tmp = (QuDataType*)realloc(Qu->data, sizeof(QuDataType) * Qu->capacity * 2);
		if (tmp == NULL)
		{
			perror("");
			return;
		}
		Qu->data = tmp;//��Ϊrealloc���ٵĿռ��ʱ����ܻ�����һ���ط�
		Qu->capacity *= 2;
	}
}

//����
void QuPush(Qu* qu, QuDataType x)
{
	assert(qu);

	Qudilata(qu); //���ݺ����ڲ��Լ�����Ƿ���������

	qu->data[qu->size++] = x;//����++����ʹ����++��������Ԫ�غ�size�Ż����
}

//�п�
bool Quempty(Qu* qu)
{
	assert(qu);

	return qu->size == 0;
}

//ɾ��
void Qupop(Qu* qu)
{
	assert(Quempty(qu));

	for (int i = 1; i < qu->size; i++)//�ӵ�һ��λ�ÿ�ʼ���ǵ���ͷԪ��
	{
		qu[i] = qu[i - 1];
	}
	qu->size--;
}

//��ȡ�������ж���Ԫ��
int Qusize(Qu* qu)
{
	assert(qu);

	return qu->size;
}

//��ͷԪ��
QuDataType Qutop(Qu* qu)
{
	assert(QuEmpty(qu));

	return qu->data[0];
}