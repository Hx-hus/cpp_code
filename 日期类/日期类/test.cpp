#define _CRT_SECURE_NO_WARNINGS 1 

#include<algorithm>

using namespace std;

class Date
{

public:

	// 获取某年某月的天数
	int GetMonthDay(int year, int month)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			if (month == 2) 
				return 29;
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			return 31;
		return 30;
	}
	// 全缺省的构造函数
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	// 拷贝构造函数
	Date(const Date& d)
	{
		this->_year = d._year;
		this->_month = d._month;
		this->_day = d._day;
	}
	// 赋值运算符重载
	Date& operator=(const Date& d)
	{
		this->_year = d._year;
		this->_month = d._month;
		this->_day = d._day;
		return *this;
	}
	// 析构函数
	~Date()
	{
		this->_year = 0;
		this->_month = 0;
		this->_day = 0;

	}
	// 日期+=天数
	Date& operator+=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month += 1;
			if (_month > 12)
			{
				_year++;
				_month -= 12;
			}
		}
		return *this;
	}
	// 日期+天数
	Date operator+(int day)
	{
		Date tmp = *this;
		return tmp += day;
	}
	// 日期-=天数
	Date& operator-=(int day)
	{
		if (day < 0)
		{
			return *this += (-day);
		}
		_day = _day - day;
		while (_day < 1)
		{
			_month -= 1;
			if (_month == 0)
			{
				_month = 12;
				--_year;
			}
			_day += GetMonthDay(_year, _month);
		}
		return *this;

	}
	// 日期-天数
	Date operator-(int day) 
	{
		Date tmp = *this;
		return tmp -= day;
	}
	// 前置++
	Date& operator++()
	{
		this->_year++;
		this->_month++;
		this->_day++;
		return *this;
	}
	// 后置++
	Date operator++(int)
	{
		_year = this->_year++;
		_month = this->_month++;
		_day = this->_day++;
		return *this;
	}
	// 后置--
	Date operator--(int)
	{
		_year = this->_year--;
		_month = this->_month--;
		_day = this->_day--;
		return *this;
	}
	// 前置--
	Date& operator--()
	{	
		this->_year--;
		this->_month--;
		this->_day--;
		return *this;
	}
	// >运算符重载
	bool operator>(const Date& d)
	{
		if (_year < d._year) return false;
		if (_month < d._month)return false;
		if (_day < d._day) return false;
		return true;
	}
	// ==运算符重载
	bool operator==(const Date& d)
	{
		if (_year != d._year || _month != d._month || _day != d._day) return false;
		return true;
	}
	// >=运算符重载
	bool operator >= (const Date& d)
	{
		if (_year <= d._year) return false;
		if (_month <= d._month)return false;
		if (_day <= d._day) return false;
		return true;
	}
	// <运算符重载
	bool operator < (const Date& d)
	{
		if (_year > d._year) return false;
		if (_month > d._month)return false;
		if (_day > d._day) return false;
		return true;
	}
	// <=运算符重载
	bool operator <= (const Date& d)
	{
		if (_year >= d._year) return false;
		if (_month >= d._month)return false;
		if (_day >= d._day) return false;
		return true;
	}
	// !=运算符重载
	bool operator != (const Date& d)
	{
		if (_year != d._year || _month != d._month || _day != d._day) return true;
		return false;
	}
	// 日期-日期 返回天数
	int operator-(const Date& d)
	{
		return _day - d._day;
	}
private:

	int _year;

	int _month;

	int _day;

};