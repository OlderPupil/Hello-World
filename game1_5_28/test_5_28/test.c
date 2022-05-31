#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
//三子棋游戏

void menu()
{
	printf("************************************\n");
	printf("************  1.play  **************\n");
	printf("************  0.exit  **************\n");
	printf("************************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = '0';
	Init_Board(board, ROW, COL);
	Print(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		Print(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
			
		//电脑下棋
		ComputerMove(board, ROW, COL);
		Print(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
		if (ret == '*')
		{
			printf("玩家取胜！\n");
		}
		else if (ret == '#')
		{
			printf("电脑取胜！\n");
		}
		else 
			printf("和棋！\n");
		
	
}

int main()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("选择错误，请重新输入\n");
		}
	}
	while (input);



	return 0;
}