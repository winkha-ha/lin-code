#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%c", board[i][j]);
            if (j < col - 1) // 最后一列不打印
                printf("|");
        }
        printf("\n");    // 一行打完换一行
        if (i < row - 1) // 最后一行不打印---
        {
            for (int j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
        }
        printf("\n");
    }
}

void PlayerBoard(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家下棋:>\n");

    while (1)
    {
        printf("请输入坐标:>");
        scanf("%d %d", &x, &y);
        // 坐标范围合法
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("坐标被占用，不能下棋\n");
            }
        }
        else
        {
            printf("坐标非法，请重新输入\n");
        }
    }
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
    printf("随机下棋:>");

    int x = 0;
    int y = 0;

    while (1)
    {
        x = rand() % row; // 0~2
        y = rand() % col;
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}
//如果满了就返回1
//如果不满就返回0
IsFull(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

char Iswin(char board[ROW][COL], int row, int col)
{
    // 行
    int i = 0;
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
    }
    // 列
    for (int j = 0; j < col; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
        {
            return board[1][j];
        }
    }
    // 对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    else if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    //没有人赢了，就要平局·
    if(IsFull(board,row,col))
    {
        return 'Q';
    }

    //游戏继续
    return 'C';

}