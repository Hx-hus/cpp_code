#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>

using namespace std;
int a[];
int main()
{
	int n, gap;
	for (int i = 0; i < n - gap; i + gap)
	{
		int gap = 3;
		int end = i;
		int tmp = a[end + gap];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + gap] = a[end];
				end -= gap;
			}
			else
			{
				break;
			}
		}
		a[end + gap] = tmp;
	}
	return 0;
}