#include<stdio.h>    /*包含C语言的基本输入输出函数*/
#include<conio.h>    /*与GotoXY函数的定义有关*/
#include<windows.h>  /*调用system函数*/
#include <GL/glut.h> /*OpenGL操作函数*/
#include<math.h>     /*调用qsort函数*/

/*宏定义*/
#define WINDOW_SIZE 600 /*游戏界面的大小*/
#define WINDOW_POS	100 /*游戏界面的位置(左上角)*/
#define ENTER 13
#define ESC 27
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define START_POS 13
#define QUIT_POS 16

/*全局变量定义*/
int aiStep[250];    /*存储之前下的棋子*/
int iNum = 0;       /*下棋的步数*/
GLint iPlayer = 1;  /*黑棋为1，白棋为-1*/
GLint iEnd = 0;     /*是否结束*/
GLint aiBoard[15][15];/*记录棋盘棋子，0表示没有棋子，1表示黑子，-1表示白子*/
struct Point
{
	int x;
	int y;
}stPoint;

/*函数声明*/
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

/*光标移动操作*/
void GotoXY(int x, int y)
{
	COORD c;
	c.X = 2 * x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
/*选择键面操作*/
int ChooseArrow()
{
	char cButton;       /*键盘敲下的键值*/
	int iStart = -1;    /*0表示退出游戏，1表示开始游戏*/
	/*若是按下退出或开始游戏就退出循环*/
	while (iStart != 0 && iStart != 1)
	{
		cButton = _getch();
		/*若是up和down就进行光标移动操作*/
		if (cButton == UP || cButton == DOWN)
		{
			if (stPoint.y == START_POS)
			{
				stPoint.y = QUIT_POS;
				GotoXY(10, START_POS);
				printf("     ");
				GotoXY(10, QUIT_POS);
				printf("——>");
				GotoXY(12, QUIT_POS);
			}
			else if (stPoint.y == QUIT_POS)
			{
				stPoint.y = START_POS;
				GotoXY(10, QUIT_POS);
				printf("     ");
				GotoXY(10, START_POS);
				printf("——>");
				GotoXY(12, START_POS);
			}
		}
		/*按下esc键或enter退出游戏*/
		if ((cButton == START_POS && stPoint.y == QUIT_POS) || cButton == ESC)
		{
			iStart = 0;
			break;
		}
		/*开始游戏*/
		if (cButton == START_POS && stPoint.y == START_POS)
		{
			iStart = 1;
			break;
		}
	}
	return iStart;
}
/*欢迎键面*/
int ShowWelcome()
{
	int iStart = -1;    /*0表示退出游戏，1表示开始游戏*/
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
	printf("——>");
	stPoint.x = 15;
	stPoint.y = START_POS;
	GotoXY(12, START_POS);
	iStart = ChooseArrow();
	return iStart;
}
/*游戏进行时的键面*/
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
/*结束键面*/
void ShowEnd()
{
	system("cls");
	system("color 6F");
	GotoXY(16, 3);
	printf("GAME OVER!!!");
	GotoXY(1, 23);
}
/*显示赢家*/
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
/*判断玩家是否胜利*/
int JudgeWin(int x, int y)
{
	int aiDir[4][2] = { 0, 1, 1, 0, 1, 1, 1, -1 };
	for (int i = 0; i < 4; ++i)
	{
		/*连续棋子的数目*/
		int iTotal = 1;
		for (int j = 1; aiBoard[x][y] == aiBoard[x + j * aiDir[i][0]][y + j * aiDir[i][1]]; ++j)
			++iTotal;
		for (int j = 1; aiBoard[x][y] == aiBoard[x - j * aiDir[i][0]][y - j * aiDir[i][1]]; ++j)
			++iTotal;
		if (iTotal >= 5) return 1;
	}
	return 0;
}
/*把屏幕坐标转换成棋盘上的坐标*/
void TransPos(int* x, int* y)
{
	*y = WINDOW_SIZE - *y;
	*x = (*x << 4) / (WINDOW_SIZE * 1.0) - 0.5;
	*y = (*y << 4) / (WINDOW_SIZE * 1.0) - 0.5;
}
/*画棋子(即画一个圆)*/
void DrawChess(int x, int y, int iColor)
{
	if (iColor == 1)
		glColor3f(0, 0, 0);
	else
		glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	for (int i = 0; i < 360; i++)
		glVertex2f(0.37 * cos(i * 1.0) + x + 1, 0.37 * sin(i * 1.0) + y + 1);/*圆弧上各个点的坐标*/
	glEnd();
}
/*开始新一局游戏时用来初始化数据*/
void NewGame()
{
	ShowGuide();
	iNum = 0;
	iPlayer = 1;
	iEnd = 0;
	memset(aiBoard, 0, sizeof(aiBoard));
}
/*绘画opengl键面*/
void DrawBoard()
{
	glClearColor(0.1, 0.2, 0.3, 0);
	glMatrixMode(GL_PROJECTION); /*对投影相关进行操作，也就是把物体投影到一个平面上*/
	glOrtho(0, 16, 0, 16, -1, 1);
	/*画棋盘的线*/
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
	/*画棋盘*/
	glDrawArrays(GL_LINES, 0, 60);
	/*画棋子*/
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
/*鼠标操作函数*/
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
			/*将落下的棋子记录进step数组*/
			aiStep[iNum++] = x * 100 + y;
			if (JudgeWin(x, y))
			{
				iEnd = 1;
				ShowWinner();
			}
			/*交换选手*/
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
/*键盘操作函数*/
void CtrlKeyboard(unsigned char cKey, int x, int y)
{
	if (cKey == ESC)
	{
		ShowEnd();
		exit(0);
	}
}
/*右键菜单栏选项*/
void CtrlMenu()
{
	int newGameMenu = glutCreateMenu(ManageItem);
	glutAddMenuEntry("Play Again", 1);
	glutAddMenuEntry("Undo", 2);
	glutAddMenuEntry("Exit", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
/*右键菜单操作*/
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
		/*将刚才的落子从记录中抹去*/
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
	int iStart = -1;    /*0表示退出游戏，1表示开始游戏*/
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WINDOW_SIZE, WINDOW_SIZE);
	glutInitWindowPosition(WINDOW_POS, WINDOW_POS);
	iStart = ShowWelcome();/*进入游戏欢迎键面*/
	if (iStart)/*是否进入游戏*/
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

