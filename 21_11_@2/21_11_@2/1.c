#define _CRT_SECURE_NO_WARNINGS 1 
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<mmsystem.h>
#include<time.h>
#pragma comment(lib,"winmm.lib")
HWND hwnd;            //���
//IMAGE ͼ����
IMAGE mm[8];          //��һ��ͼƬ
IMAGE white;          //��ɫ����
int map[4][4];        //��ͼ
int NUMBER = -1;      //��ǰ��Ƭ���
int main();

//������Դ
void loadResoure()
{

    char name[10];
    //����forѭ����������ͼƬ��mm����
    loadimage(&mm[0], "MM.jpg", 800, 800);      //���ص�һ��ͼƬ�ļ�
    loadimage(&white, "�׿�.jpg", 200, 200);    //���ذ�ɫͼƬ�ļ�
    //���ص�2������8���ļ�
    for (int i = 1; i < 8; i++)
    {
        sprintf(name, "%d.jpg", i);           //sprintf�������ǽ�һ����ʽ�����ַ��������һ��Ŀ���ַ�����
        loadimage(&mm[i], name, 800, 800);   //��ͼƬ�ļ���ȡͼ����ص�mm������,��ͼƬ�ļ����ô�СΪ800x800֧��(bmp/gif/jpg/png/tif/emf/wmf/ico)ͼƬ�ļ�   
    }
}

//������ͼ
void drawMap()
{
    //����map��ֵ������ͼ
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int x = j * 200;
            int y = i * 200;
            if (map[i][j] == 15)         //���Ϊ15,��ӡ��ɫ��ͼƬ
                putimage(x, y, &white);
            else
                //���¾ֲ����뽫mm[NUMBER]��ָͼƬ�ļ� ((map[i][j] % 4 * 200), (map[i][j] / 4 * 200)) ��ʼ�� 200x200 ��ͼ�񿽱��� (x,y) λ��
                putimage(x, y, 200, 200, &mm[NUMBER], (map[i][j] % 4 * 200), (map[i][j] / 4 * 200));
        }
    }
}

//���ذ�ɫͼƬ�� y����,����Ҳ����򷵻�-1
int searchWhite_i()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (map[i][j] == 15)
                return i;
        }
    }
    return -1;  //û�ҵ�����-1,��Ϊ-1���������±�
}
//���ذ�ɫͼƬ�� x����,����Ҳ����򷵻�-1
int searchWhite_j()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (map[i][j] == 15)
                return j;
        }
    }
    return -1;  //û�ҵ�����-1,��Ϊ-1���������±�
}

//�ж���Ϸ�Ƿ����,û�н�������1,���򷵻�0
int gameOver()
{
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (map[i][j] != count++)
            {
                return 0;
            }
        }
    }
    return 1;
}

//��ʼ��Ϸ
void playGame()
{
    MOUSEMSG m;                //�������������Ϣ����
    while (TRUE)               //һֱѭ��ֱ����Ϸ����
    {
        drawMap();             //������ͼ
        if (gameOver())        //�ж��Ƿ�ƴ����ͼ��,��������������ʾ����ʼ��һ��,���������Ϸ
        {
            if (MessageBox(hwnd, "�ɹ���,�Ƿ�Ҫ����", "ƴͼ��Ϸ", MB_YESNO) == IDYES)
            {
                main();
            }
            exit(0);          //��������,0Ϊ�����˳�
        }
        m = GetMouseMsg();    //��ȡһ�������Ϣ�����û�У��͵ȴ�
        int w_i = searchWhite_i();     //��ȡ��ɫ�����y����
        int w_j = searchWhite_j();    //��ȡ��ɫ�����x����
        int m_i;
        int m_j;
        switch (m.uMsg)
        {
        case WM_LBUTTONDOWN:
            m_i = m.y / 200;           //��������������ͼƬ����������Map��ֵ

            m_j = m.x / 200;      //��������������ͼƬ����������Map��ֵ

            if (w_i == m_i && w_j + 1 == m_j)    //���������ǰ�ɫͼƬ��ߵ�ͼƬ,�����ͼƬ���ɫͼƬ����λ��
            {
                map[w_i][w_j] = map[m_i][m_j];
                map[m_i][m_j] = 15;
            }

            if (w_i == m_i && w_j - 1 == m_j)    //���������ǰ�ɫͼƬ�ұߵ�ͼƬ,�����ͼƬ���ɫͼƬ����λ��
            {
                map[w_i][w_j] = map[m_i][m_j];
                map[m_i][m_j] = 15;
            }

            if (w_i + 1 == m_i && w_j == m_j)    //���������ǰ�ɫͼƬ�±ߵ�ͼƬ,�����ͼƬ���ɫͼƬ����λ��
            {
                map[w_i][w_j] = map[m_i][m_j];
                map[m_i][m_j] = 15;
            }

            if (w_i - 1 == m_i && w_j == m_j)    ���������ǰ�ɫͼƬ�ϱߵ�ͼƬ, �����ͼƬ���ɫͼƬ����λ��
            {
             map[w_i][w_j] = map[m_i][m_j];
             map[m_i][m_j] = 15;
            }
            break;
        }
    }
}

int Num = 15;
int temp[15];
//�жϲ���n,�Ƿ���temp�д���,����������Ԫ��ǰ�Ʒ���1,���򷵻�0
bool Lookup(int n)
{
    for (int i = 0; i < Num; i++)
    {
        if (temp[i] == n)
        {
            for (int m = i; m < Num - 1; m++)
            {
                temp[m] = temp[m + 1];
            }
            return 1;
        }
    }
    return 0;
}

void random()
{
    int Count = 0;
    int Mumber = 0;           //����
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Mumber++;
            Count = temp[rand() % Num];  //���ø��������������0 - 14���ظ�������
            if (Lookup(Count))
            {
                map[i][j] = Count;
                Num--;                   //��ֵ�ɹ�temp��ֵ-1;
            }
            if (Mumber == 15)            //�����ж��Ƿ�Ϊmap���� ��15��ֵ,��Ϊ���һ��ֵΪ15:��ɫͼƬ��ֵ
            {
                break;
            }
        }
    }
    map[3][3] = 15;                      //���һ��Ԫ��ֵΪ15:��ɫͼƬ
}
int main(void)
{
    NUMBER++;                            //��ǰͼƬ���
    if (NUMBER == 8)                     //���NUMBER == 8�򵯳����ڲ���������
    {
        MessageBox(hwnd, "��ϲ��ͨ����!", "ƴͼ��Ϸ", MB_OK);
        exit(0);
    }
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 15; i++)    //Ϊ�������鸳ֵ
    {
        temp[i] = i;
    }

    random();
    hwnd = initgraph(800, 800);       //��ʼ��ͼ�λ�����Ϊ:800,��Ϊ:800
    cleardevice();                  //����
    mciSendString("open Inspire.mp3", 0, 0, 0);   //���ر�������
    mciSendString("play Inspire.mp3", 0, 0, 0);   //���ű�������
    loadResoure();      //������Դ
    playGame();         //��ʼӴ��
    closegraph();       //�ر�ͼ�λ���
    return 0;
}