#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;
#include<numeric>
#include<vector>

void print(vector<int> &a)
{
	for (auto b = a.begin();b < a.end(); b++)
	{
		cout << *b << " ";
	}
	cout << endl;
}
void test1()
{
	vector<int> a;
	a.resize(10);
	print(a);
	fill(a.begin(), a.end(), 10);
	print(a);
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	vector<int> a;
//	int add = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		a.push_back(i);
//		add += i;
//	}
//	cout << add << endl;
//	cout << accumulate(a.begin(), a.end(), 0) << endl;
//	cout << accumulate(a.begin(), a.end(), 5) << endl;
//}
//int main()
//{	
//	test1();
//	return 0;
//}