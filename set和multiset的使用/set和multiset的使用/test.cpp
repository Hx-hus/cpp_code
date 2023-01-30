#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
#include<set>
using namespace std;

class sort_big
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};
void test1()
{
	set<int, sort_big> s;
	for (int i = 0; i < 10; i++)
	{
		s.insert(i);
	}
;	for (set<int,sort_big>::iterator b = s.begin(); b != s.end(); b++)
	{
		cout << *b << " ";
	}
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	pair<int, int > p(10, 20);
//	cout << p.first << " " << p.second << endl;
//	pair<int, int>p1 = make_pair(10, 20);
//	cout << p1.first << " " << p1.second << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool> in = s.insert(10);
//	pair<set<int>::iterator, bool> in1 = s.insert(10);
//	if (in.second/*访问第二个数据类型的元素*/)
//	{
//		cout << "插入成功" << endl;
//	}
//	else 
//	{
//		cout << "插入失败" << endl;
//	}
//
//	if (in1.second/*访问第二个数据类型的元素*/)
//	{
//		cout << "插入成功" << endl;
//	}
//	else
//	{
//		cout << "插入失败" << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	set<int> s;
//	for (int i = 0; i < 10; i++)
//	{
//		s.insert(i);
//	}
//	cout << s.count(10) << endl;
//	cout << s.count(7) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	set<int> s;
//	for (int i = 0; i < 10; i++)
//	{
//		s.insert(i);
//	}
//	set<int>::iterator f=s.find(10);
//	if (f != s.end())
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	set<int> s;
//	for (int i = 0; i < 10; i++)
//	{
//		s.insert(i);
//	}
//	print(s);
//	set<int>::iterator b = s.begin();
//	b++; b++; b++; b++; b++;
//	s.erase(b);
//	print(s);
//	set<int>::iterator b1 = s.begin();
//	b1++; b1++; b1++; b1++; b1++;
//	s.erase(b1, s.end());
//	print(s);
//	s.erase(0);
//	print(s);
//	s.clear();
//	print(s);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	set<int> s;
//	s.insert(1);
//	s.insert(0);
//	print(s);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	set<int> s;
//	s.insert(1);
//	set<int> s1;
//	s1.insert(0);
//	cout << "交换前" << endl;
//	print(s);
//	print(s1);
//	s.swap(s1);
//	cout << "交换后" << endl;
//	print(s);
//	print(s1);
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	set<int> s;
//	if (s.empty())
//	{
//		cout << "为空" << endl;
//	}
//	cout << s.size() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void print(set<int>& s)
//{
//	for (set<int>::iterator b = s.begin();b != s.end(); b++)
//	{
//		cout << *b << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	set<int> s;
//	s.insert(10);
//	print(s);
//	set<int> s1;
//	s1 = s;
//	print(s1);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	set<int> s;
//	s.insert(10);
//	print(s);
//	set<int> s1(s);
//	print(s1);
//}
//int main()
//{
//	test1();
//	return 0;
//}