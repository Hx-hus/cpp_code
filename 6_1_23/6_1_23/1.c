#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Swap(char* e1, char* e2, size_t w)
{
	int i = 0;
	for (; i < w; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}

}
int cmp(const void* e1, const void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}
void bub_sort(void* arr, size_t sz, size_t w, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)arr + j * w, (char*)arr + (j + 1) * w) > 0)
			{
				Swap((char*)arr + j * w, (char*)arr + (j + 1) * w, w);
			}
		}
	}
}
int main()
{
	int arr[10] = { 3,4,2,5,7,9,1,8,6,10 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	size_t w = sizeof(arr[0]);
	bub_sort(arr,sz,w,cmp);
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//struct s
//{
//	char name[20];
//	int age;
//};
//
//int cmp_arr(const void* e1, const void* e2)
//{
//	return (*(int*)e1) - (*(int*)e2);
//}
//int cmp_ch(const void* e1, const void* e2)
//{
//	return strcmp((char*)e1, (char*)e2);
//}
//int cmp_s(const void* e1, const void* e2)
//{
//	return ((struct s*)e1)->age - ((struct s*)e2)->age;
//}
//void test1()
//{
//	int arr[10] = { 3,4,5,8,9,1,2,6,7,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int w = sizeof(arr[0]);
//	qsort(arr, sz, w, cmp_arr);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void test2()
//{
//	char ch[10] = "qwertyuio";
//	int sz = strlen(ch);
//	int w = sizeof(ch[0]);
//	qsort(ch, sz, w, cmp_ch);
//	printf("%s", ch);
//	printf("\n");
//}
//void test3()
//{
//	struct s s1[3] = {"zhangsan",18,"lisi",19,"wangwu",17};
//	int sz = sizeof(s1) / sizeof(s1[0]);
//	int w = sizeof(s1);
//	qsort(s1, sz, w, cmp_s);
//
//}
//
//int main()
//
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}