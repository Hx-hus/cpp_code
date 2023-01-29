#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int main()
{
	int i = 2;
	printf(format:"%d %d %d", i * +2, ++i, i++);
	return 0;
}

//#include <iostream>
//#include <iomanip> 
//using namespace std;
//int main()
//{
//	double f = 3.14159;
//	cout << f << endl;
//	cout << setiosflags(ios::fixed); //只有在这项设置后，setprecision才是设置小数的位数。
//	cout << setprecision(2) << f << endl;
//}