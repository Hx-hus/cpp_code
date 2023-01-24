#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
void print(per<T1, T2>& p);
template<class T1,class T2>
class per
{
	friend void print< >(per<T1, T2>& p);
public:
	per(T1 a, T2 b)
	{
		_name = a;
		_age = b;
	}
private:
	string _name;
	int _age;
};
template<class T1, class T2>
void print(per<T1, T2>& p)
{
	cout << _name << "的年龄为" << _age << endl;
}
template<class T1, class T2>
void print(per<T1, T2> &p);
void test1()
{
	per<string, int> p("张三", 18);
	print(p);
}
int main()
{
	test1();
	return 0;
}