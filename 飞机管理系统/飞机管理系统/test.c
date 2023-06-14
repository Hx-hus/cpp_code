#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define N 100

typedef struct plane
{
    char ID[10]; /*�������*/
    char BePlace[10];/*�ɻ���ɵص�*/
    char EnPlace[10];/*�ɻ������յ�*/
    char data[15];/*�ɻ����ʱ��*/
    int max;/*�ɻ����˿�����*/
    int num;/*�ɻ�����Ʊ��*/
}PLANE; PLANE ti[N];


typedef struct user
{
    char name[20];
    int number;
    char id[20];
    char seat[3];


}USER; USER si[N];


int n, n1;/*��ǰ�ĺ�����Ŀ�Լ��¼���ĺ���*/
int e, r;
void menu();
void menu1();


void input(int i) /* ���뺽��ģ�飬enter����ģ�� */
{
    printf("�����뺽����ţ�\n");
    scanf("%s", ti[i].ID);

    printf("��������ɵص㣺\n");
    scanf("%s", ti[i].BePlace);

    printf("�����뽵��ص㣺\n");
    scanf("%s", ti[i].EnPlace);

    printf("���������ʱ�䣺\n");
    scanf("%s", ti[i].data);

    printf("�����������λ��\n");
    scanf("%d", &ti[i].max);
    ti[i].num = 0;
}


void enter() /* ��Ӻ���ģ�� */
{
    int i;
    system("cls"); /*����*/
    n1 = 0;
    n = n + n1;
    printf("�����뺽�����Ŀ:");
    scanf("%d", &n1); /*Ҫ����ļ�¼����*/
    printf("\n����������(ԭ����%d�˺���)\n\n", n);
    for (i = n; i < n + n1; i++)
    {
        printf("\n������� %d �����¼.\n", i + 1);
        input(i); /*�������뺯��*/
    }
    getchar();
    menu();
}


void printf_one(int i) /*��ʾһ����¼�ĺ���*/
{
    printf("\t%-8s %-8s %-8s %-8s %-8d %-8d ", ti[i].ID, ti[i].BePlace, ti[i].EnPlace, ti[i].data, ti[i].max, ti[i].num);
}




void dele(int k) /* ɾ���û���Ϣ,shanchu����ģ�� */
{
    int i;
    for (i = (k + 1); i < N; i++) {
        strcpy(si[k].name, si[k + 1].name);
        si[k].number = si[k + 1].number;
        strcpy(si[k].id, si[k + 1].id);
    }
}


int shanchu(struct plane a) /* ɾ���û���Ʊģ��,��Ʊ����ģ�� */
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (strcmp(a.ID, si[i].id) == 0)
        {
            dele(i);
        }
    }
    return i;
}


int browse() /* ���ģ�� */
{
    int i;
    r = 0;
    system("cls");
    puts("\n\t------------------------------�������------------------------------");
    printf("\n\t������� ��ɵص� ����ص� ���ʱ�� ���˿� ����Ʊ��\n");
    for (i = 0; i < n + n1; i++)
    {
        r = r + ti[i].num;
    }
    for (i = 0; i < n + n1 - r - 2; i++)
    {
        printf_one(i);
        printf("\n");
    }
    getchar();
    getchar();
    menu();
    return i;
}


void search_time() /* ʱ���ѯģ�飬��ѯ����ģ�� */
{
    int i, m = 0;
    struct plane s;
    system("cls");
    printf("\n\nEnter the time:");
    scanf("%s", s.data); /*���������ʱ��*/
    puts("\n--------------------------------------------------------------------");
    printf("\n\t������� ��ɵص� ����ص� ���ʱ�� ���˿� ����Ʊ��\n");
    for (i = 0; i < n + n1; i++)
    {
        if (strcmp(s.data, ti[i].data) == 0)
        {
            m++;
            if ((m != 0) && (m % 10 == 0)) /*Ŀ���Ƿ�����ʾ*/
            {
                printf("\n\nPress any key to contiune . . .");
                getchar();
                puts("\n\n");
            }
            printf_one(i);
            printf("\n"); /*������ʾһ����¼�ĺ���*/
        }
    }
    puts("\n--------------------------------------------------------------------");
    getchar(); /*�����⽡*/
    getchar();
    menu1();
}


void serch_end() /* �յ��ѯģ�飬��ѯ����ģ�� */
{
    int i, m = 0;
    struct plane s;
    system("cls");
    printf("\n\nEnter the end Place:");
    scanf("%s", s.EnPlace); /*����Ҫ����ĵط�*/
    puts("\n--------------------------------------------------------------------");
    printf("\n\t������� ��ɵص� ����ص� ���ʱ�� ���˿� ����Ʊ��\n");
    for (i = 0; i < n + n1; i++)
    {
        if (strcmp(ti[i].EnPlace, s.EnPlace) == 0)
        {
            m++;
            if ((m != 0) && (m % 10 == 0)) /*Ŀ���Ƿ�����ʾ*/
            {
                printf("\n\nPress any key to contiune . . .");
                getchar();
                puts("\n\n");
            }
            printf_one(i);
            printf("\n"); /*������ʾһ����¼�ĺ���*/
        }
    }
    puts("\n--------------------------------------------------------------------");
    getchar(); /*�����⽡*/
    getchar();
    menu1();
}


