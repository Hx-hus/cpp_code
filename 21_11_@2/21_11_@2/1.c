#define _CRT_SECURE_NO_WARNINGS 1 
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<mmsystem.h>
#include<time.h>
#pragma comment(lib,"winmm.lib")
HWND hwnd;            //句柄
//IMAGE 图像类
IMAGE mm[8];          //第一张图片
IMAGE white;          //白色方块
int map[4][4];        //地图
int NUMBER = -1;      //当前照片序号
int main();

//加载资源
void loadResoure()
{

    char name[10];
    //利用for循环批量加载图片到mm数组
    loadimage(&mm[0], "MM.jpg", 800, 800);      //加载第一个图片文件
    loadimage(&white, "白块.jpg", 200, 200);    //加载白色图片文件
    //加载第2个到第8个文件
    for (int i = 1; i < 8; i++)
    {
        sprintf(name, "%d.jpg", i);           //sprintf的作用是将一个格式化的字符串输出到一个目的字符串中
        loadimage(&mm[i], name, 800, 800);   //从图片文件获取图像加载到mm数组中,将图片文件设置大小为800x800支持(bmp/gif/jpg/png/tif/emf/wmf/ico)图片文件   
    }
}

//画出地图
void drawMap()
{
    //根据map的值画出地图
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int x = j * 200;
            int y = i * 200;
            if (map[i][j] == 15)         //如果为15,打印白色的图片
                putimage(x, y, &white);
            else
                //以下局部代码将mm[NUMBER]所指图片文件 ((map[i][j] % 4 * 200), (map[i][j] / 4 * 200)) 起始的 200x200 的图像拷贝至 (x,y) 位置
                putimage(x, y, 200, 200, &mm[NUMBER], (map[i][j] % 4 * 200), (map[i][j] / 4 * 200));
        }
    }
}

//返回白色图片的 y坐标,如果找不到则返回-1
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
    return -1;  //没找到返回-1,因为-1不是数组下标
}
//返回白色图片的 x坐标,如果找不到则返回-1
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
    return -1;  //没找到返回-1,因为-1不是数组下标
}

//判断游戏是否结束,没有结束返回1,否则返回0
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

//开始游戏
void playGame()
{
    MOUSEMSG m;                //创建储存鼠标信息变量
    while (TRUE)               //一直循环直到游戏结束
    {
        drawMap();             //画出地图
        if (gameOver())        //判断是否拼出该图形,条件成立弹出提示并开始下一关,否则继续游戏
        {
            if (MessageBox(hwnd, "成功啦,是否要继续", "拼图游戏", MB_YESNO) == IDYES)
            {
                main();
            }
            exit(0);          //结束程序,0为正常退出
        }
        m = GetMouseMsg();    //获取一个鼠标消息。如果没有，就等待
        int w_i = searchWhite_i();     //获取白色方块的y坐标
        int w_j = searchWhite_j();    //获取白色方块的x坐标
        int m_i;
        int m_j;
        switch (m.uMsg)
        {
        case WM_LBUTTONDOWN:
            m_i = m.y / 200;           //换算成鼠标左键点击图片的所对数组Map的值

            m_j = m.x / 200;      //换算成鼠标左键点击图片的所对数组Map的值

            if (w_i == m_i && w_j + 1 == m_j)    //如果点击的是白色图片左边的图片,所点击图片与白色图片交换位置
            {
                map[w_i][w_j] = map[m_i][m_j];
                map[m_i][m_j] = 15;
            }

            if (w_i == m_i && w_j - 1 == m_j)    //如果点击的是白色图片右边的图片,所点击图片与白色图片交换位置
            {
                map[w_i][w_j] = map[m_i][m_j];
                map[m_i][m_j] = 15;
            }

            if (w_i + 1 == m_i && w_j == m_j)    //如果点击的是白色图片下边的图片,所点击图片与白色图片交换位置
            {
                map[w_i][w_j] = map[m_i][m_j];
                map[m_i][m_j] = 15;
            }

            if (w_i - 1 == m_i && w_j == m_j)    如果点击的是白色图片上边的图片, 所点击图片与白色图片交换位置
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
//判断参数n,是否在temp中存在,若存在数组元素前移返回1,否则返回0
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
    int Mumber = 0;           //计数
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Mumber++;
            Count = temp[rand() % Num];  //利用辅助数组随机产生0 - 14不重复的数字
            if (Lookup(Count))
            {
                map[i][j] = Count;
                Num--;                   //赋值成功temp数值-1;
            }
            if (Mumber == 15)            //计数判断是否为map数组 赋15个值,因为最后一个值为15:白色图片的值
            {
                break;
            }
        }
    }
    map[3][3] = 15;                      //最后一个元素值为15:白色图片
}
int main(void)
{
    NUMBER++;                            //当前图片编号
    if (NUMBER == 8)                     //如果NUMBER == 8则弹出窗口并结束程序
    {
        MessageBox(hwnd, "恭喜您通关啦!", "拼图游戏", MB_OK);
        exit(0);
    }
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 15; i++)    //为辅助数组赋值
    {
        temp[i] = i;
    }

    random();
    hwnd = initgraph(800, 800);       //初始化图形环境长为:800,宽为:800
    cleardevice();                  //清屏
    mciSendString("open Inspire.mp3", 0, 0, 0);   //加载背景音乐
    mciSendString("play Inspire.mp3", 0, 0, 0);   //播放背景音乐
    loadResoure();      //加载资源
    playGame();         //开始哟西
    closegraph();       //关闭图形环境
    return 0;
}