#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strncat(char* str1, const char* str2, size_t byte)
{
	char* cp = str1;
	assert(str1 && str2);
	int i = 0;
	while (*str1++)
	{
		;
	}
	str1--;
	while (byte--)
	{
		*(str1 + i) = *(str2 + i);
		i++;
	}
	return cp;
}
int main()
{
	char ch1[20] = "hello ";
	char ch2[] = "world haha";
	my_strncat(ch1, ch2, 5);
	printf("%s", ch1);
	return 0;
}
//void my_strncpy(char* str1, const char* str2, size_t byte)
//{	
//	assert(str1 && str2);
//	int i = 0;
//	while (byte--)
//	{
//		*(str1 + i) = *(str2 + i);
//		i++;
//	}
//}
//
//int main()
//{
//	char ch1[20] = { 0 };
//	char ch2[] = "hehe haha hehe haha";
//	my_strncpy(ch1, ch2, 4);
//	printf("%s", ch1);
//	return 0;
//}
//int cmp_dog(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//void singal_dog(int* pg)
//{
//	int count = 0;
//	int i = 0;
//	int arr[20] = { 0 };
//	int a = 0;
//	for (; i < 20; i++)
//	{
//		int j = 0;
//		count = *(pg + i);
//		for (j = i+1; j < 20; j++)
//		{
//			if (*(pg + j) == count)
//			{
//				arr[a]=count;
//				a++;
//			}
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (; j < 20; j++)
//		{
//			if (*(pg + j) == arr[i])
//			{
//				*(pg + j) = 0;
//			}
//		}
//	}
//	qsort(pg,20,4,cmp_dog);
//}
//int main()
//{
//	int dog[20] = { 1,2,2,3,3,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11 };
//	singal_dog(&dog);
//	int i = 0;
//	printf("µ¥Éí¹·ÊÇ£º");
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d ", dog[i]);
//	}
//	return 0;
//}