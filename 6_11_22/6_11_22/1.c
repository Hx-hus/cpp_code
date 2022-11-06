#include<stdio.h>

int my_strlen(char arr[])
{
	int count = 0;
	int i = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
void reverse_string(char* arr)
{
	int right = my_strlen(arr)-1;
	char c = *arr;
	* arr = * (arr + right);
	*(arr + right) = '\0';
	if(my_strlen(arr+1)>=2)
		return reverse_string(*(arr + 1));
	*(arr + right) = * arr;
}
int main ()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}