#define _CRT_SECURE_NO_WARNINGS 1 

#include<string>
#include<iostream>
using namespace std;

//��
class people
{
public:
	people()//�鿴�Ƿ����
	{
		cout << "�����ڹ��캯������" << endl;
	}
	virtual ~people() = 0;//�鿴�Ƿ����
	virtual void come() = 0;//���麯��
};
people::~people()
{
		cout << "������������������" << endl;
}
//����
class man :public people
{
public:
	man(string _name)//�鿴�Ƿ����
	{
		cout << "�����ڹ��캯������"	<< endl;
		this->_name = new string(_name);//�����ֽ��г�ʼ��
	}
	~man()//�鿴�Ƿ����
	{
		if (_name != NULL)
		{
			cout << "������������������" << endl;
			delete _name;
			_name = NULL;
		}
	}
	void come()
	{
		cout <<*_name<<"����" << endl;
	}
	string* _name;//��ָ������������
};

void test1()
{
	people p;
}
int main()
{
	test1();
	return 0;
}
//class drink
//{
//public:
//	virtual void dele() = 0;
//};
//class mike :public drink
//{
//public:
//	void dele()
//	{
//		cout << "ţ������" << endl;
//	}
//};
//class orange :public drink
//{
//public:
//	void dele()
//	{
//		cout << "��֭����" << endl;
//	}
//};
//class coke :public drink
//{
//public:
//	void dele()
//	{
//		cout << "��������" << endl;
//	}
//};
//void test1()
//{
//	mike d;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	virtual void a1()
//	{
//		cout << "A�ڵ���" << endl;
//	}
//};
//
//class A1 :public A
//{
//public:
//	void a1()
//	{
//		cout << "A1�ڵ���" << endl;
//	}
//};
//
//void test1()
//{
//	cout << sizeof(A) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}