#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<math.h>

int main()
{
	int coce = 20;
	int lid = 20;
	while(lid>2)
	{
		if (lid >= 2)
		{
			coce++;
			lid--;
		}
	}
	printf("%d", coce);
	return 0;
}
//int nar_num(int i)
//{
//	int num = 0;
//	int j[6] = {0};
//	int count = 1;
//	int tmp = 0;
//	int x = 0;
//	if (i < 10)
//	{
//		return i;
//	}
//	tmp = i;
//	while (tmp > 9)
//	{
//		count++;
//		tmp /= 10;
//	}
//	while(i)
//	{
//		num += (int)pow(i % 10,count);
//		i /= 10;
//	}
//	return num;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		int num = nar_num(i);
//		if (num == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}