#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main()
{
	char arr1[] = "lixindameinv!!!";
	char arr[] = "###############";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr[left] = arr1[left];
		arr[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr);
		Sleep(250);
	}
	return 0;
}

