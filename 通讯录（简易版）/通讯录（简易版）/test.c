#define _CRT_SECURE_NO_WARNINGS 1 

#include"addbook.h"

void menu()
{
	printf("************************************\n");
	printf("*****     1.添加     2.删除    *****\n");
	printf("*****     3.查找     4.修改    *****\n");
	printf("*****     5.显示     6.清空    *****\n");
	printf("*****     7.排序     0.退出    *****\n");
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
		printf("请选择:>");
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
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}