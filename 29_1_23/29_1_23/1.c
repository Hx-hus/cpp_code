#define _CRT_SECURE_NO_WARNINGS 1 


#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	cout << "test 1 =======" << endl;
	double f = 3.1415926535;
	cout << f << endl; // 3.14159
	cout << setiosflags(ios::fixed); //ֻ�����������ú�setprecision��������С����λ����
	cout << setprecision(0) << f << endl;
	��������������������������������
		��Ȩ����������ΪCSDN������JoannaJuanCV����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
		ԭ�����ӣ�https ://blog.csdn.net/zfjBIT/article/details/93972484
//#include<stdio.h>
//int main() {
//    int n[3];
//    char a, b, c;
//    //��������
//    for (int i = 0; i < 3; i++) {
//        scanf("%d", &n[i]);
//    }
//    //����
//    for (int i = 0; i < 3; i++) {
//        int temp;
//        for (int j = i + 1; j < 3; j++) {
//            if (n[i] > n[j]) {
//                temp = n[i];
//                n[i] = n[j];
//                n[j] = temp;
//            }
//        }
//    }
//    a = getchar();
//    b = getchar();
//    c = getchar();
//    printf("%d %d %d", n[a - 'A'], n[b - 'A'], n[c - 'A']);
//    return 0;
//}