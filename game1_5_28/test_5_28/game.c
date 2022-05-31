#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"




void Init_Board(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//��ӡ����
void Print(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j< col; j++)
		{ 
			  
				  printf(" %c ", board[i][j]);
				  if (j<col-1)
				  printf("|");

		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
				printf("___");
			else
				printf("   ");
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
	}
	
}

int IsFull(char board[ROW][ROW], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//����δ��
		}
	}
	return 1;//��������
}
//ѡ����
void PlayerMove(char board[ROW][COL],int row,int col)
{
	int i, j;
	printf("��ѡ������:>\n");
	while (1)
	{
		scanf("%d %d", &i, &j);
		if (i>=1&&i <=ROW&&j>=1&& j<= COL)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ�ã��뻻һ����������\n");
				break;
			}
		}
		else
		{
			printf("���겻�Ϸ�������������:>\n");
			break;
		}
	}
 
}

//������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("���������:>\n");
	//scanf("%d %d", &i, &j);
	while (1)
	{
		int i = rand() % ROW;
		int j = rand() % COL;
		if (i>=0&&i< ROW&&j>=0&&j < COL&&board[i][j] == ' ')
		{
			board[i][j] = '#';
			//Print(board, ROW, COL);
			break;
		}
	}
	//PlayerMove(board, ROW, COL);
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i, j;
	int ret = 0;
	//ÿ����������ͬ���ַ� 
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//ÿ��������ͬ
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//�Խ���������ͬ
	for (i = 0; i < (row-2); i++)
	{
		for (j = 0; j < (col-2); j++)
		{
			//����б��
			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (i = 0; i < (row-2); i++)
	{
		for (j = 2; j < col; j++)
		{
			//����б��
			if (board[i][j] == board[i + 1][j -1] && board[i + 1][j -1] == board[i + 2][j - 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//�ж��Ƿ�ƽ��
	ret = IsFull(board, ROW, COL);
	if (ret == 1)
	{
		return 'Q';
	}
	else  //����
		return 'C';
}