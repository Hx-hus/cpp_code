#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>

typedef struct A
{
	int val;
	struct A* next;
}A;

int test1(A** head)
{
	if (*head == NULL)
	{
		return head;
	}
	A* f, * s;
	f = head;
	s = head;
	while (f->next && f)
	{
		s = s->next;
		f = f->next->next;
	}
	return s;
}
int main()
{
	A* head;
	test1(&head);
	return 0;
}