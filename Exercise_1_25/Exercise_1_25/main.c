#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d \n",a,b);
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d \n", a, b);
//	return 0;
//}

//int main()//可能会溢出
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d \n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d \n", a, b);
//	return 0;
//}


//
////用异或实现两数的交换(可读性太差)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d \n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a=%d b=%d \n",a,b);
//	return 0;
//}
//
#include"game.h"

void menu()
{
	printf("*************************\n");
	printf("****** Minesweeper ******\n");
	printf("******    1.PLAY   ******\n");
	printf("******    2.EXIT   ******\n");
	printf("*************************\n");

}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS, '0');//初始化扫雷内部数组
	InitBoard(show, ROWS, COLS, '*');//初始化扫雷面板数组

	//PrintBoard(mine, ROW, COL);//打印扫雷内部数组
	PrintBoard(show, ROW, COL);//打印扫雷面板

	SetMine(mine, ROW, COL, COUNT);//置雷
	//PrintBoard(mine, ROW, COL);

	FineMine(mine, show,  ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}