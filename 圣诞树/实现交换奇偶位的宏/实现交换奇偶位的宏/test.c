#define _CRT_SECURE_NO_WARNINGS 1 
#define SWAP(x) (x=(((x&0x55555555)<<1)+((x&0xaaaaaaaa)>>1)))

#include<stdio.h>

int main()
{
	int x = 1;
	//0000 0000 0000 0000 0000 0000 0000 0001
	SWAP(x);
	//0000 0000 0000 0000 0000 0000 0000 0010
	//交换后结果应该为2
	printf("%d", x);
	return 0;
}