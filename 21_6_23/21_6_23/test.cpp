#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <conio.h>     /*getch()����ʹ�õ�ͷ�ļ�*/
#include <windows.h>  /*Sleep()����ʹ�õ�ͷ�ļ�*/
#include <string.h>   /*strcmp()����ʹ�õ�ͷ�ļ�*/

#define LEN_BOOK sizeof(struct Book)
#define LEN_READER sizeof(struct Reader)
#define BOOK_DATA astBook[i].iNum,astBook[i].acName,astBook[i].acAuthor,astBook[i].acPress,astBook[i].iAmount
#define READER_DATA astReader[i].iNum,astReader[i].acName,astReader[i].acSex,astReader[i].iAmount,astReader[i].iMax,astReader[i].aiBookId
#define BOOK_NUM 200
#define READER_NUM 100

int SearchBook();
int SearchReader();

/*ͼ��ṹ�壺ͼ���ţ�ͼ������ͼ�����ߣ������磬�����*/
struct Book
{
	int iNum;
	char acName[15];
	char acAuthor[15];
	char acPress[15];
	int iAmount;
};

/*���ߣ����߱�ţ������������Ա𣬿ɽ�����,�����ѽ���ı��*/
struct Reader
{
	int iNum;
	char acName[15];
	char acSex[4];
	int iMax;
	int iAmount;
	int aiBookId[10];
};

struct Book astBook[BOOK_NUM];
struct Reader astReader[READER_NUM];

void ShowMainMenu()
{
	system("cls");/*��������*/
	printf("\n\n\n\n\n");
	printf("\t|----------------------��ӭ����---------------------------|\n");
	printf("\t|                   ͼ��ݹ���ϵͳ                        |\n");
	printf("\t|                       ���˵�                            |\n");
	printf("\t|                   1��ͼ�����                           |\n");
	printf("\t|                   2�����߹���                           |\n");
	printf("\t|                   3����/����Ǽ�                        |\n");
	printf("\t|                   0���˳�ϵͳ                           |\n");
	printf("\t|---------------------------------------------------------|\n");
	printf("\n");
	printf("\t\t��ѡ��0-3����");
}

void ShowBookMenu()
{
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t|----------------------��ӭ����---------------------------|\n");
	printf("\t|                    ͼ�����ϵͳ                         |\n");
	printf("\t|                       �Ӳ˵�                            |\n");
	printf("\t|                  1����ʾͼ����Ϣ                        |\n");
	printf("\t|                  2������ͼ����Ϣ                        |\n");
	printf("\t|                  3��ͼ����Ϣ��ѯ                        |\n");
	printf("\t|                  4��ͼ����Ϣɾ��                        |\n");
	printf("\t|                  5��ͼ����Ϣ�޸�                        |\n");
	printf("\t|                  0���������˵�                          |\n");
	printf("\t|---------------------------------------------------------|\n");
	printf("\n");
	printf("\t\t��ѡ��0-5����");
}

void ShowReaderMenu()
{
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t|----------------------��ӭ����---------------------------|\n");
	printf("\t|                    ���߹���ϵͳ                         |\n");
	printf("\t|                       �Ӳ˵�                            |\n");
	printf("\t|                  1����ʾ������Ϣ                        |\n");
	printf("\t|                  2������������Ϣ                        |\n");
	printf("\t|                  3��������Ϣ��ѯ                        |\n");
	printf("\t|                  4��������Ϣɾ��                        |\n");
	printf("\t|                  5��������Ϣ�޸�                        |\n");
	printf("\t|                  0���������˵�                          |\n");
	printf("\t|---------------------------------------------------------|\n");
	printf("\n");
	printf("\t\t��ѡ��0-5����");
}

void ShowBorrowReturnMenu()
{
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t|----------------------��ӭ����---------------------------|\n");
	printf("\t|                    ��/����Ǽ�                          |\n");
	printf("\t|                       �Ӳ˵�                            |\n");
	printf("\t|                    1������Ǽ�                          |\n");
	printf("\t|                    2������Ǽ�                          |\n");
	printf("\t|                   0���������˵�                         |\n");
	printf("\t|---------------------------------------------------------|\n");
	printf("\n");
	printf("\t\t��ѡ��0-2����");
}

