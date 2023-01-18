#define _CRT_SECURE_NO_WARNINGS 1 

#include<string>
#include<iostream>
using namespace std;

class man
{
public:
	//构造函数，初始化列表
	man(string a, int b, string c) :_name(a), age(b), car(c)
	{

	}
	
	//属性
	string _name;//名字
	int age;//年龄
	string car;//汽车
};
int main()
{
	man m1("狗蛋", 18, "鬼火");
	return 0;
}

//class A
//{
//public:
//	A()
//	{
//		cout << "A的构造函数" << endl;
//	}
//	A(A &c)
//	{
//		cout << "拷贝构造函数" << endl;
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