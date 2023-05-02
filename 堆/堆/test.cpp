#define _CRT_SECURE_NO_WARNINGS 1 

#include"heap.h"

void down(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;
		}

		if (a[child] > a[parent])
		{
			swap(a[child], a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
// 对数组进行堆排序
void HeapSort(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		down(a, n ,i);
	}
	int end = n - 1;
	while (end > 0)
	{
		swap(a[end], a[0]);
		down(a, end, 0);
		--end;
	}
}