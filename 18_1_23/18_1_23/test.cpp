#define _CRT_SECURE_NO_WARNINGS 1 

#include<string>
#include<iostream>
using namespace std;

class man
{
public:
	//���캯������ʼ���б�
	man(string a, int b, string c) :_name(a), age(b), car(c)
	{

	}
	
	//����
	string _name;//����
	int age;//����
	string car;//����
};
int main()
{
	man m1("����", 18, "���");
	return 0;
}

//class A
//{
//public:
//	A()
//	{
//		cout << "A�Ĺ��캯��" << endl;
//	}
//	A(A &c)
//	{
//		cout << "�������캯��" << endl;
//		b = c.b;
//		d = new int(*c.d);
//	}
//	int b;
//	int* d;
//};
//void test1(A a)
//{
//
//}
//int main()
//{
//	A a;
//	cin >> a.b;
//	test1(a);
//}