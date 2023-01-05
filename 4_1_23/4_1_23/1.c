#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct score
{
	int no[10];
	char name[10];
	double mark;
}score;
void Search()
{
	int no1 = 0;
	int no2 = 0;
	char name = 0;
	double mark;
	int i = 0;
	FILE* fp = fopen("d:\\scores.txt", "r");
	do {
		do {
			printf("请输入查询学生的学号:>");
			scanf("%d", &no1);
			fscanf(fp, "%d %s %.1lf", &no2, &name, &mark);
			if (no1 == no2)
			{
				printf("%d %s %.1lf", no2, name, mark);
			}

		} while (!feof(fp));
		printf("继续查询请按1.退出请按0.");
		scanf("%d", &i);
	} while (i);
	fclose(fp);
}
void Seek()
{
	int no1 = 0;
	int no2 = 0;
	char name = 0;
	double mark = 0;
	int i = 0;
	FILE* fp = fopen("d:\\scores.txt", "r");
	do {
		scanf("%d", &no1);
		fscanf(fp, "%d %s %.1lf", &no2, &name, &mark);
		printf("%d %s %.1lf", no2, name, mark);
	} while (!feof(fp));
	fclose(fp);
}
void Add(score* p)
{
	FILE* fp = fopen("d:\\scores.txt", "a");
	int i = 0;
	int n = 0;
	do {
		printf("请输入学生的学号、名字、成绩（用空格间隔）：");
		scanf("%d %s %.1lf", &(p + i)->no, (p + i)->name, &(p + i)->mark);
		fprintf("%d %s %.1lf", (p + i)->no, (p + i)->name, (p + i)->mark);
		printf("信息录入完毕，继续录入信息请按1，退出请按0");
		scanf("%d", &n);
	} while (n);
	fclose(fp);
}
//oid Add(struct students* p) {
	//	int O = 1;
	//	FILE* pf = fopen("d:\\Students.txt", "a");
	//	do {
	//		printf("依次输入：\n学号 学生姓名 成绩（各个字段用空格隔开）\n");
	//		scanf("%d %s %d", &p->id, p->name, &p->score);
	//		fprintf(pf, "%d %s %d\n", p->id, p->name, p->score);
	//		printf("已录入，是否继续输入？（输入0结束输入,输入其他数则继续）\n");
	//		scanf("%d", &O);
	//		p++;
	//	} while (O);
	//	printf("所有输入保存成功！\n");
	//	fclose(pf);
	//}
void Update()
{
	int no1 = 0;
	int no2 = 0;
	char name = 0;
	double mark = 0;
	FILE* fp1 = fopen("d:\\scores.txt", "r");
	FILE* fp2 = fopen("d:\\exchange.txt", "w");
	printf("请输入需要修改的学生的学号（整数）:>");
	scanf("%d", &no1);
	do {
		fscanf(fp1, "%d %s %.1lf", &no2, &name, &mark);
		if (no2 == no1)
		{
			if (feof(fp1) == 0)
			{
				printf("请输入该学生需要修改的成绩:>");
				scanf("%.1lf", &mark);
				fprintf(fp2, "%d %s %.1lf", no2, name, mark);
			}
			}
		else
		{
			if (feof(fp1) == 0)
			{
				fprintf(fp2, "%d %s %.1lf", no2, name, mark);
			}
		}
	} while (!feof(fp1));
	fclose(fp1);
	fclose(fp2);
	remove("d;\\scores.txt");
	rename("d:\\exchange.txt", "d:\\scores.txt");
}
void Delete()
	{
		int no1 = 0;
		int no2 = 0;
		char name = 0;
		double mark = 0;
		FILE* fp1 = fopen("d:\\scores.txt", "r");
		FILE* fp2 = fopen("d:\\exchange.txt", "w");
		printf("请输入要删除学生信息中的学号");
		scanf("%d", &no1);
		do {
			fscanf(fp1, "%d %s %.1lf", &no2, &name, &mark);
			if (no1 != no2)
			{
				fprintf(fp2, "%d %s %.1lf", no2, name, mark);
			}
		} while (!feof(fp1));
		fclose(fp1);
		fclose(fp2);
		remove("d:\\scores.txt");
		rename("d:\\exchange.txt", "d:\\scores,txt");
	}
	int main()
	{
		int a = 0;
		score students[1000] = { 0 };
		while (1)
		{
			printf("1.添加学生信息；2.修改学生成绩；3.删除学生信息；4.查询学生成绩；5.查看学生成绩；输入其他数字退出\n");
			scanf("%d", &a);
			switch (a)
			{
			case 1:Add(students); break;
			case 2:Update(); break;
			case 3:Delete(); break;
			case 4:Search(); break;
			case 5:Seek(); break;
			default:break;
			}
		}
	}
