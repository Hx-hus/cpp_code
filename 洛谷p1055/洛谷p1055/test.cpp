#define _CRT_SECURE_NO_WARNINGS 1 

#include <iostream>
#include <cstring>
using namespace std;

char s[14];
char c;
int h = 0;
int k = 0;
int main()
{
	cin >> s;
	for (int i = 0; i < 11; i++)
	{
		if (s[i] != '-')//������-��ʱ�������Ȼ����мӳ˲���
		{
			k++;
			h += k * (s[i] - '0');//��ASCII�뽫�ַ���������
		}
	}
	h %= 11;//ȡģ11���õ�������
	if (h == 10)
	{
		c = 'X';//�����10��ʱ��ֵX
	}
	else
	{
		c = h + '0';//��h����ַ���ֵ��c

	}
	if (c == s[12])
	{
		cout << "Right" << endl;
	}
	else
	{
		s[12] = c;
		cout << s;
	}
	return 0;
}