void ShowModifyBookMenu()
{
	printf("\n");
	printf("\t|                  1�����                        |\n");
	printf("\t|                  2������                        |\n");
	printf("\t|                  3������                        |\n");
	printf("\t|                  4��������                      |\n");
	printf("\t|                  5�����                        |\n");
	printf("\n");
	printf("��������Ҫ�޸ĵ���Ϣ(������Ӧ������:1-5 ):");

}

void ShowModifyReaderMenu()
{
	printf("\n");
	printf("\t|                  1�����                        |\n");
	printf("\t|                  2������                        |\n");
	printf("\t|                  3���Ա�                        |\n");
	printf("\t|                  4�����ɽ�����                |\n");
	printf("\n");
	printf("��������Ҫ�޸ĵ���Ϣ(������Ӧ������:1-4 )\n");
}

/*�ֱ��ȡͼ��Ͷ�����Ϣת����astBook��astReader������*/
int ReadBookFile(const char* pcMode)
{
	int iBookRecord = 0;
	FILE* pfBook;   /*�ļ�ָ��*/

	pfBook = fopen("book.txt", pcMode);
	if (pfBook == NULL)
		return -1;
	while (!feof(pfBook))
	{
		if (fread(&astBook[iBookRecord], LEN_BOOK, 1, pfBook))
			iBookRecord++;
	}
	fclose(pfBook);
	return iBookRecord;
}

int ReadReaderFile(char* pcMode)
{
	int iReaderRecord = 0;
	FILE* pfReader;
	pfReader = fopen("reader.txt", pcMode);
	if (pfReader == NULL)
		return -1;
	while (!feof(pfReader))
	{
		if (fread(&astReader[iReaderRecord], LEN_READER, 1, pfReader) == 1)
			iReaderRecord++;
	}
	fclose(pfReader);
	return iReaderRecord;
}

void SaveBookFile(int iBookId)
{
	FILE* pfBook;
	/*��д��ʽ���ļ����ļ������Ѿ����ڣ�ָ��ָ���ļ��ײ���wb��ɾ��ԭ���ļ���abָ��ָ���ļ�β��*/
	pfBook = fopen("book.txt", "rb+");
	if (pfBook != NULL)
	{
		fseek(pfBook, LEN_BOOK * iBookId, SEEK_SET);
		if (fwrite(&astBook[iBookId], LEN_BOOK, 1, pfBook) != 1)
			printf("�޷��������Ϣ��\n");
	}
	fclose(pfBook);
}

void SaveReaderFile(int iReaderId)
{
	FILE* pfReader;
	pfReader = fopen("reader.txt", "rb+");
	if (pfReader != NULL)
	{
		fseek(pfReader, LEN_READER * iReaderId, SEEK_SET);
		if (fwrite(&astReader[iReaderId], LEN_READER, 1, pfReader) != 1)
			printf("�޷��������Ϣ��\n");
	}
	fclose(pfReader);
}


/*==============================�軹�������غ���============================*/
void BorrowBook()
{
	system("cls");
	int iBookId, iReaderId, iBorrow, i;

	/*����Ҫ����Ķ��߱�ţ��жϱ���Ƿ���ڣ���ʾ�ö����ѽ�ͼ�����Ϣ*/
	iReaderId = SearchReader();
	if (iReaderId == -1)
		return;
	iBorrow = astReader[iReaderId].iMax - astReader[iReaderId].iAmount;
	if (iBorrow == 0)
		printf("�ö���Ŀǰû�н��κ���\n");
	else
	{
		printf("\t�ö��ߵ�ǰ����ͼ��Ϊ:");
		for (i = 0; i < iBorrow; i++)
			printf("%d ", astReader[iReaderId].aiBookId[i]);
		printf("\n\n");
	}

	/*�����߿ɽ�������Ϊ0���������ٽ��飬�˳�*/
	if (astReader[iReaderId].iAmount == 0)
	{
		printf("�ö��߿ɽ�����Ϊ�㣬���ܼ������飡\n");
		return;
	}

	/*����Ҫ�����ţ���������Ƿ���ڣ��жϸ������Ƿ�Ϊ0*/
	printf("\n�����������Ҫ���ĵ�ͼ����Ϣ\n");
	getch();

	iBookId = SearchBook();
	if (iBookId == -1)
		return;
	if (astBook[iBookId].iAmount == 0)
	{
		printf("��ͼ������Ϊ�㣡ͼ�鲻�ɽ�\n");
		return;
	}
	astReader[iReaderId].aiBookId[iBorrow] = astBook[iBookId].iNum;/*ͼ���治Ϊ0ʱ����������*/
	astBook[iBookId].iAmount--;     /*��ͼ��Ŀ������1*/
	astReader[iReaderId].iAmount--; /*�ö��ߵĿɽ����������1*/

	SaveBookFile(iBookId);	     /*�������ͼ����Ϣ���ļ�*/
	SaveReaderFile(iReaderId);   /*�������������Ϣ���ļ�*/

	printf("����ɹ���\n");
}

