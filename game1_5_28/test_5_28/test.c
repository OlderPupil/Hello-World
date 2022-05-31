#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
//��������Ϸ

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
		//�������
		PlayerMove(board, ROW, COL);
		Print(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
			
		//��������
		ComputerMove(board, ROW, COL);
		Print(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
		if (ret == '*')
		{
			printf("���ȡʤ��\n");
		}
		else if (ret == '#')
		{
			printf("����ȡʤ��\n");
		}
		else 
			printf("���壡\n");
		
	
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
			printf("ѡ���������������\n");
		}
	}
	while (input);



	return 0;
}