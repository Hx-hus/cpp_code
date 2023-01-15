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
#define _MAX 3
#define INIT_MAX 2

struct addbook
{
	char name[NAME_MAX];
	int age;
	char gen[GEM_MAX];
	char loc[LOC_MAX];
	char ph[PH_MAX];
};
//��̬
//typedef struct addbooks
//{
//	struct addbook s[MAX];
//	int sz;
//}addb;

//��̬
typedef struct addbooks
{
	struct addbook* s;
	int sz;
	int max;
}addb;
//����ʵ��
void init_addbook(addb* ab);//��ʼ��ͨѶ¼
void add_book(addb* ab);//�����ϵ��
void del_book(addb* ab);//ɾ����ϵ��
int find_book(addb* ab);//����
void seek_book(addb* ab);//������ϵ��
void amend_book(addb* ab);//�޸���ϵ��
void show_book(addb* ad);//��ʾȫ����ϵ��
int name_sort(const void* s1, const void* s2);//qsort
void Free_book(addb* ab);//��ս��õ��ڴ