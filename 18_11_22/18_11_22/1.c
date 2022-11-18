#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int my_strlen(char* arr)
{
	int i = 0;
	while (*arr != '\0')
	{
		i++;
		*arr++;
	}
	return i;
}
int main()
{
	char arr[] = "weqyufbweufyuwgtyrw";
	int i = my_strlen(arr);
	printf("%d", i);
	return 0;
}
//int my_Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int Add = my_Add(a,b);
//	printf("%d", Add);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int Add = 0;
//	scanf("%d%d", &a, &b);
//	Add = a + b;
//	printf("%d", Add);
//	return 0;
//}
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	printf("%c", a);
//	return 0;
//}
//int main()
//{
//    double a = 0;
//    scanf("%lf\n", &a);
//    printf("%.3lf", a);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d\n", a);
//    return 0;
//}
//int main()
//{
//	printf("Hello Nowcoder!");
//	return 0;
//}