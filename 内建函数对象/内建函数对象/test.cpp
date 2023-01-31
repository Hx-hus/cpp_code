#define _CRT_SECURE_NO_WARNINGS 1 

#include<functional>
#include<iostream>
using namespace std;

int _a, _b;
void test1()
{
	//加法
	plus<int> a;
	cin >> _a >> _b;
	int add = a(_a, _b);
	cout <<"相加后：" << add << endl;
	//减法
	minus<int> b;
	cin >> _a >> _b;
	int min = b(_a, _b);
	cout <<"相减后：" << min << endl;
	//乘法
	multiplies<int> c;
	cin >> _a >> _b;
	int mul = c(_a, _b);
	cout <<"相乘后：" << mul << endl;
	//除法
	divides<int> d;
	cin >> _a >> _b;
	int div = d(_a, _b);
	cout << "相除后" << div << endl;
	//取模
	modulus<int> e;
	cin >> _a >> _b;
	int mod = e(_a, _b);
	cout <<"取模后：" << mod << endl;
	negate<int> f;
	cin >> _a;
	int neg = f(_a);
	cout <<"取反后：" << neg << endl;
}
int main()
{
	test1();
	return 0;
}