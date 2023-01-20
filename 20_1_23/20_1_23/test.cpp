#define _CRT_SECURE_NO_WARNINGS 1 

#include<string>
#include<iostream>
using namespace std;

class girl_friend
{
	girl_friend()
	{
		age = 18;
		_looks = "pretty";
	}
private:
	string _name;
	int age;
	string _looks;
}
//class A
//{
//public:
//	void operator()()
//	{
//		cout << "仿函数调用" << endl;
//	}
//};
//void test1()
//{
//	A a;
//	a();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	A(int a, char c)
//	{
//		_a = a;
//		_c = c;
//	}
//	bool operator==(A& a)
//	{
//		if (_a == a._a && _c == a._c)
//		{
//			return 1;
//		}
//		return 0;
//	}
//	int _a;
//	char _c;
//};
//void test1()
//{
//	A a(10, 'c');
//	A b(10, 'c');
//	if (a == b)
//	{
//		cout << "a=b" << endl;
//	}
//	else
//	{
//		cout << "a!=b" << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	A()
//	{
//		p = new int;
//	}
//	~A()
//	{
//		delete p;
//		p = NULL;
//	}
//	void operator=(A& a)
//	{
//		if (p != NULL)
//		{
//			p = NULL;
//		}
//		p = new int(*a.p);
//	}
//	int* p;
//};
//
//void test1()
//{
//	A a;
//	*a.p = 10;
//	A b;
//	b = a;
//	cout << *b.p << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	A(int a)
//	{
//		_a = a;
//	}
//	//后置++
//	A& operator++(int)
//	{
//		int a = this->_a++;
//		return a;
//	}
//	int _a;
//};
//void test1()
//{
//	A a1(10);
//	cout << a1._a++ << endl;
//	cout << a1._a << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	A()
//	{
//
//	}
//	A(int a, int b)
//	{
//		_a = a;
//		_b = b;
//	}
//	//前置++
//	A& operator++()
//	{
//		this->_a++;
//		this->_b++;
//		return *this;
//	}
//	//后置++
//	A operator++(int)
//	{
//		int a = this->_a++;
//		return a;
//	}
//	//A operator+(A &a1)
//	//{
//	//	A tmp;
//	//	tmp._a = this->_a + a1._a;
//	//	tmp._b = this->_b + a1._b;
//	//	return tmp;
//	//}
//	int _a;
//};
////A operator-(A& a1, A& a2)
////{
////	A tmp;
////	tmp._a = a1._a - a2._a;
////	tmp._b = a1._b - a2._b;
////	return tmp;
////}
//ostream& operator<<(ostream& cout, A& a3)
//{
//	cout << a3._a << "   " << a3._b;
//	return cout;
//}
//void test1()
//{
//	A a1(10, 10);
//	A a2(10, 10);
//	A a3(0, 0);
//	a3 = a1 - a2;
//	cout << ++a3++ << endl;
//	cout << a3 << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}