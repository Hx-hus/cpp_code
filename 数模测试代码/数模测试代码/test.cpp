#define _CRT_SECURE_NO_WARNINGS 1

#include<algorithm>
#include<iostream>
#include<vector>
#include<cstdio>


using namespace std;

typedef pair<int, int> PII;

const int N = 1400;
double dist[N][N];//dist是每个居民点之间的距离
bool h_est[N];//去过的点打上标记不在去

int main()
{
	int a;
	scanf("%d", &a);
	int ans = 0;//临时存放最短距离的居民点
	for (int i = 1; i<= a; i++)
	{
		for (int j = i; j <= a; j++)
			cin >> dist[i][j];
			for (int j = 1; j <= a; j++)
				if (dist[i][j] == 0.0 || (dist[i][j] < dist[i][ans] && !h_est[j])) ans = j;
			h_est[ans] = true;
			printf("%d -> %d\n", i, ans);
	}
	return 0;
}
