#define _CRT_SECURE_NO_WARNINGS 1 

#include<algorithm>
#include<iostream>

using namespace std;
struct  zhixian  //记录 
{
    double k;
    double b;
}a[500000];
bool cmp(zhixian q, zhixian w)  //排序 
{
    if (q.k != w.k)
        return q.k > w.k;
    else
        return q.b > w.b;
}
int main() {
    int temp = 0;
    for (int x1 = 0; x1 < 20; x1++)  //遍历每个点 
        for (int y1 = 0; y1 < 21; y1++)
            for (int x2 = 0; x2 < 20; x2++)
                for (int y2 = 0; y2 < 21; y2++)
                {
                    if (x1 != x2)  //分母不为零，垂直另算 
                    {
                        double k = (double)(y2 - y1) / (x2 - x1);
                        double b = (double)(y2 - x2 * k);
                        //a[temp].k=k;
                        //a[temp++].b=b;
                        a[temp++] = { k,b };
                    }
                }
    int ans = 0;
    sort(a, a + temp, cmp);
    for (int i = 0; i < temp; i++)
        if (fabs(a[i].k - a[i + 1].k) > 1e-8 || fabs(a[i].b - a[i + 1].b) > 1e-8)
            ans++;
    ans += 20;  //垂直的有20条 
    cout << ans << endl;
    return 0;
}



//const int N = 20220, INF = 1e9;
//int sp[9];
//
//int main()
//{
//	int res = 0;
//	for (int i = 1; i < INF; i++)
//	{
//		int s = i;
//		bool s_1 = false;
//		while (s)
//		{
//			if (sp[s % 10] <= 2021)
//			{
//				sp[s % 10]++;
//				s /= 10;
//			}
//			else
//			{
//				s_1 = true;
//				break;
//			}
//		}
//		if (s_1)break;
//		res++;
//	}
//	printf("%d", res);
//	return 0;
//}

