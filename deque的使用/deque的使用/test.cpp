#define _CRT_SECURE_NO_WARNINGS 1 

#include<deque>
#include<iostream>
using namespace std;

void test1()
{
	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}
	cout << d.at(5) << endl;
	cout << d[4] << endl;
	cout << d.front() << endl;
	cout << d.back() << endl;
}
int main()
{
	test1();
	return 0;
}
//#include<deque>
//#include<iostream>
//using namespace std;
//
//void print(deque<int>& d)
//{
//	for (deque<int>::iterator b = d.begin(); b < d.end(); b++)
//	{
//		cout << *b << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	deque<int> d;
//	for (int i = 0; i < 10; ++i)
//	{
//		d.push_back(i);
//	}
//	print(d);
//	d.pop_back();
//	print(d);
//	d.pop_front();
//	print(d);
//	d.erase(d.begin());
//	print(d);
//	deque<int>::iterator b = d.begin();
//	b++;
//	d.erase(b,d.end());
//	print(d);
//	d.clear();
//	print(d);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	deque<int> d;
//	if (d.empty())
//	{
//		cout << "dÎª¿Õ" << endl;
//	}
//	for (int i = 0; i < 10; ++i)
//	{
//		d.push_back(i);
//	}
//	cout<<d.size()<<endl;
//	d.resize(15);
//	print(d);
//	d.resize(20, 10);
//	print(d);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void print(deque<int>& d)
//{
//	for (deque<int>::iterator b = d.begin(); b < d.end(); b++)
//	{
//		cout << *b << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	deque<int> d;
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	print(d);
//	deque<int> d1;
//	d1 = d;
//	print(d1);
//	deque<int> d2;
//	d2.assign(d1.begin(), d1.end());
//	print(d2);
//	deque<int> d3;
//	d3.assign(10, 10);
//	print(d3);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	deque<int> d;
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	print(d);
//	deque<int> d1(d.begin(), d.end());
//	print(d1);
//	deque<int> d2(10, 10);
//	print(d2);
//	deque<int> d3(d2);
//	print(d3);
//}
//int main()
//{
//	test1();
//	return 0;
//}