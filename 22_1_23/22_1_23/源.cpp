#define _CRT_SECURE_NO_WARNINGS 1 

#include<string>
#include<iostream>
using namespace std;

//人
class people
{
public:
	people()//查看是否调用
	{
		cout << "父类内构造函数调用" << endl;
	}
	virtual ~people() = 0;//查看是否调用
	virtual void come() = 0;//纯虚函数
};
people::~people()
{
		cout << "父类内析构函数调用" << endl;
}
//男人
class man :public people
{
public:
	man(string _name)//查看是否调用
	{
		cout << "子类内构造函数调用"	<< endl;
		this->_name = new string(_name);//对名字进行初始化
	}
	~man()//查看是否调用
	{
		if (_name != NULL)
		{
			cout << "子类内析构函数调用" << endl;
			delete _name;
			_name = NULL;
		}
	}
	void come()
	{
		cout <<*_name<<"来咯" << endl;
	}
	string* _name;//用指针来管理名字
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
//		cout << "牛奶来咯" << endl;
//	}
//};
//class orange :public drink
//{
//public:
//	void dele()
//	{
//		cout << "橙汁来咯" << endl;
//	}
//};
//class coke :public drink
//{
//public:
//	void dele()
//	{
//		cout << "可乐来咯" << endl;
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
//		cout << "A在调用" << endl;
//	}
//};
//
//class A1 :public A
//{
//public:
//	void a1()
//	{
//		cout << "A1在调用" << endl;
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