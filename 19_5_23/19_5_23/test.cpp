#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	for (int i = 0; i <= 1320; i++)
		num += i;
	cout << num << endl;
	return 0;
}