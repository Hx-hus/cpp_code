#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int is_prime(int sum)
{
	if (sum <= 1) return 0;//���������Ǵ���1����Ȼ��
	for (int i = 2; i < sum / 2; i++)//����һ�������ԣ���������һ�붼���ʱ�򣬺���Ͳ����ܳ��ֿ�������������
		if (sum % i == 0) //�ҵ�����������������������ֱ�ӷ���
			return 0;
	return 1;
}

int main()
{
	int sum = 0;
	scanf("%d", &sum);
	int ans = is_prime(sum);
	if (ans == 0) printf("����");
	else printf("��");
	return 0;
}