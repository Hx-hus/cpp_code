#include<stdio.h>

void my_reverse_string(char arr[], int x,int y)
{
	if(x<=y)
	{	 
		x++;
		return my_reverse_string(arr[x], x,y);
	}
	printf("%c", arr[x]);
 }
int main()
{
	char arr[] = "bit";
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	my_reverse_string(arr,left,right);
	return 0;
}
//char my_reverse_string(char* ch[], int i)
//{
//	if (ch[i] != '\0')
//	{
//		i++;
//		return my_reverse_string(ch[i ], i);
//	}
//	printf("%p", *ch[i]);
//}
//int main()
//{
//	char ch[] = "aurgeuyr";
//	int i = 0;
//	my_reverse_string(&ch[i], i);
//	return 0;
//}
