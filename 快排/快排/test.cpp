#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;

const int N = 100010;
int a[N], a1[N], a2[N];//a为原数组，a1和a2是用于存放的数组
int n;
void q_sort(int a[], int l, int r)
{
	if (l >= r)return;
	//因为我们开辟了两个额外的空间，所以不需要确定分治点，只用确定x，x在数组中不一定存在
	int x = 10;
	int i = 0;
	int j = 0;
	for (int y = 0; y <= r; y++)
	{
		if (a[y] >= x)
		{
			a1[i] = a[y];
			i++;
		}
		if (a[y] < x)
		{
			a2[j] = a[y];
			j++;
		}
	}
	q_sort(a1, 0, i-1);
	q_sort(a2, 0, j-1);
	int y = 0;
	for (i; y <= i; y++)
	{
		a[y] = a1[y];
	}
	for (; y <= j; y++)
	{
		a[y] = a2[y];
	}
}
int main()
{
	cin >> n;
	//输入数组
	for (int i = 0; i < n; i++)cin >> a[i];
	//快排
	q_sort(a, 0, n - 1);
	//输出数组查看是否有序
	for (int i = 0; i < 10; i++)cout << a[i] << " ";
	return 0;
}