void ReturnBook()
{
	int iBookId, iReaderId, iBorrow, i, j;

	system("cls");
	iReaderId = SearchReader();
	if (iReaderId == -1)
		return;
	iBorrow = astReader[iReaderId].iMax - astReader[iReaderId].iAmount;

	if (iBorrow == 0)
	{
		printf("\t�ö���û�н��κ��飬����黹\n");
		return;
	}
	else
	{
		printf("\t�ö��ߵ�ǰ����ͼ��Ϊ:");
		for (i = 0; i < iBorrow; i++)
			printf("%d ", astReader[iReaderId].aiBookId[i]);
		printf("\n\n");
	}

	printf("�����������Ҫ�黹��ͼ����Ϣ\n");
	getch();

	iBookId = SearchBook();
	if (iBookId == -1)
		return;
	for (i = 0; i < iBorrow; i++)
		if (astReader[iReaderId].aiBookId[i] == astBook[iBookId].iNum)
		{
			for (j = i; j < iBorrow - 1; j++)
				astReader[iReaderId].aiBookId[j] = astReader[iReaderId].aiBookId[j + 1];
			astReader[iReaderId].aiBookId[iBorrow] = 0;

			astBook[iBookId].iAmount++;      /*����Ŀ������1*/
			astReader[iReaderId].iAmount++;  /*�ö��ߵ����ɽ�������1*/
			break;
		}

	if (i == iBorrow)/*����ѭ����δ�ҵ�����*/
	{
		printf("�ö���û�н��Ȿ�飬����黹\n");
		return;
	}

	SaveBookFile(iBookId);      /*�������ͼ����Ϣ���ļ�*/
	SaveReaderFile(iReaderId);	/*�������������Ϣ���ļ�*/

	printf("����ɹ���\n");
}

/*==============================ͼ�������غ���============================*/

/*��ʾͼ�麯��*/
void ShowBook()
{
	int i, iBookRecord;/*���ͱ�����i����ѭ��������iBookRecord���Լ���ͼ�������*/

	system("cls");

	iBookRecord = ReadBookFile("rb");
	if (iBookRecord == -1)
		printf("�ļ���ʧ�ܣ�����������ͼ����Ϣ��\n");
	else if (iBookRecord == 0)
		printf("�ļ���û��ͼ����Ϣ��\n");
	else
	{
		printf("\t|---------------------------------------------------------|\n");
		printf("\t  %-6s%-16s%-10s%-20s%-4s\n", "���", "����", "����", "������", "���");
		for (i = 0; i < iBookRecord; i++)/*��ʾͼ����Ϣ*/
			printf("\t  %-6d%-16s%-10s%-20s%-4d\n", BOOK_DATA);
		printf("\t|---------------------------------------------------------|\n");
	}
}

