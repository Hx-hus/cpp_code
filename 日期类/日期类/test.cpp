#define _CRT_SECURE_NO_WARNINGS 1 

#include<algorithm>

using namespace std;

class Date
{

public:

	// ��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			if (month == 2) 
				return 29;
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			return 31;
		return 30;
	}
	// ȫȱʡ�Ĺ��캯��
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	// �������캯��
	Date(const Date& d)
	{
		this->_year = d._year;
		this->_month = d._month;
		this->_day = d._day;
	}
	// ��ֵ���������
	Date& operator=(const Date& d)
	{
		this->_year = d._year;
		this->_month = d._month;
		this->_day = d._day;
		return *this;
	}
	// ��������
	~Date()
	{
		this->_year = 0;
		this->_month = 0;
		this->_day = 0;

	}
	// ����+=����
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
	// ����+����
	Date operator+(int day)
	{
		Date tmp = *this;
		return tmp += day;
	}
	// ����-=����
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
	// ����-����
	Date operator-(int day) 
	{
		Date tmp = *this;
		return tmp -= day;
	}
	// ǰ��++
	Date& operator++()
	{
		this->_year++;
		this->_month++;
		this->_day++;
		return *this;
	}
	// ����++
	Date operator++(int)
	{
		_year = this->_year++;
		_month = this->_month++;
		_day = this->_day++;
		return *this;
	}
	// ����--
	Date operator--(int)
	{
		_year = this->_year--;
		_month = this->_month--;
		_day = this->_day--;
		return *this;
	}
	// ǰ��--
	Date& operator--()
	{	
		this->_year--;
		this->_month--;
		this->_day--;
		return *this;
	}
	// >���������
	bool operator>(const Date& d)
	{
		if (_year < d._year) return false;
		if (_month < d._month)return false;
		if (_day < d._day) return false;
		return true;
	}
	// ==���������
	bool operator==(const Date& d)
	{
		if (_year != d._year || _month != d._month || _day != d._day) return false;
		return true;
	}
	// >=���������
	bool operator >= (const Date& d)
	{
		if (_year <= d._year) return false;
		if (_month <= d._month)return false;
		if (_day <= d._day) return false;
		return true;
	}
	// <���������
	bool operator < (const Date& d)
	{
		if (_year > d._year) return false;
		if (_month > d._month)return false;
		if (_day > d._day) return false;
		return true;
	}
	// <=���������
	bool operator <= (const Date& d)
	{
		if (_year >= d._year) return false;
		if (_month >= d._month)return false;
		if (_day >= d._day) return false;
		return true;
	}
	// !=���������
	bool operator != (const Date& d)
	{
		if (_year != d._year || _month != d._month || _day != d._day) return true;
		return false;
	}
	// ����-���� ��������
	int operator-(const Date& d)
	{
		return _day - d._day;
	}
private:

	int _year;

	int _month;

	int _day;

};