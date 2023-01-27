#define _CRT_SECURE_NO_WARNINGS 1 

#include<stack>
#include<iostream>
using namespace std;

void test1()
{
	stack<int> s;
	if (s.empty())
	{
		cout << "sÎª¿Õ" << endl;
	}
	cout << s.size() << endl;
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	int i = 2;
//	stack<int> s;
//	while (i--)
//	{
//		s.push(i);
//	}
//	cout << s.top() << endl;
//	s.pop();
//	cout << s.top() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	stack<int> s;
//	s.push(1);
//	cout << s.top() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	stack<int> s;
//	s.push(2);
//	cout << s.top() << endl;
//	stack<int> s1;
//	s1 = s;
//	cout << s1.top()<<endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	stack<int> s;
//	s.push(1);
//	stack<int> s1(s);
//}
//int main()
//{
//	test1();
//	return 0;
//}