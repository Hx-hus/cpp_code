#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int add(int a)//�Կ��������������м�һ�ٵĲ���
{
	return a += 100;
}
void print(int a)
{
	cout << a << " ";
}
void test1()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}
	for_each(v. begin(), v.end(), print);
	cout << endl;
	vector<int> v1;
	v1.resize(v.size());//��֤���Է���ԭ����
	transform(v.begin(), v.end(), v1.begin(), add);
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
}
int main()
{
	test1();
	return 0;
}
//void print(int a)
//{
//	cout << a << " ";
//}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}