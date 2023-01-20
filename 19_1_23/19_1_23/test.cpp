#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<iostream>
using namespace std;

//class person1;
//
class person
{
public:
	person();
	void test1();
	string _name;
	string _car;
	string _phone;
};

person::person()
{
	_name = "张三";
	_car = "奥迪A8";
	_phone = "iphone 100 por max";
}
void person::test1()
{
	cout << "现在访问的是：" << _name << endl;
	cout << "现在访问的是：" << _name << "的" << _car << endl;
	cout << "现在访问的是：" << _name << "的" << _phone << endl;
	
}

int main()
{
	person p1;
	p1.test1();
	return 0;
}
//class person1
//{
//public:
//	void test1()
//	{
//		cout << "现在访问的是：" << p->_name << endl;
//		cout << "现在访问的是：" << p->_name << "的" << p->_car << endl;
//		cout << "现在访问的是：" << p->_name << "的" << p->_phone << endl;
//	}
//	void test2()
//	{
//
//	}
//	person* p;
//};
//
//void test01()
//{
//	person1 f1;
//	f1.p = new person;
//	f1.test1();
//	f1.test2();
//	delete f1.p;
//	f1.p = NULL;
//}
//int main()
//{
//	test01();
//	return 0;
//}
//class person;
//
//class A
//{
//public:
//	void test1()
//	{
//		cout << "现在访问的是：" << p->_name << endl;
//		cout << "现在访问的是：" << p->_name << "的" << p->_car << endl;
//		cout << "现在访问的是：" << p->_name << "的" << p->_phone << endl;
//	}
//	void test2()
//	{
//
//	}
//	person* p;
//};
//
//class person
//{
//	friend void A::test1();
//public:
//	person()
//	{
//		_name = "张三";
//		_car = "奥迪A8";
//		_phone = "iphone 100 por max";
//	}
//	string _name;
//private:
//	string _car;
//	string _phone;
//};
//
//void test01()
//{
//	A f1;
//	f1.p = new person;
//	f1.test1();
//	f1.test2();
//	delete f1.p;
//	f1.p = NULL;
//}
//int main()
//{
//	test01();
//	return 0;
//}
//class person1;
//void person1::test();
//
//class person
//{
//	friend void person1::test();
//public:
//	person()
//	{
//		_name = "张三";
//		_car = "奥迪A8";
//		_phone = "iphone 100 por max";
//	}
//	string _name;
//private:
//	string _car;
//	string _phone;
//};
//class person1
//{
//public:
//	void test()
//	{
//		cout << "现在访问的是：" << p->_name<< endl;
//		cout << "现在访问的是：" << p->_name<< "的" <<  p->_car<< endl;;
//		cout << "现在访问的是：" << p->_name << "的" << p->_phone << endl;;
//	}
//	person *p;
//};
//void test1()
//{
//	person1 pp1;
//	pp1.p = new person;
//	pp1.test();
//	delete pp1.p;
//	pp1.p = NULL;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class person
//{
//	friend void test1();
//public:
//	person()
//	{
//		_name = "张三";
//		_car = "奥迪A8";
//		_phone = "iphone 100 por max";
//	}
//	string _name;
//private:
//	string _car;
//	string _phone;
//};
//class person1
//{
//	person p;
//};
//void test1()
//{
//	person p1;
//	cout << "现在在访问：" << p1._name << endl;
//	cout << "现在在访问：" << p1._name << "的" << p1._car << endl;
//	cout << "现在在访问：" << p1._name << "的" << p1._phone << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	void a()
//	{
//		cout << "调用函数a" << endl;
//	}
//	void b()
//	{
//		c = 10;
//		cout << "调用函数b" << endl;
//	}
//	int c;
//};
//void test1()
//{
//	A* p = NULL;
//	p->a();
//	p->b();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	A& a(int b)
//	{
//		this->b += b;
//		return *this;
//	}
//	int b;
//};
//
//void test1()
//{
//	A a;
//	a.b = 0;
//	int b = 10;
//	a.a(b).a(b).a(b);
//	cout << a.b << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	void a()
//	{
//
//	}
//};
//void test1()
//{
//	A a;
//	cout << "对象a的大小是： " << sizeof(a) << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}