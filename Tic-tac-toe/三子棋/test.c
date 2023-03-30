#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//������������Ϸ

//��Ϸ�Ĳ˵�����
void menu()
{
	printf("********************************\n");
	printf("****������Ϸ>1****�˳���Ϸ>0****\n");
	printf("********************************\n");
}

//��Ϸ���㷨ʵ��
void game()
{
	char ret = 0;
	//����һ����ά����
	char board[ROW][COL] = {0};

	//��ʼ������
	Initchessboard(board,ROW,COL);

	//��ӡ����
	Printchessboard(board, ROW, COL);
		
	while (1)
	{
		Playerplacement(board, ROW, COL);
		Printchessboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')//�ж������Ӯ
		{
			break;
		}
		Computerplacement(board, ROW, COL);
		Printchessboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')//�жϵ�����Ӯ
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

//��Ϸ�����岿��
void test()
{
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}