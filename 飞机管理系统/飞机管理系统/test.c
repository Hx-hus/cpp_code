#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define N 100

typedef struct plane
{
    char ID[10]; /*航班代号*/
    char BePlace[10];/*飞机起飞地点*/
    char EnPlace[10];/*飞机降落终点*/
    char data[15];/*飞机起飞时间*/
    int max;/*飞机最大乘客人数*/
    int num;/*飞机已售票数*/
}PLANE; PLANE ti[N];


typedef struct user
{
    char name[20];
    int number;
    char id[20];
    char seat[3];


}USER; USER si[N];


int n, n1;/*当前的航班数目以及新加入的航班*/
int e, r;
void menu();
void menu1();


void input(int i) /* 输入航班模块，enter的子模块 */
{
    printf("请输入航班代号：\n");
    scanf("%s", ti[i].ID);

    printf("请输入起飞地点：\n");
    scanf("%s", ti[i].BePlace);

    printf("请输入降落地点：\n");
    scanf("%s", ti[i].EnPlace);

    printf("请输入起飞时间：\n");
    scanf("%s", ti[i].data);

    printf("请输入最大座位：\n");
    scanf("%d", &ti[i].max);
    ti[i].num = 0;
}


void enter() /* 添加航班模块 */
{
    int i;
    system("cls"); /*清屏*/
    n1 = 0;
    n = n + n1;
    printf("请输入航班的数目:");
    scanf("%d", &n1); /*要输入的记录个数*/
    printf("\n请输入数据(原已有%d趟航班)\n\n", n);
    for (i = n; i < n + n1; i++)
    {
        printf("\n请输入第 %d 航班记录.\n", i + 1);
        input(i); /*调用输入函数*/
    }
    getchar();
    menu();
}


void printf_one(int i) /*显示一个记录的函数*/
{
    printf("\t%-8s %-8s %-8s %-8s %-8d %-8d ", ti[i].ID, ti[i].BePlace, ti[i].EnPlace, ti[i].data, ti[i].max, ti[i].num);
}




void dele(int k) /* 删除用户信息,shanchu的子模块 */
{
    int i;
    for (i = (k + 1); i < N; i++) {
        strcpy(si[k].name, si[k + 1].name);
        si[k].number = si[k + 1].number;
        strcpy(si[k].id, si[k + 1].id);
    }
}


int shanchu(struct plane a) /* 删除用户订票模块,退票的子模块 */
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


