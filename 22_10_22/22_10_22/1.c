#include<stdio.h>

int main()
{
	int l = 0, m = 0, u = 0, v = 0, shu = 0;
	int i = 0;
	int r = 0;
	int arr[5000];
	scanf_s("%d%d", &l, &m);
	for (r = 0; r < l; r++)
		arr[r] = r;
	for (i = 0; i < m; i++)
	{
		scanf_s("%d%d", &u, &v);
		for (r= u; r <= v; r++)
		{
			arr[r] = -1;
		}
		for (r = 0; r < l; r++)
		{
			if (arr[r] !=-1)
				shu++;
		}

	}
	printf("%d\n", shu);
	return 0;
}