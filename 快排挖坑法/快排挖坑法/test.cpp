#define _CRT_SECURE_NO_WARNINGS 1 

#include<algorithm>
using namespace std;

void QuickSort1(int* a, int left, int right)
{
	if (left >= right)
		return;

	int begin = left, end = right;

	//// ���ѡkey
	/*int randi = left + (rand() % (right - left));
	Swap(&a[left], &a[randi]);*/

	// ����ȡ��
	/*int midi = getmidnumi(a, left, right);
	if (midi != left)
		swap(&a[midi], &a[left]);*/

	int key = a[left];
	while (left < right)
	{
		// �ұ���С
		while (left < right && a[right] >= a[key])
			--right;

		a[key] = a[right];
		key = right;

		// ����Ҵ�
		while (left < right && a[left] <= a[key])
			++left;
		a[key] = a[left];
		key = left;
	}
	a[key] = a[left];
	key = left;
	// [begin, keyi-1] keyi [keyi+1, end] 
	// �ݹ�
	QuickSort1(a, begin, key - 1);
	QuickSort1(a, key + 1, end);
}

// ǰ��ָ�뷨
int PartSort3(int* a, int left, int right)
{
	// ����ȡ��
	int midi = GetMidNumi(a, left, right);
	if (midi != left)
		swap(a[midi], a[left]);

	int cut = left + 1, prev = left;
	while(cut <= right)
	{
		if (a[cut] < a[prev])
		{
			prev++;
			swap(a[cut], a[prev]);
		}
		if (a[cut] >= a[midi]) cut++;
	}
	swap(a[midi], a[prev]);
	return prev;
}