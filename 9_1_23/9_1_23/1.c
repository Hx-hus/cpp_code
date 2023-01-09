#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	char* p = str1;
	while (*p)
	{
		s2 = str2;
		s1 = p;
		while (s1 != '\0' && s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return p;
		}
		p++;
	}
	return NULL;
}
int main()
{
	char ch1[] = "qwerasdddff";
	char ch2[] = "ddf";
	char* str=my_strstr(ch1,ch2);
	if (str == NULL)
	{
		printf("ch2不是ch1的字串");
	}
	else
	{
		printf("ch2是ch1的字串");
	}
	return 0;
}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 == '\0' || *str2 == '\0')
//	{
//		return 0;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "abcdes";
//	int cmp = my_strcmp(ch1, ch2);
//	if (cmp > 0)
//	{
//		printf("ch1>ch2");
//	}
//	else if (cmp == 0)
//	{
//		printf("ch1=ch2");
//	}
//	else
//	{
//		printf("ch1<ch2");
//	}
//	return 0;
//}
//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* p = str1;
//	while (*str1++)
//	{
//		;
//	}
//	str1--;
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return p;
//}
//
//int main()
//{
//	char ch1[40] = "real man ";
//	char ch2[] = "do not need a girlfriend";
//	my_strcat(ch1,ch2);
//	printf("%s", ch1);
//	return 0;
//}
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* p = str1;
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char ch1[25] = "hello";
//	char ch2[25] = "baodaqiannvyoulaogong";
//	my_strcpy(ch1,ch2);
//	printf("%s", ch1);
//	return 0;
//}
////计数器型
//size_t my_strlen1(const char* ch)
//{
//	assert(ch);
//	int count = 0;
//	while (*ch++)
//	{
//		count++;
//	}
//	return count;
//}
////指针减指针型
//size_t my_strlen2(const char* ch)
//{
//	assert(ch);
//	char* p = ch;
//	while (*ch++)
//	{
//		;
//	}
//	ch--;
//	return ch-p;
//}
////递归
//size_t my_strlen3(const char* ch)
//{
//	assert(ch);
//	if (*ch)
//	{
//		return 1 + my_strlen3(ch - 1);
//	}
//	return 0;
//}
//int main()
//{
//	char ch[] = "asdcfdgfg";
//	int len1 = my_strlen1(ch);
//	int len2 = my_strlen2(ch);
//	int len3 = my_strlen3(ch);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	printf("%d\n", len3);
//	return 0;
//}