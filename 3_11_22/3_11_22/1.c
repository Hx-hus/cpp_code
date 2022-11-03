#include<stdio.h>

void my_reverse_string(char arr[], int i)
{
	if(arr[i]!='\0')
	{ 
		i++;
		return my_reverse_string(arr[i], i);
	}
	printf("%c", arr[i]);
 }
int main()
{
	char arr[] = "asdfghj";
	int i = 0;
	my_reverse_string(&arr[i], i);
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
