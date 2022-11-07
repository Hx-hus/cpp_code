#include<stdio.h>

void reverse_string(char* a)
{

	int sz = strlen(a);
	char t = *a;
	*a = *(a + sz - 1);
	*(a + sz - 1) = '\0';

	if (sz - 2 >= 2)
	{
		reverse_string(a + 1);
	}

	*(a + sz - 1) = t;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
//int my_strlen(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
//void reverse_string(char* arr)
//{
//	int right = my_strlen(arr) - 1;
//	char c = *arr;
//	*arr = *(arr + right);
//	*(arr + right) = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		return reverse_string(*(++arr));
//	*(arr + right) = *arr;
//}

//int factorial(int n)
//{
//	int i = 0;
//	for (i=n; i > 1; i--)
//	{
//		n = n * (i - 1);
//	}
//	return n;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int nn = factorial(n);
//	printf("%d", nn);
//	return 0;
//}

  

//int factorial(int n)
//{
//	if (n != 0)
//		return n * factorial (n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int nn=factorial(n);
//	printf("%d", nn);
//	return 0;
//}