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
////Բ
//class circle
//{
////����ӿ�
//public:
//	//����뾶
//	void get_radius(int r)
//	{
//		_radius = r;
//	}
//	//����뾶
//	int put_radius()
//	{
//		return _radius;
//	}
//
////����
//private:
//	int _radius;//�뾶
//};
////��
//class dot
//{
////����ӿ�
//public:
//	//�������
//	void get_dis(int d)
//	{
//		_dis = d;
//	}
//	//�������
//	int put_dis()
//	{
//		return _dis;
//	}
////����
//private:
//	int _dis;//��Բ�ĵľ���
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
//		cout << "����Բ��" << endl;
//	}
//	else if (arr > 0)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//	return 0;
//}
//void equ_cube(int a1, int a2, int v1, int v2)
//{
//	if (v1 == v2)
//	{
//		if (a1 == a2)
//		{
//			cout << "�������������" << endl;
//			return;
//		}
//		cout << "���������岻���" << endl;
//		return;
//	}
//	cout << "���������岻���" << endl;
//}
//
////��������
//class cube
//{
////�����Ĳ����ӿ�
//public:
//	//���������
//	void get_cube(int l , int w,int h)
//	{
//		_long = l;
//		_wide = w;
//		_high = h;
//	}
//	//�������
//	int acr_cube()
//	{
//		return _long * _wide * 2 + _long * _high * 2 + _wide * _high * 2;
//	}
//	//�������
//	int vol_cube()
//	{
//		return _long * _wide * _high;
//	}
//	//�ж������������Ƿ����
//	void equ_cube(int v1, int v2, int a1, int a2)
//	{
//		if (v1 == v2)
//		{
//			if (a1 == a2)
//			{
//				cout << "�������������" << endl;
//				return;
//			}
//			cout << "���������岻���" << endl;
//			return;
//		}
//		cout << "���������岻���" << endl;
//	}
//
////������ĳ����
//private:
//	int _long;//��
//	int _wide;//��
//	int _high;//��
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
////������
//class man
//{
////����Ȩ�ޣ��������ķ��ʽӿ�
//public:
//
//	//�����ֽ���д��
//	void get_name(string s1)
//	{
//		_name = s1;
//	}
//
//	//�����ֽ��ж���
//	string read_name()
//	{
//		return _name;
//	}
//
//	//������������д��
//	void get_car(string car)
//	{
//		_car = car;
//	}
//
//	//�����ӽ���д��
//	void get_wife(string wife)
//	{
//		_wife = wife;
//	}
//
////����Ȩ�ޣ������ӡ����Է���
//protected:
//	string _name;//����
//	string _car;//����
////˽��Ȩ�ޣ������ӡ������Է��ʣ�ֻ���Լ����Է���
//private:
//	string _wife;//����
//};
//
//int main()
//{
//	man m1;
//	m1.get_name("����");
//	m1.get_car("��˹��˹��Ӱ");
//	m1.get_wife("�仨");
//	cout << "������˵����ֽУ�" << m1.read_name() << endl;
//	return 0;
//}
////�ýṹ��������ѧ��1
//struct stu1
//{
//	string _name;
//};
////����������ѧ��2
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