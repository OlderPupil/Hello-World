#define ROW  3
#define COL  3



void game();
//初始化函数；
void Init_Board(char board[ROW][COL], int row, int col);
//判断棋盘是否满了
int IsFull(char board[ROW][ROW], int row, int col);
//打印表格函数
void Print(char board[ROW][COL], int row, int col);
//选手下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);