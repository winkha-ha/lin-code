#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//头文件中声明函数
#define ROW 3
#define COL 3
//初始化棋盘
void InitBoard(char shangziqi[ROW][COL],int row,int col);
//打印棋盘
void DisplayBoard(char shangziqi[ROW][COL],int row,int col);
//玩家下棋
void PlayerMove(char shangziqi[ROW][COL],int row,int col);
//电脑下棋
//我没有下棋的随机下棋
void ComputerMove(char board[ROW][COL],int row,int col);
//
//玩家赢 - ’*‘
//电脑赢 - ’#‘
//平局 - ’Q'
//继续 - ‘C'
//
char Iswin(char board[ROW][COL],int row,int col);