void menu1() /* ����ģ�� */
{
    int n, w1;
    do
    {
        system("cls"); /*����*/
        puts("\t\t\t\t �ɻ���Ʊ����!\n\n");
        puts("\t\t*********************MENU*********************\n\n");
        puts("\t\t\t\t1.����ʱ����Һ���");
        puts("\t\t\t\t2.���յص���Һ���");
        puts("\t\t\t\t3.�������˵�");
        puts("\n\n\t\t**********************************************\n");
        printf("Choice your number(1-3): [ ]\b\b");
        scanf("%d", &n);
        if (n < 1 || n>3) /*��ѡ����������ж�*/
        {
            w1 = 1;
            printf("your choice is not between 1 and 3,Please input again:");
            getchar();
            getchar();
        }
        else w1 = 0;
    }

    while (w1 == 1); /*ѡ����*/
    switch (n)
    {
    case 1:search_time(); break;
    case 2:serch_end(); break;
    case 3:menu(); break;
    }
}


int search() /* ��Ʊ�Ĳ���ģ�飬book����ģ�� */
{
    int i, k;
    struct plane s;
    k = -1;
    printf("������Ҫ��Ʊ����ɵص�:\n");
    scanf("%s", s.BePlace);/*����Ҫ��ɵĵط�*/
    printf("������Ҫ��Ʊ�Ľ���ص�:\n");
    scanf("%s", s.EnPlace);/*����Ҫ����ĵط�*/
    printf("������Ҫ��Ʊ�����ʱ��:\n");
    scanf("%s", s.data); /*���������ʱ��*/
    for (i = 0; i < n + n1; i++) /*����Ҫ�޸ĵ�����*/
    {
        if (strcmp(s.BePlace, ti[i].BePlace) == 0 && strcmp(s.EnPlace, ti[i].EnPlace) == 0 && strcmp(s.data, ti[i].data) == 0)
        {
            k = i; /*�ҵ�Ҫ�޸ĵļ�¼*/
            strcpy(s.data, ti[i].data);
            printf_one(k);
            break; /*������ʾһ����¼�ĺ���*/
        }
    }

    if (k == -1)
    {
        printf("\n\nNO exist!");
        return -1;
    }
    else
        return k;
}


void book() /* ��Ʊģ�� */
{
    int i;
    system("cls");
    r = 0;
    printf("��ӭ������Ʊ����!\n");
    printf("�ɻ�����20����λ��ÿ����4����λ��ÿ�ŷ�ΪA,B,C,D������A,D��������\n19,20Ϊ����������λѡ����ѡ�������ѡ��λ��");
    printf("\n\n\n��������������:\n"); /*�û���Ϣ����*/
    scanf("%s", si[e].name);
    printf("�������������֤��:\n");
    scanf("%d", &si[e].number);
    printf("����������ѡ����λ��:\n");
    scanf("%s", si[e].seat);
    i = search();
    if (i != -1)
    {
        if (ti[i].num >= ti[i].max)
        {
            printf("\n���˺���Ʊ�����꣡");
        }
        else
        {
            ti[i].num++;
            strcpy(si[e].id, ti[i].ID);
            e++;
            printf("\n��Ʊ�ɹ�!\n");
        }
    }
    else
    {
        printf("�ú��಻����!\n");
    }
    getchar();
    getchar(); /*�����⽡*/
    menu();
}


void back() /* ��Ʊģ�� */
{
    int i, k = -1;
    struct plane s;
    char name[20];
    int number;
    system("cls");
    printf("��ӭ������Ʊ����!\n");
    printf("\n��������������:\n");
    scanf("%s", name);
    printf("�������������֤��:\n");
    scanf("%d", &number);
    printf("\n\n���뺽�����:");
    scanf("%s", s.ID); /*����Ҫ����ĵط�*/
    for (i = 0; i < n + n1; i++) /*����Ҫ�޸ĵ�����*/
    {
        if (strcmp(s.ID, ti[i].ID) == 0)
        {
            k = i; /*�ҵ�Ҫ�޸ĵļ�¼*/
            printf_one(k);
            break; /*������ʾһ����¼�ĺ���*/
        }
    }
    if (k == -1)
    {
        printf("\n\nNO exist!");
    }
    else
    {
        ti[i].num--;
        shanchu(s);// r--;
        printf("\n��Ʊ�ɹ�!\n");
    }
    getchar(); /*�����⽡*/
    getchar(); /*�����⽡*/
    menu();
}