void AddBook()
{
	FILE* pfBook;/*�ļ�ָ��*/
	int iBookRecord, iFlagExist, i;
	char cFlag;

	system("cls");

	iBookRecord = ReadBookFile("ab+");  /*ab+׷�ӷ�ʽ�򿪻��½��������ļ�*/
	if (iBookRecord == -1)
	{
		printf("�ļ���ʧ�ܣ�\n");
		return;
	}
	else if (iBookRecord == 0)
		printf("û��ͼ���¼��\n");
	else
		ShowBook();/*���ͼ���¼��Ϊ�������showBook��ʾ����ͼ��*/

	/*���´���Ϊѭ��¼��ͼ����Ϣ*/
	printf("��ѡ���Ƿ������Ϣ��y/n����");
	cFlag = getchar();
	getchar();
	if (cFlag == 'n')
		return;
	/*����'y'��ʼ����д�룬��������ͼ���ţ��������鲢�ж��Ƿ��Ѵ��ڸ�ͼ�飬��������ʾ�û���������*/
	pfBook = fopen("book.txt", "ab+");
	if (pfBook == NULL)
	{
		printf("�ļ���ʧ�ܣ�\n");
		return;
	}

	while (cFlag == 'y')
	{
		if (iBookRecord >= BOOK_NUM)/*������M������Χ���ܼ���д��*/
		{
			printf("��¼������");
			fclose(pfBook);
			return;
		}

		printf("������ͼ���ţ�");
		do {
			iFlagExist = 0;
			scanf("%d", &astBook[iBookRecord].iNum);
			getchar();
			for (i = 0; i < iBookRecord; i++)
			{
				if (astBook[i].iNum == astBook[iBookRecord].iNum)
				{
					iFlagExist = 1;
					printf("��ͼ�����Ѵ��ڣ����������룺");
					break;
				}
			}
		} while (iFlagExist == 1);

		/*����ͼ��Ļ�����Ϣ*/
		printf("������ͼ�����ƣ�");
		gets(astBook[iBookRecord].acName);
		printf("������ͼ�����ߣ�");
		gets(astBook[iBookRecord].acAuthor);
		printf("������ͼ������磺");
		gets(astBook[iBookRecord].acPress);
		printf("������ͼ��������");
		scanf("%d", &astBook[iBookRecord].iAmount);
		getchar();
		/*��������ͼ����Ϣд���ļ���*/
		if (fwrite(&astBook[iBookRecord], LEN_BOOK, 1, pfBook) != 1)
		{
			printf("�޷��������Ϣ��\n");
			return;
		}
		else
		{
			printf("%d��ͼ����Ϣ�ѱ��棡\n", astBook[iBookRecord].iNum);
			iBookRecord++;
		}
		printf("����������Ϣ��y/n��");
		cFlag = getchar();
		getchar();
	}
	fclose(pfBook);
	printf("����ͼ��ִ����ϣ�\n");
}


void DeleteBook()
{
	FILE* pfBook;/*�ļ�ָ��*/
	int iBookId, iBookRecord, i;
	char cFlag;/*�ַ��ͱ���������ѡ��*/

	system("cls");

	iBookId = SearchBook();

	if (iBookId == -1)
		return;

	iBookRecord = ReadBookFile("rb");
	printf("���ҵ���ͼ�飬�Ƿ�ɾ������y/n��");
	cFlag = getchar();
	getchar();

	if (cFlag == 'n')
		return;
	else if (cFlag == 'y')
	{
		for (i = iBookId; i < iBookRecord - 1; i++)
			astBook[i] = astBook[i + 1];/*��������ǰ��*/
		iBookRecord--;
	}

	pfBook = fopen("book.txt", "wb");
	if (pfBook != NULL)
	{
		for (i = 0; i < iBookRecord; i++)/*���޸Ĺ���ͼ����Ϣд���ļ�*/
		{
			if (fwrite(&astBook[i], LEN_BOOK, 1, pfBook) != 1)
			{
				printf("�޷��������Ϣ��\n");
				return;
			}
		}

		fclose(pfBook);
		printf("%d��ͼ����Ϣ��ɾ����\n", astBook[iBookId].iNum);
	}
}

