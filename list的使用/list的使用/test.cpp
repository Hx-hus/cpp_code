#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
#include<list>
using namespace std;

void print(list<int>& l)
{
	for (list<int>::iterator b=l.begin(); b != l.end(); b++)
	{
		cout << *b << " ";
	}
	cout << endl;
}
bool com(int a, int b)
{
	return a > b;//���Լ򻯳����������ص���a>b�Ľ�����������ǶԵ�,�����н�����������ԣ����н���
}
void test1()
{
	list<int> l;
	for (int i = 0; i < 10; i++)
	{
		l.push_back(i);
	}
	print(l);
	l.sort(com);
	print(l);
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	list<int> l;
//	for (int i = 9; i >=0; i--)
//	{
//		l.push_back(i);
//	}
//	print(l);
//	l.sort();
//	print(l);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	list<int> l;
//	for (int i = 0; i < 10; i++)
//	{
//		l.push_back(i);
//	}
//	cout << "��תǰ" << endl;
//	print(l);
//	cout << "��ת��" << endl;
//	l.reverse();
//	print(l);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	list<int> l;
//	for (int i = 0; i < 10; i++)
//	{
//		l.push_back(i);
//	}
//	print(l);
//	cout << l.front() << endl;
//	cout << l.back() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	list<int> l;
//	for (int i = 0; i < 10; i++)
//	{
//		l.push_back(i);
//		l.push_back(i);
//	}
//	print(l);
//	l.pop_back();
//	print(l);
//	l.pop_front();
//	print(l);
//	list<int>::iterator b = l.begin();
//	b++; b++; b++;
//	l.erase(b);
//	print(l);
//	list<int>::iterator b1 = l.begin();
//	b1++; b1++; b1++;
//	l.erase(b1, l.end());
//	print(l);
//	l.remove(1);
//	print(l);
//	l.clear();
//	print(l);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	list<int> l;
//	l.push_back(2);
//	print(l);
//	l.push_front(1);
//	print(l);
//	l.insert(l.end(), 3);
//	print(l);
//	l.insert(l.begin(), 1,0);
//	print(l);
//	list<int>::iterator b = l.begin();
//	b++;
//	l.insert(b, l.begin(), l.end());
//	print(l);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	list<int> l;
//	if (l.empty())
//	{
//		cout << "lΪ��" << endl;
//	}
//	cout << l.size() << endl;
//	l.assign(10, 1);
//	print(l);
//	l.resize(11);
//	print(l);
//	l.resize(15, 1);
//	print(l);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	cout << "����ǰ" << endl;
//	list<int> l(10, 1);
//	print(l);
//	list<int> l1;
//	l1.assign(10, 2);
//	print(l1);
//	cout << "������" << endl;
//	l.swap(l1);
//	print(l);
//	print(l1);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	list<int> l(10, 1);
//	print(l);
//	list<int> l1;
//	l1 = l;
//	print(l1);
//	list<int> l2;
//	l2.assign(l1.begin(),l1.end());
//	print(l2);
//	list<int> l3;
//	l3.assign(10, 2);
//	print(l3);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	list<int> l;
//	list<int> l1(10, 1);
//	print(l1);
//	list<int>l2(l1);
//	print(l2);
//	list <int>l3(l1.begin(), l1.end());
//	print(l3);
//}
//int main()
//{
//	test1();
//	return 0;
//}