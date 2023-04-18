#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
	std::vector<int> a;
	std::cout << "hello world" << std::endl;
	int b = 10;
	while (b--)
	{
		a.push_back(b);
	}
	for (auto i : a)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}