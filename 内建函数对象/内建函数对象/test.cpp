#define _CRT_SECURE_NO_WARNINGS 1 

#include<functional>
#include<iostream>
using namespace std;

int _a, _b;
void test1()
{
	//�ӷ�
	plus<int> a;
	cin >> _a >> _b;
	int add = a(_a, _b);
	cout <<"��Ӻ�" << add << endl;
	//����
	minus<int> b;
	cin >> _a >> _b;
	int min = b(_a, _b);
	cout <<"�����" << min << endl;
	//�˷�
	multiplies<int> c;
	cin >> _a >> _b;
	int mul = c(_a, _b);
	cout <<"��˺�" << mul << endl;
	//����
	divides<int> d;
	cin >> _a >> _b;
	int div = d(_a, _b);
	cout << "�����" << div << endl;
	//ȡģ
	modulus<int> e;
	cin >> _a >> _b;
	int mod = e(_a, _b);
	cout <<"ȡģ��" << mod << endl;
	negate<int> f;
	cin >> _a;
	int neg = f(_a);
	cout <<"ȡ����" << neg << endl;
}
int main()
{
	test1();
	return 0;
}