#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

bool gre(int a)
{
	return a > 1;
}
void test1()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
		v.push_back(i);
	}
	cout << count_if(v.begin(), v.end(), gre) << endl;
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//	if (binary_search(v.begin(),v.end(),3))
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "没有找到"<< endl;
//	}
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator b = adjacent_find(v.begin(), v.end());
//	if (b == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << *b << endl;
//	}
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
//bool gre(int a)
//{
//	return a > 8;
//}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator b = find_if(v.begin(), v.end(), gre);
//	if (b == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout <<"找到了：" << *b << endl;
//	}
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator b = find(v.begin(), v.end(), 9);
//	if (b == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout <<"找到了：" << *b << endl;
//	}
//
//}
//int main()
//{
//	test1();
//	return 0;
//}