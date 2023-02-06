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
void test1()
{
	vector<int> a;
	for (int i = 0; i < 10; i++)
	{
		a.push_back(i);
	}
	cout << "ÄæÐòÇ°" << endl;
	print(a);
	reverse(a.begin(), a.end());
	cout << "ÄæÐòºó" << endl;
	print(a);
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	vector<int> a, b;
//	for (int i = 0; i < 10; i++)
//	{
//		a.push_back(i);
//		b.push_back(i + 1);
//	}
//	print(a);
//	print(b);
//	vector<int> c;
//	c.resize(a.size() + b.size());
//	merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
//	print(c);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//#include<ctime>
//
//void test1()
//{
//	srand((unsigned int)time(NULL));
//	int arr[10] = { 0,5,3,4,6,9,2,1,7,8 };
//	cout << "´òÂÒÇ°£º" << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	random_shuffle(arr, arr + sizeof(arr) / sizeof(int));
//	cout << "´òÂÒºó£º" << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//bool _sort(int a, int b)
//{
//	return a > b;
//}
//void test1()
//{
//	int arr[10] = { 0,5,3,4,6,9,2,1,7,8 };
//	cout << "ÅÅÐòÇ°£º" << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	sort(arr, arr+sizeof(arr)/sizeof(int));
//	cout << "ÅÅÐòºó£º" << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	sort(arr, arr + sizeof(arr) / sizeof(int),_sort);
//	cout << "ÉýÐòÅÅÐòºó£º" << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}