void ModifyBook()
{
	int iBookId, iBookRecord, iFlagExist, iItem, iNum, i;

	system("cls");

	iBookId = SearchBook();  /*���ò���ͼ�麯�����ͼ���¼��*/

	if (iBookId == -1) /*δ�ҵ�����ŵ�ͼ�飬ֱ�ӷ���*/
		return;

	/*�ҵ�����ŵ�ͼ�飬���Խ����޸Ĳ���*/
	iBookRecord = ReadBookFile("rb");
	ShowModifyBookMenu();   /*��ʾ�޸�ѡ��Ĳ˵�*/

	scanf("%d", &iItem);
	getchar();
	switch (iItem)
	{
	case 1:
		printf("������ͼ���ţ�");
		do {
			iFlagExist = 0;
			scanf("%d", &iNum);
			getchar();
			for (i = 0; i < iBookRecord; i++)
			{
				if (iNum == astBook[i].iNum && i != iBookId)
				{
					iFlagExist = 1;
					printf("���󣬸�ͼ�����Ѵ��ڣ����������룺");
					break;
				}
			}
		} while (iFlagExist == 1);
		astBook[iBookId].iNum = iNum;
		break;
	case 2:
		printf("������ͼ�����ƣ�");
		gets(astBook[iBookId].acName);
		break;
	case 3:
		printf("������ͼ�����ߣ�");
		gets(astBook[iBookId].acAuthor);
		break;
	case 4:
		printf("������ͼ������磺");
		gets(astBook[iBookId].acPress);
		break;
	case 5:
		printf("������ͼ��������");
		scanf("%d", &astBook[iBookId].iAmount);
		getchar();
		break;
	}
	/*����SaveBookFile�������޸ļ�¼�����ļ�*/
	SaveBookFile(iBookId);
	printf("ͼ����Ϣ�޸ĳɹ���\n");
}

int SearchBook()
{
	int iBookNum, iBookRecord, iBookId, i;
	system("cls");

	iBookRecord = ReadBookFile("rb");/*��"rb"��ʽ���ļ������ʧ���򷵻�*/
	if (iBookRecord == -1)
	{
		printf("�ļ���ʧ�ܣ�\n");
		printf("| ������������Ӳ˵� |");
		getch();
		return -2;/*�ļ���ʧ�ܣ�����-2*/
	}
	else if (iBookRecord == 0)
	{
		printf("û��ͼ���¼��\n");
		printf("| ������������Ӳ˵� |");
		getch();
		return -3; /*û�м�¼������-3*/
	}

	/*���½�����ҳ���*/
	printf("������ͼ���ţ�");
	scanf("%d", &iBookNum);
	getchar();
	for (i = 0; i < iBookRecord; i++)
	{
		if (iBookNum == astBook[i].iNum)
		{
			iBookId = i;/*�ҵ���¼�����ؼ�¼��*/
			printf("%d��ͼ����Ϣ���£�\n", iBookNum);
			printf("\t|---------------------------------------------------------|\n");
			printf("\t  %-6s%-16s%-10s%-20s%-4s\n", "���", "����", "����", "������", "���");
			printf("\t  %-6d%-16s%-10s%-20s%-4d\n", BOOK_DATA);
			printf("\t|---------------------------------------------------------|\n");
			break;
		}
	}
	if (i == iBookRecord)/*����ѭ����û���ҵ���¼����ʾ�û�*/
	{
		printf("�Ҳ���%d��ͼ����Ϣ��\n", iBookNum);
		iBookId = -1;/*�Ҳ�����¼������-1*/
	}
	return iBookId;
}

/*��ʾ������Ϣ����*/
void ShowReader()
{
	int i, iReaderRecord;
	system("cls");

	iReaderRecord = ReadReaderFile("rb");
	if (iReaderRecord == -1)
		printf("�ļ���ʧ�ܣ��������Ӷ�����Ϣ��\n");
	else if (iReaderRecord == 0)
		printf("�ļ���û�ж�����Ϣ\n");
	else
	{
		printf("\t|---------------------------------------------------------|\n");
		printf("\t  %-8s%-12s%-6s%-16s%-16s\n", "���", "����", "�Ա�", "��ǰ�ɽ�������", "���ɽ�������");
		for (i = 0; i < iReaderRecord; i++)
			printf("\t  %-8d%-12s%-6s%-16d%-16d\n", READER_DATA);
		printf("\t|---------------------------------------------------------|\n");
	}

}
/*==============================���߹�����غ���============================*/

