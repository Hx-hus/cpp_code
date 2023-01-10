#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

void* my_memmove(void* dest, void* src, size_t count)
{
	void* re = dest;
	assert(dest && src);
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest =(char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return re;
}

int main()
{
	int arr1[20] = { 0 };
	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1,arr2,20);
	int i = 0;
	for (; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
//typedef struct {
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//
//int main()
//{
//	printf("%d", sizeof(AA_t));
//	return 0;
//}