#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int main()
{
	vector<int> a, b;
	for (int i = 0; i < 10; i++)
	{
		a.push_back(i);
		b.push_back(i + 3);
	}
	vector<int> a_b;
	a_b.resize(max(a.size(), b.size()));
	cout << "a和b的差集集是：";
	for (auto d = a_b.begin(); d < set_difference(a.begin(), a.end(), b.begin(), b.end(), a_b.begin()); d++)
	{
		cout << *d << " ";
	}
	cout << endl;
	return 0;
}
//int main()
//{
//	vector<int> a, b;
//	for (int i = 0; i < 10; i++)
//	{
//		a.push_back(i);
//		b.push_back(i + 3);
//	}
//	vector<int> a_b;
//	a_b.resize(a.size()+b.size());
//	cout << "a和b的并集是：";
//	for (auto d = a_b.begin(); d < set_union(a.begin(), a.end(), b.begin(), b.end(), a_b.begin()); d++)
//	{
//		cout << *d << " ";
//	}
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	vector<int> a, b;
//	for (int i = 0; i < 10; i++)
//	{
//		a.push_back(i);
//		b.push_back(i + 3);
//	}
//	vector<int> a_b;
//	a_b.resize(min(a.size(), b.size()));
//	cout << "a和b的交集是：";
//	for (auto d = a_b.begin(); d < set_intersection(a.begin(), a.end(), b.begin(), b.end(), a_b.begin()); d++)
//	{
//		cout << *d << " ";
//	}
//	cout << endl;
//	return 0;
//}
