#define _CRT_SECURE_NO_WARNINGS 1 

#include<vector>
#include<iostream>
using namespace std;

void test1()
{
	int count = 0;//ͳ����չ����
	int* p = NULL;//����if������
	vector<int> v;
	v.reserve(10000);
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
		if (p != &v[0])//p�������׵�ַ��ʱ���ȥ
		{
			p = &v[0];
			count++;
		}
	}
	cout << count << endl;
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "����ǰ" << endl;
//	cout << "v��������СΪ" << v.capacity() << endl;
//	cout << "v��Ԫ����" << v.size() << endl;
//	v.resize(5);
//	vector< int >(v).swap(v);
//	cout << "������" << endl;
//	cout << "v��������СΪ" << v.capacity() << endl;
//	cout << "v��Ԫ����" << v.size() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	cout << v.at(5) << endl;
//	cout << v[4] << endl;
//	cout << v.front() << endl;
//	cout << v.back() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void print(vector<int>& v)
//{
//	for (vector<int>::iterator b=v.begin(); b < v.end(); b++)
//	{
//		cout << *b << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	print(v);
//	v.pop_back();
//	print(v);
//	v.erase(v.begin());
//	print(v);
//	v.erase(v.begin(), v.end());
//	print(v);
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	print(v);
//	v.clear();
//	print(v);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	vector<int> v;
//	v.insert(v.begin(), 1);
//	print(v);
//	v.insert(v.begin(), 9, 2);
//	print(v);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	vector<int> v;
//	if (v.empty())
//	{
//		cout << "Ϊ��" << endl;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	print(v);
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//	v.resize(15);
//	print(v);
//	v.resize(20, 1);
//	print(v);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	vector<int> v(10, 1);
//	print(v);
//	vector<int> v1 = v;
//	print(v1);
//	vector<int>v2(v1.begin(), v1.end());
//	print(v2);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	print(v);
//	vector<int> v1(v.begin(), v.end());
//	print(v1);
//	vector<int> v2(10, 0);
//	print(v2);
//	vector<int> v3(v2);
//	print(v3);
//}
//int main()
//{
//	test1();
//	return 0;
//}