#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;

class A
{
public:
	int a;
	int b;
};
class AA:virtual public A
{


};
class AA1:virtual public A
{

};
class AAA :public AA, public AA1
{

};
void test1()
{
	AAA a;
	a.AA::a = 10;
	a.AA1::a = 20;
	cout << a.a << endl;
}
int main()
{
	test1();
	return 0;
}
//class A
//{
//public:
//	int _a;
//protected:
//	int _b;
//private:
//	int _c;
//};
//class A1 :public A
//{
//public:
//	int _d;
//};
//void test1()
//{
//	A1 a1;
//	cout << sizeof(a1) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	void head()
//	{
//		cout << "博客主页头部" << endl;
//	}
//	void  bottom()
//	{
//		cout << "博客主页底部" << endl;
//	}
//};
//class A1:public A
//{
//public:
//	void middle()
//	{
//		cout << "A1的博客内容" << endl;
//	}
//};
//class A2 :public A
//{
//public:
//	void middle()
//	{
//		cout << "A2的博客内容" << endl;
//	}
//};
//class A3: public A
//{
//public:
//	void middle()
//	{
//		cout << "A2的博客内容" << endl;
//	}
//};
//void test1()
//{
//	A1 a1;
//	A2 a2;
//	A3 a3;
//	a1.head(); a1.middle(); a1.bottom();
//	cout << "=======================" << endl;
//	a2.head(); a2.middle(); a2.bottom();
//	cout << "=======================" << endl;
//	a3.head(); a3.middle(); a3.bottom();
//}
//int main()
//{
//	test1();
//	return 0;
//}