#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
using namespace std;
#include<string>

string str, del, str1;

int main()
{
	getline(cin, str);
	getline(cin, del);
	int hash[128] = { 0 };
	for (int i = 0; i < del.size(); i++)
	{
		hash[del[i]]++;
	}
	for (int i = 0; i < str.size(); i++)
	{
		if (hash[str[i]] == 0)
		{
			str1 += str[i];
		}
	}
	cout << str1;
	return 0;
}


typedef long long ll;
ll l;
string a;

int main()
{
	cin >> l;
	a = to_string(l);
	int len = a.length();
	for (int i = len - 3; i > 0; i-=3)
	{
		a.insert(i, ",");
	}

	cout << a << endl;
	return 0;
}