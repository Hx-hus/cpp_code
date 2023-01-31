#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
#include<map>
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
	map<int, int ,sort_big> m;
	for (int i = 0; i < 10; i++)
	{
		m.insert(make_pair(i,i+10));
	}
	;	for (map<int,int, sort_big>::iterator b = m.begin(); b != m.end(); b++)
	{
		cout << (*b).second << " ";
	}
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	map<int,int> m;
//	for (int i = 0; i < 10; i++)
//	{
//		m.insert(pair<int,int>(i,i+10));
//	}
//	cout << m.count(1) << endl;
//	cout << m.count(9) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	map<int,int> m;
//	for (int i = 0; i < 10; i++)
//	{
//		m.insert(make_pair(i,i+10));
//	}
//	map<int,int>::iterator f = m.find(10);
//	if (f != m.end())
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

//void print(map<int,int>& m)
//{
//	for (map<int,int>::iterator b = m.begin(); b != m.end(); b++)
//	{
//		cout << (*b).second << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	map<int,int> m;
//	for (int i = 0; i < 10; i++)
//	{
//		m.insert(pair<int,int>(i,i+10));
//		m.insert(pair<int, int>(i+10, i));
//	}
//	print(m);
//	map<int,int>::iterator b = m.begin();
//	b++; b++; b++; b++; b++;
//	m.erase(b);
//	print(m);
//	map<int,int>::iterator b1 = m.begin();
//	b1++; b1++; b1++; b1++; b1++;
//	m.erase(b1, m.end());
//	print(m);
//	m.erase(0);
//	print(m);
//	m.clear();
//	print(m);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(0, 10));
//	m.insert(pair<int, int>(1, 20));
//	print(m);
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	map<int,int> m;
//	m.insert(pair<int,int>(0,10));
//	map<int,int> m1;
//	m1.insert(pair<int,int>(0,20));
//	cout << "交换前" << endl;
//	print(m);
//	print(m1);
//	m.swap(m1);
//	cout << "交换后" << endl;
//	print(m);
//	print(m1);
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	map<int, int> m;
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	cout << m.size() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void print(map<int ,int>& m)
//{
//	for (map<int, int>::iterator b = m.begin(); b != m.end(); b++)
//	{
//		cout << (*b).second<< " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(0, 20));
//	print(m);
//	map<int, int> m1;
//	m1 = m;
//	print(m1);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(0, 20));
//	print(m);
//	map<int, int> m1(m);
//	print(m1);
//}
//int main()
//{
//	test1();
//	return 0;
//}