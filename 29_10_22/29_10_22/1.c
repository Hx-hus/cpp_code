#include<stdio.h>

int is_leat_year(int a)
{
	if (a % 4 == 0 && a % 100 != 0 || a%400==0)
		return 1;
	return 0;
}
int main ()
{
	int a = 0;
	for (a = 1000; a <= 2000; a++)
	{
		if (is_leat_year(a)==1)
		{
			printf("%d ", a);

		}
	}

	return 0;
}