#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;

int main()
{
	int* p = NULL;
	p = new int[10];
	if (p == NULL)
	{
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	for (i=0 ; i < 10; i++)
	{
		cout << *(p + i) << " ";
	}
	delete[] p;
	return 0;
}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//
//	cout << "hello world"<< endl;
//	return 0;
//}