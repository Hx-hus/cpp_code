#include<stdio.h>
#include<string.h>

int main()
{
	printf("������ѧ\n");
	int a = 0;
	int b = 0;
	printf("���Ŭ��ѧϰc++��(ѡ��1or0)\n");
	scanf_s("%d\n", &a);
	if (a == 1)
	{
		while (b < 20000)
		{
			printf("Ŭ��ѧϰc++\n",b);
			b++;
		}
		if (b >= 20000)
			printf("��offer\n");
	}
	else
	{
		printf("�����ӳ�\n");
	}
	return 0;
}

//int main()
//{
//	int a = 0;
//	printf("����һ���������ж�Ϊ�Ƿ�Ϊ����\n");
//	scanf_s("%d\n", &a);
//	if (a % 2 == 1)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return