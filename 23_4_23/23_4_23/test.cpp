#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
#include<algorithm>
#include<string>

using std::cout;
using std::cin;
using std::endl;

namespace zjl
{
	int a;
	int b;
	std::string str;
}

class A
{
public:
	A(int a, int b, std::string str)
	{
		_a = a;
		_b = b;
		_str = str;
		cout << _a << " " << _b << endl;
		cout << _str << endl;
	}
private:
	int _a;
	int _b;
	std::string _str;
};

int main()
{
	cin >> zjl::a >> zjl::b >> zjl::str;
	A a(zjl::a,zjl::b,zjl::str);
	return 0;
}