/*���Ӷ�����Ϣ����*/
void AddReader()
{
	FILE* pfReader;
	int iFlagExist, iReaderRecord, i;
	char cFlag;

	system("cls");

	iReaderRecord = ReadReaderFile("ab+"); /*ab+׷�ӷ�ʽ�򿪻��½��������ļ�*/
	if (iReaderRecord == -1)
	{
		printf("�ļ���ʧ�ܣ�\n");
		return;
	}
	else if (iReaderRecord == 0)
		printf("û�ж��߼�¼��\n");
	else
		ShowReader();

	/*���´���Ϊѭ��¼�������Ϣ*/
	printf("��ѡ���Ƿ������Ϣ��y/n����");
	cFlag = getchar();
	getchar();
	if (cFlag == 'n')
		return;

	pfReader = fopen("reader.txt", "ab+");
	if (pfReader == NULL)
	{
		printf("�ļ���ʧ�ܣ�\n");
		return;
	}

	while (cFlag == 'y')
	{
		if (iReaderRecord >= READER_NUM)
		{
			printf("��¼������");
			fclose(pfReader);
			return;
		}
		printf("��������߱�ţ�");
		do
		{
			iFlagExist = 0;
			scanf("%d", &astReader[iReaderRecord].iNum);
			getchar();

			for (i = 0; i < iReaderRecord; i++)
			{
				if (astReader[i].iNum == astReader[iReaderRecord].iNum)
				{
					iFlagExist = 1;
					printf("�ö��߱���Ѵ��ڣ�����������:");
				}
			}
		} while (iFlagExist == 1);

		printf("���������������");
		gets(astReader[iReaderRecord].acName);
		printf("����������Ա�F/M:");
		while (gets(astReader[iReaderRecord].acSex) != NULL)
		{
			if (strcmp(astReader[iReaderRecord].acSex, "F") == 0 || strcmp(astReader[iReaderRecord].acSex, "M") == 0)
				break;
			printf("����ֻ������'F'����'M',����������\n");
		}
		printf("������������ɽ�������(��ΧΪ5-10):");
		while (scanf("%d", &astReader[iReaderRecord].iMax) == 1)
		{
			getchar();
			if (astReader[iReaderRecord].iMax >= 5 && astReader[iReaderRecord].iMax <= 10)
				break;
			printf("���󣬶�������������ΧΪ5-10,����������\n");
		}
		astReader[iReaderRecord].iAmount = astReader[iReaderRecord].iMax;

		for (i = 0; i < astReader[iReaderRecord].iMax; i++)//�����ʼ��Ϊ0����ʾ�ö���һ����Ҳû�н�;
			astReader[iReaderRecord].aiBookId[i] = 0;


		if (fwrite(&astReader[iReaderRecord], LEN_READER, 1, pfReader) != 1)
		{
			printf("�޷��������Ϣ��\n");
		}
		else
		{
			printf("%d�Ŷ�����Ϣ�ѱ��棡\n", astReader[iReaderRecord].iNum);
			iReaderRecord++;
		}
		printf("����������Ϣ��y/n��");
		cFlag = getchar();
		getchar();
	}
	fclose(pfReader);
	printf("���Ӷ���ִ����ϣ�\n");
}

void DeleteReader()
{
	FILE* pfReader;
	int iReaderId, iReaderRecord, i;
	char cFlag;

	system("cls");

	iReaderId = SearchReader();
	if (iReaderId == -1)
		return;

	iReaderRecord = ReadReaderFile("rb");
	printf("���ҵ��ö��ߣ��Ƿ�ɾ������y/n��");
	cFlag = getchar();
	getchar();

	if (cFlag == 'n')
		return;
	else if (cFlag == 'y')
	{
		for (i = iReaderId; i < iReaderRecord - 1; i++)
			astReader[i] = astReader[i + 1];
		iReaderRecord--;
	}

	pfReader = fopen("reader.txt", "wb");
	if (pfReader != NULL)
	{
		for (i = 0; i < iReaderRecord; i++)
		{
			if (fwrite(&astReader[i], LEN_READER, 1, pfReader) != 1)
			{
				printf("�޷��������Ϣ��\n");
				return;
			}
		}
		fclose(pfReader);
		printf("%d�Ŷ�����Ϣ��ɾ����\n", astReader[iReaderId].iNum);
	}
}

