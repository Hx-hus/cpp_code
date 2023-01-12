#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

#define MAX 100
#define NAME_MAX 20
#define GEM_MAX 5
#define LOC_MAX 20
#define PH_MAX 12

struct addbook
{
	char name[NAME_MAX];
	int age;
	char gen[GEM_MAX];
	char loc[LOC_MAX];
	char ph[PH_MAX];
};

typedef struct addbooks
{
	struct addbook s[MAX];
	int sz;
}addb;

//功能实现
void init_addbook(addb* ab);//初始化通讯录
void add_book(addb* ab);//添加联系人
void del_book(addb* ab);//删除联系人
int find_book(addb* ab);//查找
void seek_book(addb* ab);//查找联系人
void amend_book(addb* ab);//修改联系人
void show_book(addb* ad);//显示全部联系人
int name_sort(const void* s1, const void* s2);//qsort