typedef struct score
{
	int no[10];
	char name[10];
	double mark;
}score;
void Search()
{
	int no1 = 0;
	int no2 = 0;
	char name = 0;
	double mark;
	int i = 0;
	FILE* fp = fopen("d:\\scores.txt", "r");
	do {
		do {
			printf("请输入查询学生的学号:>");
			scanf("%d", &no1);
			fscanf(fp, "%d %s %.1lf", &no2, &name, &mark);
			if (no1 == no2)
			{
				printf("%d %s %.1lf", no2, name, mark);
			}

		} while (!feof(fp));
		printf("继续查询请按1.退出请按0.");
		scanf("%d", &i);
	} while (i);
	fclose(fp);
}
void Seek()
{
	int no1 = 0;
	int no2 = 0;
	char name = 0;
	double mark = 0;
	int i = 0;
	FILE* fp = fopen("d:\\scores.txt", "r");
	do {
		scanf("%d", &no1);
		fscanf(fp, "%d %s %.1lf", &no2, &name, &mark);
		printf("%d %s %.1lf", no2, name, mark);
	} while (!feof(fp));
	fclose(fp);
}
void Add(score* p)
{
	FILE* fp = fopen("d:\\scores.txt", "a");
	int i = 0;
	int n = 0;
	do {
		printf("请输入学生的学号、名字、成绩（用空格间隔）：");
		scanf("%d %s %.1lf", &(p + i)->no, (p + i)->name, &(p + i)->mark);
		fprintf("%d %s %.1lf", (p + i)->no, (p + i)->name, (p + i)->mark);
		printf("信息录入完毕，继续录入信息请按1，退出请按0");
		scanf("%d", &n);
	} while (n);
	fclose(fp);
}
//void Add(struct students* p) {
//	int O = 1;
//	FILE* pf = fopen("d:\\Students.txt", "a");
//	do {
//		printf("依次输入：\n学号 学生姓名 成绩（各个字段用空格隔开）\n");
//		scanf("%d %s %d", &p->id, p->name, &p->score);
//		fprintf(pf, "%d %s %d\n", p->id, p->name, p->score);
//		printf("已录入，是否继续输入？（输入0结束输入,输入其他数则继续）\n");
//		scanf("%d", &O);
//		p++;
//	} while (O);
//	printf("所有输入保存成功！\n");
//	fclose(pf);
//}
void Update()
{
	int no1 = 0;
	int no2 = 0;
	char name = 0;
	double mark = 0;
	FILE* fp1 = fopen("d:\\scores.txt", "r");
	FILE* fp2 = fopen("d:\\exchange.txt", "w");
	printf("请输入需要修改的学生的学号（整数）:>");
	scanf("%d", &no1);
	do {
		fscanf(fp1, "%d %s %.1lf", &no2, &name, &mark);
		if (no2 == no1)
		{
			if (feof(fp1) == 0)
			{
				printf("请输入该学生需要修改的成绩:>");
				scanf("%.1lf", &mark);
				fprintf(fp2, "%d %s %.1lf", no2, name, mark);
			}
		}
		else
		{
			if (feof(fp1) == 0)
			{
				fprintf(fp2, "%d %s %.1lf", no2, name, mark);
			}
		}
	} while (!feof(fp1));
	fclose(fp1);
	fclose(fp2);
	remove("d;\\scores.txt");
	rename("d:\\exchange.txt", "d:\\scores.txt");
}
void Delete()
{
	int no1 = 0;
	int no2 = 0;
	char name = 0;
	double mark = 0;
	FILE* fp1 = fopen("d:\\scores.txt", "r");
	FILE* fp2 = fopen("d:\\exchange.txt", "w");
	printf("请输入要删除学生信息中的学号");
	scanf("%d", &no1);
	do {
		fscanf(fp1, "%d %s %.1lf", &no2, &name, &mark);
		if (no1 != no2)
		{
			fprintf(fp2, "%d %s %.1lf", no2, name, mark);
		}
	} while (!feof(fp1));
	fclose(fp1);
	fclose(fp2);
	remove("d:\\scores.txt");
	rename("d:\\exchange.txt", "d:\\scores,txt");
}
int main()
{
	int a = 0;
	score students[1000] = { 0 };
	while (1)
	{
		printf("1.添加学生信息；2.修改学生成绩；3.删除学生信息；4.查询学生成绩；5.查看学生成绩；输入其他数字退出\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:Add(students); break;
		case 2:Update(); break;
		case 3:Delete(); break;
		case 4:Search(); break;
		case 5:Seek(); break;
		default:break;
		}
	}
}
//#include<stdio.h>
//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return  0;
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//	for (i = 0; i <10;i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] =arr[i-1][j - 1]+arr[i-1][j];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = 0;
//	for (a = 'A'; a <= 'D'; a++)
//	{
//		if (3 == (a != 'A') + (a == 'C') + (a == 'D') + (a != 'D'))
//		{
//			printf("凶手是:%c",a);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		{}
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if ((2 == B && 3 != A) || (2 != B && 3 == A) == 1)
//						{
//							if ((2 == B && 4 != E) || (2 != B && 4 == E) == 1)
//							{
//								if ((1 == C && 2 != D) || (1 != C && 2 == D) == 1)
//								{ 
//									if ((5 == C && 3 != D) || (5 != C && 3 == D) == 1)
//									{ 
//										if ((4 == E && 1 != A) || (4 != E && 1 == A) == 1)
//										{
//											if (A * B * C * D * E == 120)
//											{
//												printf("A=%d B=%d C=%d D=%d E=%d", A, B, C, D, E);
//											}
//
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			n /= i;
//			break;
//		}
//	}
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	int arr[500] = { 0 };
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			arr[count] = i;
//			count++;
//		}
//	}
//	for (i = 0; i < count - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < count - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("%d", arr[count - 1]);
//	return 0;
//}