#define _CRT_SECURE_NO_WARNINGS 1 

#include"addbook.h"

//初始化通讯录
//静态
//void init_addbook(addb* ab)
//{
//	assert(ab);
//	ab->sz= 0;
//	memset(ab->s, 0, sizeof(ab->s));
//}
//动态
//void init_addbook(addb* ab)
//{
//	assert(ab);
//	ab->sz = 0;
//	addb* ptr = (addb*)calloc(_MAX, sizeof(addb));
//	if (ptr == NULL)
//	{
//		perror(ptr);
//		return;
//	}
//	ab->s = ptr;
//	ab->max = _MAX;
//}
//有文件的动态版本
void init_addbook(addb* ab)
{
	assert(ab);
	ab->sz = 0;
	ab->max = _MAX;
	addb* ptr = (addb*)calloc(_MAX, sizeof(addb));
	if (ptr == NULL)
	{
		perror(ptr);
		return;
	}
	ab->s = ptr;
	Fopenfile(ab);
}
//打开文件
void Fopenfile(addb* ab)
{
	FILE* pf = fopen("addbook.txt", "wd");
	if (pf == NULL)
	{
		perror(36);
		return;
	}
	struct addbook tmp = { 0 };
	int i = 0;
	while (fread(&tmp, sizeof(ab->s), 1, pf))
	{
		kuorong(ab);
		ab->s[i] = tmp;
		ab->sz++;
		i++;
	}
	fclose(pf);
	pf = NULL;
}
//添加联系人
//静态版本
//void add_book(addb* ab)
//{
//	assert(ab);
//	if (ab->sz == MAX)
//	{
//		printf("通讯录已满");
//		return;
//	}
//	printf("请输入姓名:>");
//	scanf("%s", ab->s[ab->sz].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(ab->s[ab->sz].age)); 
//	printf("请输入性别:>");
//	scanf("%s", ab->s[ab->sz].gen);
//	printf("请输入地址:>");
//	scanf("%s", ab->s[ab->sz].loc);
//	printf("请输入电话:>");
//	scanf("%s", ab->s[ab->sz].ph);
//	printf("联系人添加成功\n");
//	ab->sz++;
//}
// 动态版本
//扩容
void kuorong(addb* ab)
{
	if (ab->sz == ab->max)
	{
		addb* ptr = (addb*)realloc(ab->s, (ab->max + INIT_MAX) * sizeof(addb*));
		if (ptr == NULL)
		{
			perror(ptr);
			return;
		}
		ab->max += INIT_MAX;
		printf("扩容成功\n");
	}
}
void add_book(addb* ab)
{
	assert(ab);
	kuorong(ab);
	printf("请输入姓名:>");
	scanf("%s", ab->s[ab->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(ab->s[ab->sz].age));
	printf("请输入性别:>");
	scanf("%s", ab->s[ab->sz].gen);
	printf("请输入地址:>");
	scanf("%s", ab->s[ab->sz].loc);
	printf("请输入电话:>");
	scanf("%s", ab->s[ab->sz].ph);
	printf("联系人添加成功\n");
	ab->sz++;
}
//查找
int find_book(addb* ab)
{
	assert(ab);
	char ch[NAME_MAX] = { 0 };
	printf("请输入联系人姓名:>");
	scanf("%s", ch);
	int i = 0;
	for (; i < ab->sz; i++)
	{
		if (!strcmp(ab->s[i].name , ch))
		{
			return i;
		}
	}
	return -1;
}
//删除联系人
void del_book(addb* ab)
{
	assert(ab);
	int find = find_book(ab);
	if (-1==find)
	{
		printf("没有找到此人\n");
	}
	else
	{
		for (; find < ab->sz - 1; find++)
		{
			ab->s[find] = ab->s[find + 1];
		}
		ab->sz--;
	}
}
//查找联系人
void seek_book(addb* ab)
{
	assert(ab);
	int i = find_book(ab);
	if (i == -1)
	{
		printf("没有找到此联系人\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "姓名", "年龄", "性别", "地址", "电话");
		printf("%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n", ab->s[i].name,
			ab->s[i].age,
			ab->s[i].gen,
			ab->s[i].loc,
			ab->s[i].ph);
		
	}
}
//修改联系人
void amend_book(addb* ab)
{
	assert(ab);
	int i = find_book(ab);
	if (i == -1)
	{
		printf("没有找到此联系人\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", ab->s[i].name);
		printf("请输入年龄:>");
		scanf("%d", &(ab->s[i].age));
		printf("请输入性别:>");
		scanf("%s", ab->s[i].gen);
		printf("请输入地址:>");
		scanf("%s", ab->s[i].loc);
		printf("请输入电话:>");
		scanf("%s", ab->s[i].ph);
		printf("联系人修改成功\n");
	}
}
//显示全部联系人
void show_book(addb* ab)
{
	assert(ab);
	printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "姓名", "年龄", "性别", "地址", "电话");
	int i = 0;
	for (; i < ab->sz; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n", ab->s[i].name,
													ab->s[i].age,
													ab->s[i].gen,
													ab->s[i].loc,
													ab->s[i].ph);
	}
}
//qsort
int name_sort(const void* s1, const void* s2)
{
	assert(s1 && s2);
	return strcmp((char*)s1, (char*)s2);
}
//释放内存
void Free_book(addb* ab)
{
	free(ab->s);
	ab->s = NULL;
	ab->max = 0;
	ab->sz = 0;
	ab = NULL;
}
//关闭之前把东西写入文件
void write_file(addb* ab)
{
	FILE* pf = fopen("addbook.txt", "wb");
	if (pf == NULL)
	{
		perror(write_file);
		return;
	}
	int i = 0;
	for (; i < ab->sz; i++)
	{
		fwrite(ab->s + i, sizeof(ab->s), 1, pf);
	}
	fclose(pf);
	pf = NULL;
	printf("保存成功\n");
}