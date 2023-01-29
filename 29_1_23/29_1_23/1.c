#define _CRT_SECURE_NO_WARNINGS 1 


#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	cout << "test 1 =======" << endl;
	double f = 3.1415926535;
	cout << f << endl; // 3.14159
	cout << setiosflags(ios::fixed); //只有在这项设置后，setprecision才是设置小数的位数。
	cout << setprecision(0) << f << endl;
	————————————————
		版权声明：本文为CSDN博主「JoannaJuanCV」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
		原文链接：https ://blog.csdn.net/zfjBIT/article/details/93972484
//#include<stdio.h>
//int main() {
//    int n[3];
//    char a, b, c;
//    //输入数字
//    for (int i = 0; i < 3; i++) {
//        scanf("%d", &n[i]);
//    }
//    //排序
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