void watch() /*���������Ϣģ��*/
{
    int i;
    system("cls");
    r = 0;
    for (i = 0; i < n + n1; i++)
    {
        r = r + ti[i].num;
    }
    printf("\n\t-------------------������Ϣ-------------------\n");
    printf("\n\t�� ��  ���֤��   ��λ��  ���򺽰����\n");
    for (i = 0; i < r; i++)
    {
        printf("\t%-6s %-8d %8s %5s\n", si[i].name, si[i].number, si[i].seat, si[i].id);
    }
    printf("\n\t----------------------------------------------\n");
    getchar();
    getchar();
    menu();
}

void save()/*�ļ�����*/
{
    int w = 1, m = 1;
    r = 0;
    FILE* fp, * fp1;
    int i, j;
    system("cls");
    if ((fp = fopen("ticket.txt", "wb")) == NULL) /*������򿪷�ʽ,�ڴ�ǰ�ļ�¼������*/
    {
        printf("\nCannot open file\n");
        return;
    }
    for (i = 0; i < n + n1; i++)
        if (fwrite(&ti[i], sizeof(struct plane), 1, fp) != 1)
        {
            printf("file write error\n");
            w = 0;
        }
    if (w == 1)
    {
        printf("ticket file save ok!\n");
    }
    fclose(fp);
    if ((fp1 = fopen("sale.txt", "wb")) == NULL) /*������򿪷�ʽ,�ڴ�ǰ�ļ�¼������*/
    {
        printf("\nCannot open file\n");
        return;
    }
    for (i = 0; i < n + n1; i++)
    {
        r = r + ti[i].num;
    }
    for (j = 0; j <= r; j++)
        if (fwrite(&si[j], sizeof(struct user), 1, fp1) != 1)
        {
            printf("file write error\n");
            m = 0;
        }
    if (m == 1)
    {
        printf("sale file save ok!\n");
    }
    fclose(fp1);

    getchar();
    getchar();
    menu();
}


void load() /* ����ģ�� */
{
    FILE* fp, * fp1;
    int i, w, j, m;
    w = 1;
    m = 1;
    system("cls");
    if ((fp = fopen("ticket.txt", "rb")) == NULL)
    {
        printf("\nCan not open file!\n");
        w = 0;
        return;
    }
    n = 0;
    for (i = 0; !feof(fp); i++)
    {
        fread(&ti[i], sizeof(struct plane), 1, fp);
        n++;
    }
    n = n - 1;
    fclose(fp);
    if (w == 1)
        printf("Load ticket file ok!\n");
    if ((fp1 = fopen("sale.txt", "rb")) == NULL)
    {
        printf("\nCan not open file\n");
        m = 0;
        return;
    }
    r = 0;
    for (j = 0; !feof(fp1); j++)
    {
        fread(&si[j], sizeof(struct user), 1, fp1);
        n++;
    }
    r = r - 1;
    fclose(fp1);
    if (m == 1)
        printf("Load sale file ok!");
    getchar();
    getchar();
    menu();
}

void now_time() /* ʱ��ģ�� */
{
    time_t now_time;

    time(&now_time);

    printf("��ǰʱ��Ϊ%s ", ctime(&now_time));
}



void menu() /* ��ҳ�� */
{
    int n, w1;
    do
    {
        system("cls"); /*����*/
        puts("\t\t\t\t ���չ�˾��Ʊϵͳ!\n\n");
        puts("\t\t*********************MENU*********************\n\n");
        puts("\t\t\t\t1. �����º���");
        puts("\t\t\t\t2. ������� ");
        puts("\t\t\t\t3. �����ѯ");
        puts("\t\t\t\t4. ��Ʊ");
        puts("\t\t\t\t5. ��Ʊ");
        puts("\t\t\t\t6. ���������Ϣ");
        puts("\t\t\t\t7. ����");
        puts("\t\t\t\t8. ����");
        puts("\t\t\t\t9. ��ʾ��ǰʱ��");
        puts("\t\t\t\t10. �˳�");
        puts("\n\n\t\t**********************************************\n");
        printf("Choice your number(1-10): [ ]\b\b");
        scanf("%d", &n);
        if (n < 1 || n>10) /*��ѡ����������ж�*/
        {
            w1 = 1;
            printf("your choice is not between 1 and 10,Please input enter to choice again:");
            getchar();
            getchar();
        }
        else w1 = 0;
    } while (w1 == 1); /* ѡ���ܣ�menu����ģ�� */
    switch (n)
    {
    case 1:enter(); break; /*����ģ��*/
    case 2:browse(); break; /*�������ģ��*/
    case 3:menu1(); break; /*�������ģ��*/
    case 4:book(); break; /*��Ʊģ��*/
    case 5:back(); break; /*��Ʊģ��*/
    case 6:watch(); break; /*���������Ϣģ��*/
    case 7:save(); break; /*����ģ��*/
    case 8:load(); break; /*����ģ��*/
    case 9:now_time(); break; /*ʱ��ģ��*/
    case 10:exit(0);
    }
}
int main() /*������ */
{
    menu();
    return 0;
}
