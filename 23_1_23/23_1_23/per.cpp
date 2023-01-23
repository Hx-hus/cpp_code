#define _CRT_SECURE_NO_WARNINGS 1 

#include"per.h"
template<class T1, class T2>
class per
{
public:
	per(T1 a, T2 b)
	{
		_name = a;
		_age = b;
		cout << _name << "µÄÄêÁäÎª" << _age << endl;
	}
	T1 _name;
	T2 _age;
};