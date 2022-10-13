#include<stdio.h>


int main()
{
	int k = 107;
	char arr[3];
	arr[0] = k;
	arr[1] = "k";
	arr[2] = 'k';
	printf("%c\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%c\n", arr[2]);
}