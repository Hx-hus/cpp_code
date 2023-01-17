#define _CRT_SECURE_NO_WARNINGS 1 

#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<sstream>

#define x first
#define y second

using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
const int N = 100010;
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;

int n, m;
int a[N], s[11][N];

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		ll t = a[i] % m;
		for (int j = 0; j < 11; j++)
		{
			s[j][t] ++;
			t = t * 10 % m;
		}
	}
	ll res = 0;
	for (int i = 0; i < n; i++)
	{
		ll t = a[i] % m;
		int len = to_string(a[i]).size();
		res += s[len][(m - t) % m];
		ll r = t;
		while (len--) r = r * 10 % m;
		if (r == (m - t) % m) res--;
	}
	cout << res << endl;
	return 0;
}
//int c_d_d(int r, int d)
//{
//	return r - d;
//}
////圆
//class circle
//{
////对外接口
//public:
//	//输入半径
//	void get_radius(int r)
//	{
//		_radius = r;
//	}
//	//输出半径
//	int put_radius()
//	{
//		return _radius;
//	}
//
////属性
//private:
//	int _radius;//半径
//};
////点
//class dot
//{
////对外接口
//public:
//	//输入距离
//	void get_dis(int d)
//	{
//		_dis = d;
//	}
//	//输出距离
//	int put_dis()
//	{
//		return _dis;
//	}
////属性
//private:
//	int _dis;//到圆心的距离
//};
//
//int main()
//{
//	int r = 0;
//	int b = 0;
//	circle c;
//	dot d;
//	cin >> r;
//	cin >> b;
//	c.get_radius(r);
//	d.get_dis(b);
//	int arr = c_d_d(c.put_radius(), d.put_dis());
//	if (arr == 0)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (arr > 0)
//	{
//		cout << "点在圆内" << endl;
//	}
//	else
//	{
//		cout << "点在圆外" << endl;
//	}
//	return 0;
//}
//void equ_cube(int a1, int a2, int v1, int v2)
//{
//	if (v1 == v2)
//	{
//		if (a1 == a2)
//		{
//			cout << "两个立方体相等" << endl;
//			return;
//		}
//		cout << "两个立方体不相等" << endl;
//		return;
//	}
//	cout << "两个立方体不相等" << endl;
//}
//
////立方体类
//class cube
//{
////留出的操作接口
//public:
//	//给出长宽高
//	void get_cube(int l , int w,int h)
//	{
//		_long = l;
//		_wide = w;
//		_high = h;
//	}
//	//计算面积
//	int acr_cube()
//	{
//		return _long * _wide * 2 + _long * _high * 2 + _wide * _high * 2;
//	}
//	//计算体积
//	int vol_cube()
//	{
//		return _long * _wide * _high;
//	}
//	//判断两个立方体是否相等
//	void equ_cube(int v1, int v2, int a1, int a2)
//	{
//		if (v1 == v2)
//		{
//			if (a1 == a2)
//			{
//				cout << "两个立方体相等" << endl;
//				return;
//			}
//			cout << "两个立方体不相等" << endl;
//			return;
//		}
//		cout << "两个立方体不相等" << endl;
//	}
//
////立方体的长宽高
//private:
//	int _long;//长
//	int _wide;//宽
//	int _high;//高
//};
//
//int main()
//{
//	cube c1;
//	cube c2;
//	c1.get_cube(5, 6, 7);
//	c2.get_cube(4, 7, 5);
//	int ca1 = c1.acr_cube();
//	int cv1 = c1.vol_cube();
//	int ca2 = c2.acr_cube();
//	int cv2 = c2.vol_cube();
//	c1.equ_cube(cv1, cv2, ca1, ca2);
//	equ_cube(ca1, ca2, cv1, cv2);
//	return 0;
//}
////男人类
//class man
//{
////公共权限，对外留的访问接口
//public:
//
//	//对名字进行写入
//	void get_name(string s1)
//	{
//		_name = s1;
//	}
//
//	//对名字进行读出
//	string read_name()
//	{
//		return _name;
//	}
//
//	//对于汽车进行写入
//	void get_car(string car)
//	{
//		_car = car;
//	}
//
//	//对妻子进行写入
//	void get_wife(string wife)
//	{
//		_wife = wife;
//	}
//
////保护权限，“儿子”可以访问
//protected:
//	string _name;//名字
//	string _car;//汽车
////私有权限，“儿子”不可以访问，只有自己可以访问
//private:
//	string _wife;//妻子
//};
//
//int main()
//{
//	man m1;
//	m1.get_name("狗蛋");
//	m1.get_car("劳斯莱斯幻影");
//	m1.get_wife("翠花");
//	cout << "这个男人的名字叫：" << m1.read_name() << endl;
//	return 0;
//}
////用结构体命名的学生1
//struct stu1
//{
//	string _name;
//};
////用类命名的学生2
//class stu2
//{
//	string _name;
//};
//
//int mian()
//{
//	struct stu1 s1;
//	stu2 s2;
//	cin >> s1._name;
//	cin >> s2._name;
//
//	return 0;
//}