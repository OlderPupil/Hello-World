#define ROW  3
#define COL  3



void game();
//��ʼ��������
void Init_Board(char board[ROW][COL], int row, int col);
//�ж������Ƿ�����
int IsFull(char board[ROW][ROW], int row, int col);
//��ӡ�����
void Print(char board[ROW][COL], int row, int col);
//ѡ������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);