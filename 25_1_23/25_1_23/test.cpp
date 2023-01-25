#define _CRT_SECURE_NO_WARNINGS 1 

#include<string>
#include<iostream>
using namespace std;

void test1()
{
	string s("hello world");
	string s1;
	int n = s.find(" ");//通过查找找到下标
	s1 = s.substr(0, n);
	cout << s1 << endl;
}
int main()
{
	test1();
	return 0;
}
//void test1()
//{
//	string s("h world");
//	s.insert(1, "ello");
//	cout << s << endl;
//	string s1("ab");
//	s1.insert(1, 3, 'c');
//	cout << s1 << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	string s("hello world");
//	for (int i = 0; i < s.size()/*size可以获取字符串场长度*/; i++)
//	{
//		cout << s[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < s.size()/*size可以获取字符串场长度*/; i++)
//	{
//		cout << s.at(i) << " ";
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
//	string s("asdfg");
//	int c1 = s.compare("asdfg");
//	cout << c1 << endl;
//	int c2 = s.compare("asdfr");
//	cout << c2 << endl;
//	int c3 = s.compare("asdfa");
//	cout << c3 << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	string s("h1 world");
//	s.replace(1, 1, "ello");
//	cout << s << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	string s("asdffdsadffdsa");
//	string s1("ff");
//	int f1 = s.find(s1);
//	cout << f1 << endl;
//	int f2 = s.find("ff");
//	cout << f2 << endl;
//	int f3 = s.find("ff", 5, 6);
//	cout << f3 << endl;
//	int f4 = s.find('d');
//	cout << f4 << endl;
//	int f5 = s.rfind(s1);
//	cout << f5 << endl;
//	int f6 = s.rfind("ff");
//	cout << f6 << endl;
//	int f7 = s.rfind("ff", 0, 5);
//	cout << f7 << endl;
//	int f8 = s.rfind('a');
//	cout << f8 << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	const char* str = "CPP";
//	string s1; 
//	s1 += str;
//	cout << s1 << endl;
//	const char s = '=';
//	s1 += s;
//	cout << s1 << endl;
//	string s2;
//	s2 += s1;
//	cout << s2 << endl;
//	string s3("I love");
//	s3.append(str);
//	cout << s3 << endl;
//	string s4;
//	s4.append(str, 2);
//	cout << s4 << endl;
//	string s5;
//	s5.append(s3);
//	cout << s5 << endl;
//	s4.append(s3, 2, 4);
//	cout << s4 << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//void test1()
//{
//	string s;
//	const char* c = "CPP";
//	string s1(c);
//	cout << s1 << endl;
//	string s2(s1);
//	cout << s2 << endl;
//	string s3(5, 'C');
//	cout << s3 << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}