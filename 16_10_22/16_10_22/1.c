#include<stdio.h>

int main()
{
	int l = 0;//����
	int m = 0;//Ҫ����������
	int u = 0; //��ʼ��
	int v = 0;//�յ�
	int s = 0;//���ʣ������
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
//	int arr1[10];//����ʮ��ƻ��
//	int b = 0;//�����ܴﵽ�����߶�
//	int c = 0;//���õ���ƻ������
//	int d = 0;//���ϰ���ܹ��������߶�
//	int e = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr1[i]);//����ƻ���߶�
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
