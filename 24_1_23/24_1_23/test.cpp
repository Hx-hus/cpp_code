#define _CRT_SECURE_NO_WARNINGS 1 

#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void test1()
{
	vector<vector<int>> v;//创建大容器
	//创建小容器
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	vector<int> v5;
	//往小容器中写入数据
	for (int i = 0; i < 6; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
		v3.push_back(i + 10);
		v4.push_back(i + 15);
		v5.push_back(i + 20);
	}
	//把小容器写入大容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);
	//通过大容器把小容器中的数都打印出来
	for (vector<vector<int>>::iterator b = v.begin(); b != v.end(); b++)//大容器的迭代器
	{
		for (vector<int>::iterator b1 = (*b).begin(); b1 != (*b).end(); b1++)//要想遍历大容器的数据，要将所有小容器遍历一遍，小容器的迭代器
		{
			cout << *b1 << " ";
		}
		cout << endl;
	}
}
int main()
{
	test1();
	return 0;
}
////人类
//class person
//{
//public:
//	person(string a, int b)
//	{
//		_name = a;
//		_age = b;
//	}
//	string _name;
//	int _age;
//};
//void print(person& p)
//{
//	cout << p._name << "的年龄为" << p._age << endl;
//}
//void test1()
//{
//	vector<person> p;
//	person p1("张三", 18);
//	person p2("李四", 19);
//	person p3("王五", 20);
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	//第一种方法
//	vector<person>::iterator b = p.begin();
//	vector<person>::iterator e = p.end();
//	while (b != e)
//	{
//		cout << b->_name << "的年龄为" << b->_age << endl;
//		b++;
//	}
//	cout << endl;
//	//第二种方法
//	for (b = p.begin(); b != e; b++)
//	{
//		cout << b->_name << "的年龄为" << b->_age << endl;
//	}
//	cout << endl;
//	//d第三种方法
//	for_each(p.begin(), p.end(), print);
//	cout << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
////用于for_each中的函数
//void print(int a)//因为vector为int
//{
//	cout << a << " ";
//}
//void test1()
//{
//	int i = 10;
//	vector<int> v;
//	while (i--)
//	{
//		v.push_back(i);//像v中上传数据
//	}
//	//第三种方式
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	int i = 10;
//	vector<int> v;
//	while (i--)
//	{
//		v.push_back(i);//像v中上传数据
//	}
//	for (vector<int>::iterator b = v.begin(); b != v.end(); b++)
//	{
//		cout << *b << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	int i = 10;
//	vector<int> v;
//	while (i--)
//	{
//		v.push_back(i);//像v中上传数据
//	}
//	vector<int>::iterator b = v.begin();//起始迭代器，指向容器中的第一个元素位置
//	vector<int>::iterator e = v.end();//结束迭代器，指向容器中最后一个元素加1的位置
//	//第一种遍历方法
//	while (b != e)
//	{
//		//解引用操作找到迭代器指向的元素
//		cout << *b << " ";
//		b++;
//	}
//	cout << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
