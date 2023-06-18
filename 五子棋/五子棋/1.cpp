#include<stdio.h>    /*����C���ԵĻ��������������*/
#include<conio.h>    /*��GotoXY�����Ķ����й�*/
#include<windows.h>  /*����system����*/
#include <GL/glut.h> /*OpenGL��������*/
#include<math.h>     /*����qsort����*/

/*�궨��*/
#define WINDOW_SIZE 600 /*��Ϸ����Ĵ�С*/
#define WINDOW_POS	100 /*��Ϸ�����λ��(���Ͻ�)*/
#define ENTER 13
#define ESC 27
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define START_POS 13
#define QUIT_POS 16

/*ȫ�ֱ�������*/
int aiStep[250];    /*�洢֮ǰ�µ�����*/
int iNum = 0;       /*����Ĳ���*/
GLint iPlayer = 1;  /*����Ϊ1������Ϊ-1*/
GLint iEnd = 0;     /*�Ƿ����*/
GLint aiBoard[15][15];/*��¼�������ӣ�0��ʾû�����ӣ�1��ʾ���ӣ�-1��ʾ����*/
struct Point
{
	int x;
	int y;
}stPoint;

/*��������*/
void GotoXY(int x, int y);
int ChooseArrow();
int ShowWelcome();
void ShowEnd();
void ShowGuide();
void ShowWinner();
int JudgeWin(int x, int y);
void TransPos(int* x, int* y);
void DrawChess(int x, int y, int iColor);
void NewGame();
void ManageItem(int n);
void DrawBoard();
void DisplayGL();
void CtrlKeyboard(unsigned char iKey, int x, int y);
void CtrlMouse(int iButton, int iState, int x, int y);
void CtrlMenu();

