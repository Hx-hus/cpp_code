#include<stdio.h>

int main() 
{
    int a;
    while (scanf_s("%d", &a) != EOF)
    {
        if (a >= 60)
            printf("Pass");
        else
            printf("Fail");

    }
    return 0;
}

//int Add(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf_s("%d%d", &x, &y);
//	int c = Add(x, y);
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//    int a, b;
//    while (scanf_s("%d %d", &a, &b) != EOF)
//    { 
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}