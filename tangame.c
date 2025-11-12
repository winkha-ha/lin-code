#define _CRT_SECURE_NO_WARNINGS
#include<graphics.h> //图形界面库 EasyX

#include<stdio.h>
#include<conio.h>   //它是一个头文件控制键盘的


#define MAX_SNAKE 500 //常量


struct Pos
{
    int x;
    int y;
    DWORD color;
};
//蛇的结构体
struct Snake
{
    int num;//蛇身体的节数
    int dir;//蛇的方向
    int score;//分数
    int size;//蛇的宽和高
    int speed;//蛇的速度
    //记录坐标  数组
    struct Pos coor[MAX_SNAKE];
}snake;

//枚举
enum DIR
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};
//1.定义  2.初始化一下数据  3.画蛇蛇
void GameInit()
{
    //蛇的身体的颜色随便变化
    srand(GetTickCount());
    snake.num = 3;
    snake.dir = RIGHT;
    snake.score = 0;
    snake.size = 10;
    snake.speed = 10;
    snake.coor[2].x = 20;
    snake.coor[2].y = 0;
    //初始化数组当中的颜色  每一次有不同的颜色  随机的函数 rand()
    snake.coor[2].color = RGB(rand() % 256, rand() % 256, rand() % 256);//随机生成颜色
    snake.coor[1].x = 10;
    snake.coor[1].y = 0;
    //初始化数组当中的颜色  每一次有不同的颜色  随机的函数 rand()
    snake.coor[1].color = RGB(rand() % 256, rand() % 256, rand() % 256);//随机生成颜色
    snake.coor[0].x = 0;
    snake.coor[0].y = 0;
    //初始化数组当中的颜色  每一次有不同的颜色  随机的函数 rand()
    snake.coor[0].color = RGB(rand() % 256, rand() % 256, rand() % 256);//随机生成颜色
}

//画蛇
void GameDraw()
{
    //颜色
    setfillcolor(snake.coor[0].color);
    cleardevice();

    for (int i = 0; i < snake.num; i++)
    {
        //填充一下颜色
        setfillcolor(snake.coor[i].color);
        //画矩形
        fillrectangle(snake.coor[i].x, snake.coor[i].y, snake.coor[i].x + 10, snake.coor[i].y + 10);
    }
}

//让蛇动起来
void GameMove()
{



}
//蛇的控制
void GameController()
{
    //获取键盘
    char key = _getch();

    switch (key)
    {
    case 72:
        snake.dir = UP;
        break;
    case 80:
        snake.dir = DOWN;
        break;
    case 75:
        snake.dir = LEFT;
        break;
    case 77:
        snake.dir = RIGHT;
        break;
           
    }
    printf("%d\n", key);
}




//程序在这里开始
int main()
{
    //游戏窗口
    initgraph(640, 480);
    //RGB代表颜色 二进制的代表 三种颜色的混合体
    setbkcolor(RGB(207, 214, 229));
    cleardevice();
    //设置初始化蛇的数据
    GameInit();
    

    //画矩形 蛇就是矩形
    fillrectangle(snake.coor[0].x, snake.coor[0].y,10,10);
    //circle(20, 20, 20);


    //一闪

    while (1)
    {
        GameDraw();
        if (_kbhit())  //如果按键了
        {
            GameController();
        }
    }
    return 0;
}