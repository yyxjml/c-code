#pragma once
//���ú���������
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
void Initchessboard(char board[ROW][COL],int row,int col);
void Printchessboard(char board[ROW][COL],int row,int col);
void Playerplacement(char board[ROW][COL],int row,int col);
void Computerplacement(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL],int row,int col);