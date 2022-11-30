#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<string.h>

void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = *right;
        *right = *left;
        *left = tmp;
        left++;
        right--;
    }
}
int main()
{
    char arr[101] = { 0 };
    gets(arr);
    char* start = arr;
    char* end = arr + strlen(arr) - 1;
    reverse(start, end);
    char* cur = arr;
    while (*cur != '\0')
    {
        while (*cur != ' ' && *cur != '\0')
        {
            cur++;
        }
        reverse(start, cur - 1);
        start = cur + 1;
        cur += 1;

    }
    printf("%s\n", arr);
    return 0;
}
//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	int sz = strlen(str);
//	int right = sz - 1;
//	int left = 0;
//	int i = 0;
//	while (left <= right)
//	{
//		if (str[right] == ' ')
//		{
//			i++;
//			while (str[right+i])
//			{
//				char tmp = str[right + i];
//				str[right + i] = str[left];
//				str[left] = tmp;
//			}
//			i = 0;
//		}
//		left++;
//		right--;
//	}
//	printf("%s\n", str);
//	return 0;
//}
//#include<stdio.h>
//void inver_str(char str,int sz)
//{
//	int left = 0;
//	int i = 0;
//	while (left <=(sz-1))
//	{
//		if (str[(sz-1)]==' ')
//		{
//			i++;
//			while (str[(sz-1)])
//			{
//				char tmp = (*p) + right + i;
//				(*p) + left )= (*p) + right + i;
//
//			}
//		}
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	scanf("%s", &str);
//	int sz = strlen(str);
//	inver_str(str,sz);
//	printf("%s", str);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int max = 0;
//	scanf("%d%d", &A, &B);
//	if (A > B)
//	{
//		max = A;
//	}
//	else if (A < B)
//	{
//		max = B;
//	}
//	else
//	{
//		printf("%d", A);
//	}
//	while (max)
//	{
//		if (max % A == 0 && max % B == 0)
//		{
//			printf("%d", max);
//			break;
//		}
//		else
//		{
//			max++;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	unsigned int A = 0;
//	unsigned int B = 0;
//	scanf("%d%d", &A, &B);
//	
//	if (A % B == 0 )
//	{
//		printf("%d", A);
//	}
//	else if (B % A == 0)
//	{
//		printf("%d", B);
//	}
//	else if (A % 2 == 0 && B % 2 == 0)
//	{
//		printf("%d", (A / 2) * B);
//	}
//	else
//	{
//		printf("%d", A * B);
//	}
//	return 0;
//}

//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d%d", &A, &B);
//	printf("%d", A * B);
//	return 0;
//}