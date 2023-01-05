#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int m = 0;
    while (scanf("%d", &m) != EOF)
    {
        int i = 0;
        int m_3 = m * m * m;
        int num = 0;
        int arr[100] = { 0 };
        for (i = 0; i < m; i++)
        {
            if (i < m - 1)
            {
                arr[i] = rand() %(m*m);
                num += arr[i];
            }
            else
            {
                arr[i] = m_3 - num;
                num += arr[i];
            }
        }
        if (num == m_3)
        {
            for (i = 0; i < m - 1; i++)
            {
                printf("%d+", arr[i]);
            }
            printf("%d", arr[i]);
            break;
        }
    }
    return 0;
}
   
//int is_or_no_str(char s1[], char s2[])
//{
//	char tmp[20] = { 0 };
//	strcpy(tmp, s1);
//	strcat(tmp, s1);
//	int ret = strstr(tmp, s2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	char s1[10] = { 0 };
//	char s2[10] = { 0 };
//	gets(s1);
//	gets(s2);
//	int ret = is_or_no_str(s1,s2);
//	if (ret == 1)
//	{
//		printf("是同一个\n");
//	}
//	else
//	{
//		printf("不是同一个\n");
//	}
//	return 0;
//}
//void left_str(char ch[], int len, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		int a = 0;
//		int tmp = ch[i];
//		for (j = 1; j < len - i; j++,a++)
//		{
//			ch[a] = ch[j];
//			if (j == len - i - 1)
//			{
//				ch[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	char ch[] = "ABCD";
//	int k = 0;
//	int len = strlen(ch);
//	scanf("%d", &k);
//	left_str(ch,len,k);
//	printf("左旋后：%s", ch);
//	return 0;
//}
//int findnum(int arr[3][3], int n)
//{
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		int j = 0;
//		for (; j < 3; j++)
//		{
//			if (arr[i][j] == n)
//			{
//				return 1;
//			}
//		}
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8.9} };
//	int n = 0;
//	scanf("%d", &n);
//	int r = findnum(arr,n);
//	if (r == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}