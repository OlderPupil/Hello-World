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
//打印棋盘
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
				return 0;//棋盘未满
		}
	}
	return 1;//棋盘已满
}
//选手走
void PlayerMove(char board[ROW][COL],int row,int col)
{
	int i, j;
	printf("请选手下棋:>\n");
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
				printf("该坐标已被占用，请换一个坐标输入\n");
				break;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入:>\n");
			break;
		}
	}
 
}

//电脑走
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("请电脑下棋:>\n");
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
	//每行有三个相同的字符 
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//每列三个相同
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//对角线三个相同
	for (i = 0; i < (row-2); i++)
	{
		for (j = 0; j < (col-2); j++)
		{
			//右下斜线
			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (i = 0; i < (row-2); i++)
	{
		for (j = 2; j < col; j++)
		{
			//左下斜线
			if (board[i][j] == board[i + 1][j -1] && board[i + 1][j -1] == board[i + 2][j - 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//判断是否平局
	ret = IsFull(board, ROW, COL);
	if (ret == 1)
	{
		return 'Q';
	}
	else  //继续
		return 'C';
}