#define _CRT_SECURE_NO_WARNINGS 1 

#include"addbook.h"

void menu()
{
	printf("************************************\n");
	printf("*****     1.���     2.ɾ��    *****\n");
	printf("*****     3.����     4.�޸�    *****\n");
	printf("*****     5.��ʾ     6.���    *****\n");
	printf("*****     7.����     0.�˳�    *****\n");
	printf("************************************\n");
}
int main()
{
	int input = 0;
	addb ab;
	init_addbook(&ab);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			add_book(&ab);
			break;
		case 2:
			del_book(&ab);
			break;
		case 3:
			seek_book(&ab);
			break;
		case 4:
			amend_book(&ab);
			break;
		case 5:
			show_book(&ab);
			break;
		case 6:
			init_addbook(&ab);
			break;
		case 7:
			qsort(&ab, ab.sz, sizeof(ab.s[0]),name_sort);
			break;
		case 0:
			write_file(&ab);
			Free_book(&ab);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}