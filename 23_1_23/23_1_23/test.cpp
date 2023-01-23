#define _CRT_SECURE_NO_WARNINGS 1 

#include"per.cpp"

void test1()
{
	per<string, int>p("张三", 18);
}
int main()
{
	test1();
	return 0;
}
//template<class T>
//void print(T p)
//{
//	cout << p._name << "的年龄" << p._age << "岁" << endl;
//}
//
//void test1()
//{
//	per<string, int> p("张三",18);
//	print(p);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A1
//{
//public:
//	void print1()
//	{
//		cout << "A1在被调用" << endl;
//	}
//};
//class A2
//{
//public:
//	void print2()
//	{
//		cout << "A2在被调用" << endl;
//	}
//};
//template<class T>
//class A
//{
//public:
//	void print1()
//	{
//		T a;
//		a.print1();
//	}
//	void print2()
//	{
//		T a.print2();
//	}
//};
//void test1()
//{
//	A<A1> a;
//	a.print1();
//	a.print2();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//template<typename T1=int, typename T2=char>
//class A
//{
//public:
//	T1 _a;
//	T2 _b;
//};
//void test1()
//{
//	A<double,string > a1;
//	a1._a = 10.0;
//	a1._b = "abcd";
//	cout << a1._a << endl;
//	cout << a1._b << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//template<typename T>
//void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//class A
//{
//public:
//	A(string a, int b)
//	{
//		_name = a;
//		_age = b;
//	}
//	string _name;
//	int _age;
//};
//template< > void Swap(A& c1, A& c2)
//{
//	string tmp1 = c1._name;
//	c1._name = c2._name;
//	c2._name = tmp1;
//	int tmp2 = c1._age;
//	c1._age = c2._age;
//	c2._age = tmp2;
//}
//void test1()
//{
//	A c1("zhangsan", 19);
//	A c2("lisi", 20);
//	Swap(c1, c2);
//	cout << c1._name << "的年龄" << c1._age << endl;
//	cout << c2._name << "的年龄" << c2._age << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class A
//{
//public:
//	A(string a, int b)
//	{
//		_name = a;
//		_age = b;
//	}
//	void operator=(A& a)
//	{
//		_name =a._name;
//		_age = a._age;
//	}
//	string _name;
//	int _age;
//};
//template<typename T>
//void Swap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void test1()
//{
//	A c1("zhangsan", 19);
//	A c2("lisi", 20);
//	Swap(c1, c2);
//	cout << c1._name << "的年龄" << c1._age << endl;
//	cout << c2._name << "的年龄" << c2._age << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void print()
//{
//	cout << "hello world" << endl;
//}
//void test1()
//{
//	print<int>();
//	print<char>();
//	print<double>();
//}
//int main()
//{
//	test1();
//	return 0;
//}