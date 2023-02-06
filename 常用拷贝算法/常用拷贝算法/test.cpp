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
	print(a);
	auto b = a.begin();
	b++; b++; b++; b++;
	vector<int> c;
	c.resize(6);
	copy(b, a.end(), c.begin());
	print(c);
}
int main()
{
	test1();
	return 0;
}