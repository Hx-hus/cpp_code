#include<stdio.h>

int main()
{
	printf("                   {������}                                  }\n");
	printf("                   |      |���봦������CPU��                 |\n");
	printf("                   |������}    {����洢��(RAM)              |����\n");
	printf("          {Ӳ��ϵͳ|      {����|                             |\n");
	printf("          |        |�洢��|    {ֻ���洢��(ROM)              }\n");
	printf("          |        |      {���棺Ӳ�̡�U�̡����̵�           }\n ");
	printf("          |        |�����豸�����̡���ꡢɨ���ǡ���Ͳ��     |����\n");
	printf("�����ϵͳ|        {����豸����ʾ������ӡ�������䡢������   }\n");
	printf("          |                 {����ϵͳ��Windows��Linux��Mac Os��\n");
	printf("          |        {ϵͳ���|���Դ�����򣺻����򡢽��ͳ��򡢱������\n");
	printf("          |        |        {���ݿ����ϵͳ��Access��SQL Server��Oracle��\n");
	printf("          {���ϵͳ|\n");
	printf("                   |        {�칫�����WPS office��MS office��\n");
	printf("                   {Ӧ�����|��Ϣ����ϵͳ�����ʹ������¹����\n");
	printf("                            {������������AutoCAD��Por/Emgineer��\n");
	return 0;
}
//void maopao_paixu(int arr[], int sz)
//{
//	int j = 0;
//	int  i = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (i = 0; i < sz - 1 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tihuan = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tihuan;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 90,38,34,27,162,487,293 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	maopao_paixu(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void init(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int  arr[])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void reverse(int arr[])
//{
//	int left = 0;
//	int sz = strlen(arr);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int i = arr[left];
//		arr[left] = arr[right];
//		arr[right] = i;
//		left++;
//		right++;
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	init(arr);
//	print(arr);
//	reverse(arr);
//	return 0;
//}

//void exch(int x[5], int y[5])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int ex = y[i];
//		y[i] = x[i];
//		x[i] = ex;
//	}
//}
//int main()
//{
//	int A[5] = { 1,2,3,4,5 };
//	int B[5] = { 5,4,3,2,1 };
//	int i = 0;
//	exch(&A, &B); 
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", A[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", B[i]);
//	}
//	printf("\n");
//	return 0;
//}