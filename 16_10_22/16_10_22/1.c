#include<stdio.h>

int main()
{
	int l = 0;//长度
	int m = 0;//要砍树的区域
	int u = 0; //起始点
	int v = 0;//终点
	int s = 0;//最后剩多少树
	scanf_s("%d%d", &l, &m);
	for (int a = 1; a <= m; a++)
	{
		scanf_s("%d%d", &u, &v);
		s = l -(v-u);
	}
	printf("%d", s);
	return 0;
}

//int main()
//{
//	int arr1[10];//定义十个苹果
//	int b = 0;//伸手能达到的最大高度
//	int c = 0;//能拿到的苹果数量
//	int d = 0;//踩上板凳能够到的最大高度
//	int e = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr1[i]);//输入苹果高度
//	}
//	scanf_s("%d", &b);
//	d = b + 30;
//	for (int n = 0; n <= 10; n++)
//	{
//		
//		if (d >= arr1[e])
//		{
//			c++;
//		}
//		e++;
//	
//	}
//	printf("%d", c);
//	return 0;
//}






//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a % 5 == 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}
//

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf_s("%d%d", &a, &b);
//	c = a / b;
//	d = a % b;
//	printf("%d %d", c, d);
//	return 0;
//}
//
