#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------ɨ  ��------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col,int count)
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] =+ '1';
			count--;
		}
	}
}

int AroundMine(char mine[ROWS][COLS], int x, int y)//ͳ��mine���飨x,y�������ܱ��׵ĸ���
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		   mine[x][y - 1] +  mine[x][y + 1] +
		   mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (win < row * col - COUNT)
	{
		printf("������Ҫ�ų������꣺"); 
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж�����Ϸ���
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����������\n");
				PrintBoard(mine, row, col);
				break;
			}
			if (mine[x][y] == '0')//��������ף�ͳ���ܱ��׵ĸ���
			{
				int count = AroundMine(mine, x, y);
				show[x][y] = count + '0';  //��ŵ��������ַ�
			    PrintBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win == row * col - COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
	}
}