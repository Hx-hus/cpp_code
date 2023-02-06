#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void print(vector<int>& a)
{
	for (auto b = a.begin(); b < a.end(); b++)
	{
		cout << *b << " ";
	}
	cout << endl;
}
bool big(int a)
{
	return a > 0;
}
void test1()
{
	vector<int>a, b;
	for (int i = 0; i < 10; i++)
	{
		a.push_back(i);
		b.push_back(i + 10);
	}
	cout << "交换前：" << endl;
	print(a);
	print(b);
	swap(a, b);
	cout << "交换后：" << endl;
	print(a);
	print(b);
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	vector<int>a;
//	for (int i = 0; i < 10; i++)
//	{
//		a.push_back(i);
//		a.push_back(i);
//		a.push_back(i);
//	}
//	print(a);
//	replace_if(a.begin(), a.end(),big , 1);
//	print(a);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	vector<int>a;
//	for (int i = 0; i < 10; i++)
//	{	
//		a.push_back(i);
//		a.push_back(i);
//		a.push_back(i);
//	}
//	print(a);
//	for (int i = 0; i < 10; i++)
//		replace(a.begin(), a.end(), i, 1);
//	print(a);
//}
//int main()
//{
//	test1();
//	return 0;
//}