/*����ƶ�����*/
void GotoXY(int x, int y)
{
	COORD c;
	c.X = 2 * x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
/*ѡ��������*/
int ChooseArrow()
{
	char cButton;       /*�������µļ�ֵ*/
	int iStart = -1;    /*0��ʾ�˳���Ϸ��1��ʾ��ʼ��Ϸ*/
	/*���ǰ����˳���ʼ��Ϸ���˳�ѭ��*/
	while (iStart != 0 && iStart != 1)
	{
		cButton = _getch();
		/*����up��down�ͽ��й���ƶ�����*/
		if (cButton == UP || cButton == DOWN)
		{
			if (stPoint.y == START_POS)
			{
				stPoint.y = QUIT_POS;
				GotoXY(10, START_POS);
				printf("     ");
				GotoXY(10, QUIT_POS);
				printf("����>");
				GotoXY(12, QUIT_POS);
			}
			else if (stPoint.y == QUIT_POS)
			{
				stPoint.y = START_POS;
				GotoXY(10, QUIT_POS);
				printf("     ");
				GotoXY(10, START_POS);
				printf("����>");
				GotoXY(12, START_POS);
			}
		}
		/*����esc����enter�˳���Ϸ*/
		if ((cButton == START_POS && stPoint.y == QUIT_POS) || cButton == ESC)
		{
			iStart = 0;
			break;
		}
		/*��ʼ��Ϸ*/
		if (cButton == START_POS && stPoint.y == START_POS)
		{
			iStart = 1;
			break;
		}
	}
	return iStart;
}
/*��ӭ����*/
int ShowWelcome()
{
	int iStart = -1;    /*0��ʾ�˳���Ϸ��1��ʾ��ʼ��Ϸ*/
	system("color 3F");
	GotoXY(14, 1);
	printf("Welcome to play fivechess");
	GotoXY(17, 7);
	printf("MAIN MENU");
	GotoXY(15, START_POS);
	printf("***START GAME***");
	GotoXY(15, QUIT_POS);
	printf("***QUIT  GAME***");
	GotoXY(10, START_POS);
	printf("����>");
	stPoint.x = 15;
	stPoint.y = START_POS;
	GotoXY(12, START_POS);
	iStart = ChooseArrow();
	return iStart;
}
/*��Ϸ����ʱ�ļ���*/
void ShowGuide()
{
	system("cls");
	system("color 4F");
	GotoXY(6, 5);
	printf("BLACK");
	GotoXY(6, 9);
	printf("PLAYER");
	GotoXY(19, 7);
	printf("VS");
	GotoXY(31, 5);
	printf("WHITE");
	GotoXY(31, 9);
	printf("PLAYER");
	GotoXY(6, 18);
	printf("1: You Can Click Right Button to Play Again, Undo or Exit!");
	GotoXY(6, 20);
	printf("2: You can use ESC key to exit the game too!");
}
/*��������*/
void ShowEnd()
{
	system("cls");
	system("color 6F");
	GotoXY(16, 3);
	printf("GAME OVER!!!");
	GotoXY(1, 23);
}
/*��ʾӮ��*/
void ShowWinner()
{
	system("cls");
	GotoXY(15, 8);
	printf("congratulations!!!");
	GotoXY(12, 13);
	if (iPlayer == 1)
	{
		system("color 0F");
		printf("BLACK PLAYER WIN THE GAME!!!");
	}
	else
	{
		system("color 2F");
		printf("WHITE PLAYER WIN THE GAME!!!");
	}
}
/*�ж�����Ƿ�ʤ��*/
int JudgeWin(int x, int y)
{
	int aiDir[4][2] = { 0, 1, 1, 0, 1, 1, 1, -1 };
	for (int i = 0; i < 4; ++i)
	{
		/*�������ӵ���Ŀ*/
		int iTotal = 1;
		for (int j = 1; aiBoard[x][y] == aiBoard[x + j * aiDir[i][0]][y + j * aiDir[i][1]]; ++j)
			++iTotal;
		for (int k = 1; aiBoard[x][y] == aiBoard[x - k * aiDir[i][0]][y - k aiDir[i][1]]; ++k)
			++iTotal;
		if (iTotal >= 5) return 1;
	}
	return 0;
}
/*����Ļ����ת���������ϵ�����*/
void TransPos(int* x, int* y)
{
	*y = WINDOW_SIZE - *y;
	*x = (*x << 4) / (WINDOW_SIZE * 1.0) - 0.5;
	*y = (*y << 4) / (WINDOW_SIZE * 1.0) - 0.5;
}
/*������(����һ��Բ)*/
void DrawChess(int x, int y, int iColor)
{
	if (iColor == 1)
		glColor3f(0, 0, 0);
	else
		glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	for (int i = 0; i < 360; i++)
		glVertex2f(0.37 * cos(i * 1.0) + x + 1, 0.37 * sin(i * 1.0) + y + 1);/*Բ���ϸ����������*/
	glEnd();
}
/*��ʼ��һ����Ϸʱ������ʼ������*/
void NewGame()
{
	ShowGuide();
	iNum = 0;
	iPlayer = 1;
	iEnd = 0;
	memset(aiBoard, 0, sizeof(aiBoard));
}
/*�滭opengl����*/
void DrawBoard()
{
	glClearColor(0.1, 0.2, 0.3, 0);
	glMatrixMode(GL_PROJECTION); /*��ͶӰ��ؽ��в�����Ҳ���ǰ�����ͶӰ��һ��ƽ����*/
	glOrtho(0, 16, 0, 16, -1, 1);
	/*�����̵���*/
	static GLint vertices[120];
	int i, j;
	for (i = 0; i < 15; i++)
	{
		j = i << 2;
		vertices[j] = i + 1;
		vertices[j + 1] = 1;
		vertices[j + 2] = i + 1;
		vertices[j + 3] = 15;
		vertices[j + 60] = 1;
		vertices[j + 61] = i + 1;
		vertices[j + 62] = 15;
		vertices[j + 63] = i + 1;
	}
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(2, GL_INT, 0, vertices);
}
void DisplayGL()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 1);
	/*������*/
	glDrawArrays(GL_LINES, 0, 60);
	/*������*/
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (aiBoard[i][j])
				DrawChess(i, j, aiBoard[i][j]);
		}
	}
	glFlush();
}
/*����������*/
void CtrlMouse(int iButton, int iState, int x, int y)
{
	switch (iButton)
	{
	case GLUT_LEFT_BUTTON:
		if (!iEnd)
		{
			TransPos(&x, &y);
			if (aiBoard[x][y]) break;
			aiBoard[x][y] = iPlayer;
			/*�����µ����Ӽ�¼��step����*/
			aiStep[iNum++] = x * 100 + y;
			if (JudgeWin(x, y))
			{
				iEnd = 1;
				ShowWinner();
			}
			/*����ѡ��*/
			iPlayer = -iPlayer;
			glutPostRedisplay();
		}
		break;
	case GLUT_RIGHT_BUTTON:
		NewGame();
		glutPostRedisplay();
		break;
	}
}
/*���̲�������*/
void CtrlKeyboard(unsigned char cKey, int x, int y)
{
	if (cKey == ESC)
	{
		ShowEnd();
		exit(0);
	}
}
/*�Ҽ��˵���ѡ��*/
void CtrlMenu()
{
	int newGameMenu = glutCreateMenu(ManageItem);
	glutAddMenuEntry("Play Again", 1);
	glutAddMenuEntry("Undo", 2);
	glutAddMenuEntry("Exit", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
/*�Ҽ��˵�����*/
void ManageItem(int iNumber)
{
	int iPrev;
	switch (iNumber)
	{
	case 1:
		NewGame();
		break;
	case 2:
		if (iNum == 0) break;
		iPrev = aiStep[iNum - 1];
		/*���ղŵ����ӴӼ�¼��Ĩȥ*/
		iNum--;
		aiBoard[iPrev / 100][iPrev % 100] = 0;
		iPlayer = -iPlayer;
		break;
	case 3:
		ShowEnd();
		exit(0);
		break;
	}
	glutPostRedisplay();
}
int main(int argc, char** argv)
{
	int iStart = -1;    /*0��ʾ�˳���Ϸ��1��ʾ��ʼ��Ϸ*/
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WINDOW_SIZE, WINDOW_SIZE);
	glutInitWindowPosition(WINDOW_POS, WINDOW_POS);
	iStart = ShowWelcome();/*������Ϸ��ӭ����*/
	if (iStart)/*�Ƿ������Ϸ*/
	{
		ShowGuide();
		glutCreateWindow("fivechess");
		DrawBoard();
		CtrlMenu();
		NewGame();
		glutDisplayFunc(DisplayGL);
		glutKeyboardFunc(CtrlKeyboard);
		glutMouseFunc(CtrlMouse);
		glutMainLoop();
	}
	ShowEnd();
	return 0;
}

