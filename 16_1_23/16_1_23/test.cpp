#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;
#include<string>

//����
class man
{
//����Ȩ��
protected:
	string _name;//����
	string _car;//��
	string _age;//����
};
int main()
{
	man m1;
	cout << m1._name << endl;

	return 0;
}
//class student
//{
//public:
//
//	string name;
//	string stunum;
//
//	void print()
//	{
//		cout << "name: " << name<< endl;
//		cout << "stunum: " << stunum << endl;
//	}
//};
//
//int main()
//{
//	student s1;
//	cin >> s1.name;
//	cin >> s1.stunum;
//	s1.print();
//	return 0;
//}