int browse() /* 浏览模块 */
{
    int i;
    r = 0;
    system("cls");
    puts("\n\t------------------------------航班浏览------------------------------");
    printf("\n\t航班代号 起飞地点 降落地点 起飞时间 最大乘客 已售票数\n");
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


void search_time() /* 时间查询模块，查询的子模块 */
{
    int i, m = 0;
    struct plane s;
    system("cls");
    printf("\n\nEnter the time:");
    scanf("%s", s.data); /*输入出发的时间*/
    puts("\n--------------------------------------------------------------------");
    printf("\n\t航班代号 起飞地点 降落地点 起飞时间 最大乘客 已售票数\n");
    for (i = 0; i < n + n1; i++)
    {
        if (strcmp(s.data, ti[i].data) == 0)
        {
            m++;
            if ((m != 0) && (m % 10 == 0)) /*目的是分屏显示*/
            {
                printf("\n\nPress any key to contiune . . .");
                getchar();
                puts("\n\n");
            }
            printf_one(i);
            printf("\n"); /*调用显示一个记录的函数*/
        }
    }
    puts("\n--------------------------------------------------------------------");
    getchar(); /*按任意健*/
    getchar();
    menu1();
}


void serch_end() /* 终点查询模块，查询的子模块 */
{
    int i, m = 0;
    struct plane s;
    system("cls");
    printf("\n\nEnter the end Place:");
    scanf("%s", s.EnPlace); /*输入要到达的地方*/
    puts("\n--------------------------------------------------------------------");
    printf("\n\t航班代号 起飞地点 降落地点 起飞时间 最大乘客 已售票数\n");
    for (i = 0; i < n + n1; i++)
    {
        if (strcmp(ti[i].EnPlace, s.EnPlace) == 0)
        {
            m++;
            if ((m != 0) && (m % 10 == 0)) /*目的是分屏显示*/
            {
                printf("\n\nPress any key to contiune . . .");
                getchar();
                puts("\n\n");
            }
            printf_one(i);
            printf("\n"); /*调用显示一个记录的函数*/
        }
    }
    puts("\n--------------------------------------------------------------------");
    getchar(); /*按任意健*/
    getchar();
    menu1();
}


void menu1() /* 查找模块 */
{
    int n, w1;
    do
    {
        system("cls"); /*清屏*/
        puts("\t\t\t\t 飞机售票操作!\n\n");
        puts("\t\t*********************MENU*********************\n\n");
        puts("\t\t\t\t1.按照时间查找航班");
        puts("\t\t\t\t2.按照地点查找航班");
        puts("\t\t\t\t3.返回主菜单");
        puts("\n\n\t\t**********************************************\n");
        printf("Choice your number(1-3): [ ]\b\b");
        scanf("%d", &n);
        if (n < 1 || n>3) /*对选择的数字作判断*/
        {
            w1 = 1;
            printf("your choice is not between 1 and 3,Please input again:");
            getchar();
            getchar();
        }
        else w1 = 0;
    }

    while (w1 == 1); /*选择功能*/
    switch (n)
    {
    case 1:search_time(); break;
    case 2:serch_end(); break;
    case 3:menu(); break;
    }
}


int search() /* 售票的查找模块，book的子模块 */
{
    int i, k;
    struct plane s;
    k = -1;
    printf("请输入要订票的起飞地点:\n");
    scanf("%s", s.BePlace);/*输入要起飞的地方*/
    printf("请输入要订票的降落地点:\n");
    scanf("%s", s.EnPlace);/*输入要到达的地方*/
    printf("请输入要订票的起飞时间:\n");
    scanf("%s", s.data); /*输入出发的时间*/
    for (i = 0; i < n + n1; i++) /*查找要修改的数据*/
    {
        if (strcmp(s.BePlace, ti[i].BePlace) == 0 && strcmp(s.EnPlace, ti[i].EnPlace) == 0 && strcmp(s.data, ti[i].data) == 0)
        {
            k = i; /*找到要修改的记录*/
            strcpy(s.data, ti[i].data);
            printf_one(k);
            break; /*调用显示一个记录的函数*/
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


void book() /* 订票模块 */
{
    int i;
    system("cls");
    r = 0;
    printf("欢迎进入售票窗口!\n");
    printf("飞机上有20排座位，每排有4个座位，每排分为A,B,C,D。其中A,D靠窗户。\n19,20为吸烟区。座位选择按先选排序号再选座位号");
    printf("\n\n\n请输入您的姓名:\n"); /*用户信息输入*/
    scanf("%s", si[e].name);
    printf("请输入您的身份证号:\n");
    scanf("%d", &si[e].number);
    printf("请输入你想选的座位号:\n");
    scanf("%s", si[e].seat);
    i = search();
    if (i != -1)
    {
        if (ti[i].num >= ti[i].max)
        {
            printf("\n该趟航班票已售完！");
        }
        else
        {
            ti[i].num++;
            strcpy(si[e].id, ti[i].ID);
            e++;
            printf("\n订票成功!\n");
        }
    }
    else
    {
        printf("该航班不存在!\n");
    }
    getchar();
    getchar(); /*按任意健*/
    menu();
}


void back() /* 退票模块 */
{
    int i, k = -1;
    struct plane s;
    char name[20];
    int number;
    system("cls");
    printf("欢迎进入退票窗口!\n");
    printf("\n请输入您的姓名:\n");
    scanf("%s", name);
    printf("请输入您的身份证号:\n");
    scanf("%d", &number);
    printf("\n\n输入航班代号:");
    scanf("%s", s.ID); /*输入要到达的地方*/
    for (i = 0; i < n + n1; i++) /*查找要修改的数据*/
    {
        if (strcmp(s.ID, ti[i].ID) == 0)
        {
            k = i; /*找到要修改的记录*/
            printf_one(k);
            break; /*调用显示一个记录的函数*/
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
        printf("\n退票成功!\n");
    }
    getchar(); /*按任意健*/
    getchar(); /*按任意健*/
    menu();
}


void watch() /*浏览已售信息模块*/
{
    int i;
    system("cls");
    r = 0;
    for (i = 0; i < n + n1; i++)
    {
        r = r + ti[i].num;
    }
    printf("\n\t-------------------已售信息-------------------\n");
    printf("\n\t姓 名  身份证号   座位号  已买航班代号\n");
    for (i = 0; i < r; i++)
    {
        printf("\t%-6s %-8d %8s %5s\n", si[i].name, si[i].number, si[i].seat, si[i].id);
    }
    printf("\n\t----------------------------------------------\n");
    getchar();
    getchar();
    menu();
}

void save()/*文件保存*/
{
    int w = 1, m = 1;
    r = 0;
    FILE* fp, * fp1;
    int i, j;
    system("cls");
    if ((fp = fopen("ticket.txt", "wb")) == NULL) /*以输出打开方式,在此前的记录被覆盖*/
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
    if ((fp1 = fopen("sale.txt", "wb")) == NULL) /*以输出打开方式,在此前的记录被覆盖*/
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


void load() /* 加载模块 */
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

void now_time() /* 时间模块 */
{
    time_t now_time;

    time(&now_time);

    printf("当前时间为%s ", ctime(&now_time));
}



void menu() /* 主页面 */
{
    int n, w1;
    do
    {
        system("cls"); /*清屏*/
        puts("\t\t\t\t 航空公司售票系统!\n\n");
        puts("\t\t*********************MENU*********************\n\n");
        puts("\t\t\t\t1. 输入新航班");
        puts("\t\t\t\t2. 浏览航班 ");
        puts("\t\t\t\t3. 航班查询");
        puts("\t\t\t\t4. 订票");
        puts("\t\t\t\t5. 退票");
        puts("\t\t\t\t6. 浏览已售信息");
        puts("\t\t\t\t7. 保存");
        puts("\t\t\t\t8. 载入");
        puts("\t\t\t\t9. 显示当前时间");
        puts("\t\t\t\t10. 退出");
        puts("\n\n\t\t**********************************************\n");
        printf("Choice your number(1-10): [ ]\b\b");
        scanf("%d", &n);
        if (n < 1 || n>10) /*对选择的数字作判断*/
        {
            w1 = 1;
            printf("your choice is not between 1 and 10,Please input enter to choice again:");
            getchar();
            getchar();
        }
        else w1 = 0;
    } while (w1 == 1); /* 选择功能，menu的子模块 */
    switch (n)
    {
    case 1:enter(); break; /*输入模块*/
    case 2:browse(); break; /*浏览航班模块*/
    case 3:menu1(); break; /*航班查找模块*/
    case 4:book(); break; /*订票模块*/
    case 5:back(); break; /*退票模块*/
    case 6:watch(); break; /*浏览已售信息模块*/
    case 7:save(); break; /*保存模块*/
    case 8:load(); break; /*加载模块*/
    case 9:now_time(); break; /*时间模块*/
    case 10:exit(0);
    }
}
int main() /*主函数 */
{
    menu();
    return 0;
}
