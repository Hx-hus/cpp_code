#define _CRT_SECURE_NO_WARNINGS 1 

#include"addbook.h"

//��ʼ��ͨѶ¼
//��̬
//void init_addbook(addb* ab)
//{
//	assert(ab);
//	ab->sz= 0;
//	memset(ab->s, 0, sizeof(ab->s));
//}
//��̬
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
//���ļ��Ķ�̬�汾
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
//���ļ�
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
//�����ϵ��
//��̬�汾
//void add_book(addb* ab)
//{
//	assert(ab);
//	if (ab->sz == MAX)
//	{
//		printf("ͨѶ¼����");
//		return;
//	}
//	printf("����������:>");
//	scanf("%s", ab->s[ab->sz].name);
//	printf("����������:>");
//	scanf("%d", &(ab->s[ab->sz].age)); 
//	printf("�������Ա�:>");
//	scanf("%s", ab->s[ab->sz].gen);
//	printf("�������ַ:>");
//	scanf("%s", ab->s[ab->sz].loc);
//	printf("������绰:>");
//	scanf("%s", ab->s[ab->sz].ph);
//	printf("��ϵ����ӳɹ�\n");
//	ab->sz++;
//}
// ��̬�汾
//����
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
		printf("���ݳɹ�\n");
	}
}
void add_book(addb* ab)
{
	assert(ab);
	kuorong(ab);
	printf("����������:>");
	scanf("%s", ab->s[ab->sz].name);
	printf("����������:>");
	scanf("%d", &(ab->s[ab->sz].age));
	printf("�������Ա�:>");
	scanf("%s", ab->s[ab->sz].gen);
	printf("�������ַ:>");
	scanf("%s", ab->s[ab->sz].loc);
	printf("������绰:>");
	scanf("%s", ab->s[ab->sz].ph);
	printf("��ϵ����ӳɹ�\n");
	ab->sz++;
}
//����
int find_book(addb* ab)
{
	assert(ab);
	char ch[NAME_MAX] = { 0 };
	printf("��������ϵ������:>");
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
//ɾ����ϵ��
void del_book(addb* ab)
{
	assert(ab);
	int find = find_book(ab);
	if (-1==find)
	{
		printf("û���ҵ�����\n");
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
//������ϵ��
void seek_book(addb* ab)
{
	assert(ab);
	int i = find_book(ab);
	if (i == -1)
	{
		printf("û���ҵ�����ϵ��\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
		printf("%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n", ab->s[i].name,
			ab->s[i].age,
			ab->s[i].gen,
			ab->s[i].loc,
			ab->s[i].ph);
		
	}
}
//�޸���ϵ��
void amend_book(addb* ab)
{
	assert(ab);
	int i = find_book(ab);
	if (i == -1)
	{
		printf("û���ҵ�����ϵ��\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ab->s[i].name);
		printf("����������:>");
		scanf("%d", &(ab->s[i].age));
		printf("�������Ա�:>");
		scanf("%s", ab->s[i].gen);
		printf("�������ַ:>");
		scanf("%s", ab->s[i].loc);
		printf("������绰:>");
		scanf("%s", ab->s[i].ph);
		printf("��ϵ���޸ĳɹ�\n");
	}
}
//��ʾȫ����ϵ��
void show_book(addb* ab)
{
	assert(ab);
	printf("%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
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
//�ͷ��ڴ�
void Free_book(addb* ab)
{
	free(ab->s);
	ab->s = NULL;
	ab->max = 0;
	ab->sz = 0;
	ab = NULL;
}
//�ر�֮ǰ�Ѷ���д���ļ�
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
	printf("����ɹ�\n");
}