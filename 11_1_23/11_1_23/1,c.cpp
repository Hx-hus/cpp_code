#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<string.h>
#include<assert.h>

void* my_memmove(void* dest, const void* src, size_t byte)
{
	void* p = dest;
	assert(dest && src);
	while (byte--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return p;
}

int main()
{
	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	my_memmove(arr1, arr1+2, 20);
	for (; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
//char* my_strstr(const char* ch1, const char* ch2)
//{
//	assert(ch1 && ch2);
//	const char* cp1 = ch1;
//	const char* cp2 = ch2;
//	const char* p = ch1;
//	while (*p)
//	{
//		cp2 = ch2;
//		cp1 = p;
//		while (*cp1!='\0'&&*cp2!='\0'&& * cp1 == *cp2)
//		{
//			cp1++;
//			cp2++;
//		}
//		if (*ch2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char ch1[] = "asdfffghjsd";
//	char ch2[] = "ffg";
//	char* cp1 = strstr(ch1, ch2);
//	char* cp2 = my_strstr(ch1, ch2);
//	if (cp1 == NULL && cp2 == NULL)
//	{
//		printf("ch2不是ch1的字串");
//	}
//	else
//	{
//		printf("ch2是ch1的字串");
//	}
//	return 0;
//}
//int my_strcmp(const char* ch1, const char* ch2)
//{
//	assert(ch1 && ch2);
//	while (*ch1++ == *ch2++)
//	{
//		if (*ch2 == '\0')
//		{
//			return 0;
//		}
//	}
//	ch1--;
//	ch2--;
//	return *ch1 - *ch2;
//}
//int main()
//{
//	char ch1[] = "asdfghjkq";
//	char ch2[] = "asdfghjkl";
//	int len1 = strcmp(ch1, ch2);
//	int len2 = my_strcmp(ch1, ch2);
//	if (len1 > 0 && len2 > 0)
//	{
//		printf("ch1>ch2");
//	}
//	else if (len1 == 0 && len2 == 0)
//	{
//		printf("ch1==ch2");
//	}
//	else
//	{
//		printf("ch1<ch2");
//	}
//	return 0;
//}
//char* my_strcat(char* ch1, const char* ch2)
//{
//	char* cp = ch1;
//	assert(ch1 && ch2);
//	const char* c = ch2;
//	int count = 0;
//	while (*ch1++)
//	{
//		;
//	}
//	ch1--;
//	while (*ch2++)
//	{
//		count++;
//	}
//	while (count--)
//	{
//		*ch1++ = *c++;
//	}
//	*ch1 = '\0';
//	return cp;
//}
//
//int main()
//{
//	char ch1[20] = "hello ";
//	char ch2[] = "world";
//	//strcat(ch1, ch2);
//	my_strcat(ch1, ch1);
//	printf("%s", ch1);
//}
//char* my_strcpy(char* ch1, const char* ch2)
//{
//	char* cp = ch1;
//	assert(ch1 && ch2);
//	while (*ch1++=*ch2++)
//	{
//		;
//	}
//	return cp;
//}
//int main()
//{
//	char ch1[25] = { 0 };
//	char ch2[] = "asdfghjkl";
//	//strcpy(ch1, ch2);
//	my_strcpy(ch1, ch2);
//	printf("%s", ch1);
//	return 0;
//}

//size_t my_strlen(const char* ch)
//{
//	assert(ch);
//	size_t count = 0;
//	while (*ch++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char ch[] = "asdfghj";
//	int len1 = strlen(ch);
//	int len2 = my_strlen(ch);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	return 0;
//}