#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//测试三子棋游戏

//游戏的菜单功能
void menu()
{
	printf("********************************\n");
	printf("****进入游戏>1****退出游戏>0****\n");
	printf("********************************\n");
}

//游戏的算法实现
void game()
{
	char ret = 0;
	//创建一个二维数组
	char board[ROW][COL] = {0};

	//初始化棋盘
	Initchessboard(board,ROW,COL);

	//打印棋盘
	Printchessboard(board, ROW, COL);
		
	while (1)
	{
		Playerplacement(board, ROW, COL);
		Printchessboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')//判断玩家输赢
		{
			break;
		}
		Computerplacement(board, ROW, COL);
		Printchessboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')//判断电脑输赢
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

//游戏的主体部分
void test()
{
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}