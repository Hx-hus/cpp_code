#define _CRT_SECURE_NO_WARNINGS 1 

#include<queue>
#include<iostream>
using namespace std;

void test1()
{
	queue<int> q;
	if (q.empty())
	{
		cout << "qÎª¿Õ" << endl;
	}
	cout << q.size() << endl;
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	cout << q.front() << endl << q.back() << endl;;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	queue<int> q;
//	q.push(1);
//	cout << q.front() << endl;
//	q.push(2);
//	q.pop();
//	cout << q.front() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	queue<int> q;
//	q.push(1);
//	cout << q.front() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	queue<int> q;
//	q.push(1);
//	cout << q.front() << endl;
//	queue<int> q1;
//	q1 = q;
//	cout << q1.front() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	queue<int> q;
//	q.push(1);
//	cout << q.front() << endl;
//	queue<int> q1(q);
//	cout << q1.front() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}