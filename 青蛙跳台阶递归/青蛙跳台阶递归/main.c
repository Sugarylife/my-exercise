#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////当青蛙一次只能跳1或2步时
//int frog(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//	return frog(n - 1) + frog(n - 2);
//}
//int main()
//{
//	int n;//一共有n层台阶
//	scanf("%d", &n);//输入台阶数
//	int ways = frog(n);//计算出方法数
//	printf("%d\n", ways);
//	return 0;
//}

//当青蛙一次可以跳1、2、3步时
#include<stdio.h>
int frog(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 2;
	}
	if (n == 3)
	{
		return 4;
	}
	return frog(n - 1) + frog(n - 2) + frog(n - 3);
}
int main()
{
	int n;//台阶数
	scanf("%d", &n);
	int ways = frog(n);//方法数
	printf("%d\n", ways);
	return 0;
}