void ModifyReader()
{
	int iReaderId, iReaderRecord, iBorrow, iItem, iNum, iMax, iFlagExist, i;

	system("cls");
	iReaderId = SearchReader();
	if (iReaderId == -1)
		return;

	/*�ܲ�ѯ���ö��ߣ�����Խ����޸Ĳ���*/
	iReaderRecord = ReadReaderFile("rb");/*��"rb"��ʽ���ļ������ʧ���򷵻�*/
	ShowModifyReaderMenu();
	scanf("%d", &iItem);
	getchar();

	switch (iItem)
	{
	case 1:
		printf("��������߱�ţ�");
		do {
			iFlagExist = 0;
			scanf("%d", &iNum);
			getchar();
			for (i = 0; i < iReaderRecord; i++)
				if (iNum == astReader[i].iNum && i != iReaderId)
				{
					iFlagExist = 1;
					printf("���󣬸ö��߱���Ѵ��ڣ����������룺\n");
					break;
				}
		} while (iFlagExist == 1);
		astReader[iReaderId].iNum = iNum;
		break;
	case 2:
		printf("������������֣�");
		gets(astReader[iReaderId].acName);
		break;
	case 3:
		printf("����������Ա�F/M:");
		while (gets(astReader[iReaderId].acSex) != NULL)
		{
			if (strcmp(astReader[iReaderId].acSex, "F") == 0 || strcmp(astReader[iReaderId].acSex, "M") == 0)
				break;
			printf("����ֻ������'F'����'M',����������\n");
		}
		break;
	case 4:
		iBorrow = astReader[iReaderId].iMax - astReader[iReaderId].iAmount;
		printf("������������ɽ�������(��ΧΪ5-10):");
		while (scanf("%d", &iMax) == 1)
		{
			getchar();
			if (iMax >= 5 && iMax <= 10)
			{
				if (iBorrow > iMax)
				{
					printf("�ö���Ŀǰ����ͼ���������ڸ���Ŀ����Ҫ�Ȼ�����޸ģ�\n");
					return;
				}
				else
				{
					astReader[iReaderId].iMax = iMax;
					astReader[iReaderId].iAmount = iMax - iBorrow;
					for (i = iBorrow; i < iMax; i++)
						astReader[iReaderId].aiBookId[i] = 0;
					break;
				}
			}
			printf("���󣬶�������������ΧΪ5-10,����������\n");
		}
		break;
	}/*switch ����*/

	SaveReaderFile(iReaderId);
	printf("������Ϣ�޸ĳɹ���\n");
}

int SearchReader()
{
	int iReaderNum, iReaderRecord, iReaderId, i;
	system("cls");

	iReaderRecord = ReadReaderFile("rb");
	if (iReaderRecord == -1)
	{
		printf("�ļ���ʧ�ܣ�\n");
		return -2; /*�ļ���ʧ�ܣ�����-2*/
	}
	else if (iReaderRecord == 0)
	{
		printf("û�ж��߼�¼��\n");
		return -3; /*û�м�¼������-3*/
	}

	printf("��������߱�ţ�");
	scanf("%d", &iReaderNum);
	getchar();
	for (i = 0; i < iReaderRecord; i++)
	{
		if (iReaderNum == astReader[i].iNum)
		{
			iReaderId = i; /*�ҵ���¼�����ؼ�¼��*/
			printf("%d�Ŷ�����Ϣ���£�\n", iReaderNum);
			printf("\t|---------------------------------------------------------|\n");
			printf("\t  %-8s%-12s%-6s%-16s%-16s\n", "���", "����", "�Ա�", "��ǰ�ɽ�������", "���ɽ�������");
			printf("\t  %-8d%-12s%-6s%-16d%-16d\n", READER_DATA);
			printf("\t|---------------------------------------------------------|\n");
			printf("\n");
			break;
		}
	}
	if (i == iReaderRecord)/*����ѭ����û���ҵ���¼����ʾ�û�*/
	{
		printf("�Ҳ���%d�Ŷ�����Ϣ��\n", iReaderNum);
		iReaderId = -1;/*�Ҳ�����¼������-1*/
	}
	return iReaderId;
}

