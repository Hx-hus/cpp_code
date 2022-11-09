#include<stdio.h>

int main()
{
	printf("                   {运算器}                                  }\n");
	printf("                   |      |中央处理器（CPU）                 |\n");
	printf("                   |控制器}    {随机存储器(RAM)              |主机\n");
	printf("          {硬件系统|      {主存|                             |\n");
	printf("          |        |存储器|    {只读存储器(ROM)              }\n");
	printf("          |        |      {辅存：硬盘、U盘、光盘等           }\n ");
	printf("          |        |输入设备：键盘、鼠标、扫描仪、话筒等     |外设\n");
	printf("计算机系统|        {输出设备：显示器、打印机、音箱、耳机等   }\n");
	printf("          |                 {操作系统：Windows、Linux、Mac Os等\n");
	printf("          |        {系统软件|语言处理程序：汇编程序、解释程序、编译程序\n");
	printf("          |        |        {数据库管理系统：Access、SQL Server、Oracle等\n");
	printf("          {软件系统|\n");
	printf("                   |        {办公软件：WPS office、MS office等\n");
	printf("                   {应用软件|信息管理系统：工资管理、人事管理等\n");
	printf("                            {辅助设计软件：AutoCAD、Por/Emgineer等\n");
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