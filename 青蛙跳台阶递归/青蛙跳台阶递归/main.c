#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////������һ��ֻ����1��2��ʱ
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
//	int n;//һ����n��̨��
//	scanf("%d", &n);//����̨����
//	int ways = frog(n);//�����������
//	printf("%d\n", ways);
//	return 0;
//}

//������һ�ο�����1��2��3��ʱ
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
	int n;//̨����
	scanf("%d", &n);
	int ways = frog(n);//������
	printf("%d\n", ways);
	return 0;
}