void ManageBook()
{
	int iItem;

	ShowBookMenu();	/*��ʾ�Ӳ˵�*/
	scanf("%d", &iItem);
	getchar();
	/*��whileѭ����switch������ѡ��*/
	while (iItem)
	{
		switch (iItem)
		{
		case 1:
			ShowBook();/*��ʾͼ����Ϣ*/
			break;
		case 2:
			AddBook();/*����ͼ����Ϣ*/
			break;
		case 3:
			SearchBook();/*����ͼ��*/
			break;
		case 4:
			DeleteBook();/*ɾ��ͼ��*/
			break;
		case 5:
			ModifyBook();/*�޸�ͼ����Ϣ*/
			break;
		default:
			printf("\t\t��������ȷ�����֣�\n\t\t");
		}
		printf("| ������������Ӳ˵� |");
		getch();   /*�����û����������ַ�*/

		ShowBookMenu();
		scanf("%d", &iItem);
		getchar();
	}
}

void ManageReader()
{
	int iItem = 0;
	ShowReaderMenu();

	scanf("%d", &iItem);
	getchar();

	while (iItem)
	{
		switch (iItem)
		{
		case 1:
			ShowReader();
			break;
		case 2:
			AddReader();
			break;
		case 3:
			SearchReader();
			break;
		case 4:
			DeleteReader();
			break;
		case 5:
			ModifyReader();
			break;
		default:
			printf("\t\t��������ȷ�����֣�\n\t\t");
		}

		printf("| ������������Ӳ˵� |");
		getch();   /*�����û����������ַ�*/
		ShowReaderMenu();
		scanf("%d", &iItem);
		getchar();
	}
}

void BorrowReturnManage()
{
	int iItem = 0;
	ShowBorrowReturnMenu();

	scanf("%d", &iItem);
	getchar();

	while (iItem)
	{
		switch (iItem)
		{
		case 1:
			BorrowBook();
			break;
		case 2:
			ReturnBook();
			break;
		default:
			printf("\t\t��������ȷ�����֣�\n\t\t");
		}
		printf("| ������������Ӳ˵� |");
		getch();
		ShowBorrowReturnMenu();
		scanf("%d", &iItem);
		getchar();
	}
}

int main()
{
	int iItem;
	ShowMainMenu();/*����ShowMainMenu�������ƽ���*/
	scanf("%d", &iItem);/*��ʾ�û���������*/
	getchar();
	while (iItem)
	{
		switch (iItem)
		{
		case 1:
			ManageBook();
			break;
		case 2:
			ManageReader();
			break;
		case 3:
			BorrowReturnManage();
			break;
		default:
			printf("\t\t��������ȷ�����֣�\n\t\t������3�����ת�����˵�");
			Sleep(3000);
		}
		ShowMainMenu();
		scanf("%d", &iItem);
		getchar();
	}
	return 0;
}
void derMenu();
{
	scanf("%d", &iItem);
	getchar();
}


void BorrowReturnManage()
{
	int iItem = 0;
	ShowBorrowReturnMenu();

	scanf("%d", &iItem);
	getchar();

	while (iItem)
	{
		switch (iItem)
		{
		case 1:
			BorrowBook();
			break;
		case 2:
			ReturnBook();
			break;
		default:
			printf("\t\t��������ȷ�����֣�\n\t\t");
		}
		printf("| ������������Ӳ˵� |");
		getch();
		ShowBorrowReturnMenu();
		scanf("%d", &iItem);
		getchar();
	}
}

int main()
{
	int iItem;
	ShowMainMenu();/*����ShowMainMenu�������ƽ���*/
	scanf("%d", &iItem);/*��ʾ�û���������*/
	getchar();
	while (iItem)
	{
		switch (iItem)
		{
		case 1:
			ManageBook();
			break;
		case 2:
			ManageReader();
			break;
		case 3:
			BorrowReturnManage();
			break;
		default:
			printf("\t\t��������ȷ�����֣�\n\t\t������3�����ת�����˵�");
			Sleep(3000);
		}
		ShowMainMenu();
		scanf("%d", &iItem);
		getchar();
	}
	return 0;
}
