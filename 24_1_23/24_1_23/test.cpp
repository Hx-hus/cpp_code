#define _CRT_SECURE_NO_WARNINGS 1 

#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void test1()
{
	vector<vector<int>> v;//����������
	//����С����
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	vector<int> v5;
	//��С������д������
	for (int i = 0; i < 6; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
		v3.push_back(i + 10);
		v4.push_back(i + 15);
		v5.push_back(i + 20);
	}
	//��С����д�������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);
	//ͨ����������С�����е�������ӡ����
	for (vector<vector<int>>::iterator b = v.begin(); b != v.end(); b++)//�������ĵ�����
	{
		for (vector<int>::iterator b1 = (*b).begin(); b1 != (*b).end(); b1++)//Ҫ����������������ݣ�Ҫ������С��������һ�飬С�����ĵ�����
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
////����
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
//	cout << p._name << "������Ϊ" << p._age << endl;
//}
//void test1()
//{
//	vector<person> p;
//	person p1("����", 18);
//	person p2("����", 19);
//	person p3("����", 20);
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	//��һ�ַ���
//	vector<person>::iterator b = p.begin();
//	vector<person>::iterator e = p.end();
//	while (b != e)
//	{
//		cout << b->_name << "������Ϊ" << b->_age << endl;
//		b++;
//	}
//	cout << endl;
//	//�ڶ��ַ���
//	for (b = p.begin(); b != e; b++)
//	{
//		cout << b->_name << "������Ϊ" << b->_age << endl;
//	}
//	cout << endl;
//	//d�����ַ���
//	for_each(p.begin(), p.end(), print);
//	cout << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
////����for_each�еĺ���
//void print(int a)//��ΪvectorΪint
//{
//	cout << a << " ";
//}
//void test1()
//{
//	int i = 10;
//	vector<int> v;
//	while (i--)
//	{
//		v.push_back(i);//��v���ϴ�����
//	}
//	//�����ַ�ʽ
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
//		v.push_back(i);//��v���ϴ�����
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
//		v.push_back(i);//��v���ϴ�����
//	}
//	vector<int>::iterator b = v.begin();//��ʼ��������ָ�������еĵ�һ��Ԫ��λ��
//	vector<int>::iterator e = v.end();//������������ָ�����������һ��Ԫ�ؼ�1��λ��
//	//��һ�ֱ�������
//	while (b != e)
//	{
//		//�����ò����ҵ�������ָ���Ԫ��
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
