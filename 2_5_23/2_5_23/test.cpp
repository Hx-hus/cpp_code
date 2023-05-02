#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>

struct A {

	long a1;

	short a2;

	int a3;

	int* a4;

};

int main()
{
	std::cout << sizeof(A);
	return 0;
}