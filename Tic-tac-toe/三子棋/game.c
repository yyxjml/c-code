#define _CRT_SECURE_NO_WARNINGS 1
//放置函数的定义
#include "game.h"

void Initchessboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j=0;j<col;j++)
		{
			board[i][j] = ' ';//将棋盘中的每个元素初始化
		}
	}
}

void Printchessboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i=0;i<row;i++)
	{
		int j = 0;//打印一行的数据
		for (j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		//打印分割行
		if (i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}	
}

void Playerplacement(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	
	//判断坐标的合法性
	while (1)
	{
		printf("请输入坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <=col)
		{
			//判断你输入的坐标是否被占用
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
		}
		else
		{
			printf("输入的坐标不合理，请重新输入\n");
		}
	}

}

void Computerplacement(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	//那个位置是空的就下哪去
		//不可能产生一个非法的坐标，所以只用判断所下位置上是否为空
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//返回1，表示棋盘满了
//返回0.表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//判断横，竖，斜方向棋子是否相同
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//横三列
	for (i = 0; i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][1];
		}
	}
	//竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断是否平局
	if (IsFull(board,row,col)==1)
	{
		return 'Q';
	}
	return 'C';
}