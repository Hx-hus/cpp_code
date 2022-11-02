#include<stdio.h>

char my_reverse_string(char ch[], int i)
{
	if (ch[i] !='\0')
	{
		return my_reverse_string(ch[i + 1], i);
	}
	printf("%c", ch[i]);
}
int main()
{
	char ch[] = "aurgeuyr";
	int i = 0;
	my_reverse_string(ch[i],i);
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int c = 0;
//	int flb = 0;
//	scanf_s("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		flb = c + b;
//		c= b;
//		b = flb;
//		if (c == 0)
//			c++;
//	}
//	printf("%d", flb);
//	return 0;
//}
//int flbonacci(int a)
//{
//	if (a == 1 || a == 2)
//		return 1;
//	return flbonacci(a - 1)+flbonacci(a-2);
//
//}
//int main ()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int num = flbonacci(a);
//	printf("%d ", num);
//	return 0;
//}