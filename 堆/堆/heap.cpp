#define _CRT_SECURE_NO_WARNINGS 1 

#include "heap.h"
using namespace std;

//��������
void up(Heap* hp, int child)
{
	int f = (child - 1) / 2;
	while (hp->_a[child] > hp->_a[f])
	{
		swap(hp->_a[child], hp->_a[f]);
		child /= f;
		f = (child - 1) / 2;
	}
}
//�³�����
void down(Heap* hp, int father)
{
	int child = father * 2 + 1;

	while (child < hp->_size)
	{
		if (child + 1 < hp->_size && hp->_a[child] < hp->_a[child + 1]) ++child;
		if (hp->_a[father] < hp->_a[child])
		{
			swap(hp->_a[child], hp->_a[father]);
			father = child;
			child = father * 2 + 1;
		}
		else break;
	}
}
// �ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	assert(hp);

	hp = (Heap*)malloc(sizeof(Heap) * n);
	if (hp == nullptr)
	{
		perror("hp malloc");
	}

	hp->_capacity = hp->_size = n;

	for (int i = (n - 2) / 2; i >= 0; --i)
	{
		down(hp, i);
	}
}

// �ѵ�����
void HeapDestory(Heap* hp)
{
	assert(hp);

	free(hp->_a);
	hp->_a = nullptr;
	hp->_capacity = hp->_size = 0;
}
//����
void dil(Heap* hp)
{
	assert(hp);
	if (hp->_size == hp->_capacity)
	{
		Heap* tmp = (Heap*)realloc(hp->_a, sizeof(Heap) * hp->_capacity * 2);
		if (tmp == NULL)
		{
			perror("dilata");
			return;
		}
		hp = tmp;
		hp->_capacity *= 2;
	}
}
//����
void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);

	dil(hp);

	hp->_a[hp->_size] = x;

	up(hp, hp->_size);

	hp->_size++;
}
//ɾ��
void HeapPop(Heap* hp)
{
	assert(hp);

	swap(hp->_a[hp->_size - 1], hp->_a[0]);

	hp->_size--;

	down(hp, 0);
}
//ȡ�Ѷ�Ԫ��
HPDataType HeapTop(Heap* hp)
{
	assert(hp);

	return hp->_a[0];
}
// �ѵ����ݸ���
int HeapSize(Heap* hp)
{
	assert(hp);

	return hp->_size;
}
// �ѵ��п�
bool HeapEmpty(Heap* hp)
{
	assert(hp);
	
	return hp->_size == 0;
}

