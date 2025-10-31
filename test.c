#include "game.h"
#include <stdio.h>



void menu()
{
    printf("***********************\n");
    printf("*****    三子棋    *****\n");
    printf("**** 1.play 0.exit ****\n");
    printf("***********************\n");
}
void game()
{
    // 第二部分实现
    char ret = 0; 
    char board[ROW][COL] = {0};
    // 初始化棋盘的函数
    InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);
    // 下棋
    while(1)
    {
        PlayerMove(board, ROW, COL);
        //判断输赢
        ret = IsWin(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
        DisplayBoard(board, ROW, COL);
        ComputerMove(board, ROW, COL);
        //判断输赢
        ret = IsWin(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
        DisplayBoard(board, ROW, COL);
    }
    if(ret == '*')
    {
        printf("玩家赢\n");
    }
    else if(ret == '#')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
    DisplayBoard(board,ROW,COL);
}

int main()
{
    srand((unsigned int)time(NULL));//设置随机数的生成七点的
    int input = 0;
    do
    {
        // 打印菜单
        menu();
        printf("请输入:>");
        scanf("%d", &input);
        switch (input) // 用switch语句来打印给玩家提示，或者正式进入游戏
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏");
            break;
        default:
            printf("输入错误");
            break;
        }
    } while (input);
    return 0;
}
