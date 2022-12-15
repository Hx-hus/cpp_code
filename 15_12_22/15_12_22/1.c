#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

int main()
{
	char ch = 0;
	printf("  %c\n", ch);
	printf(" %c%c%c\n", ch, ch, ch);
	return 0;
}
//int main()
//{
//	char c = 0;
//	char ch[3][3] = { 0 };
//	scanf("%c", &c);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			ch[i][j] = c;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c", ch[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}