#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10
//��ʼ������
//board  Ҫ��ʼ��������
//rows   ��ʼ����ά�������
//cols   ��ʼ����ά�������
//set    Ҫ������ʼ�����ַ�
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ���
//row    ��������
//col    ��������
void PrintBoard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char board[ROWS][COLS], int row, int col, int count);

//����
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);