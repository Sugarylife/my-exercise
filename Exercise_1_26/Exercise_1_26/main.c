#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////���������������в�ͬλ�ĸ���
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int a = 0;//a�Ķ������м���1��m��n���м���������λ��ͬ
//	a = m ^ n;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}

////��ӡ���������Ƶ�����λ��ż��λ
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int i = 0;
//	printf("������ż��λ�� ");
//	for (i = 0; i < 32; i+=2)
//	{
//		if ((a >> i) & 1 == 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//	}
//	printf("\n");
//	printf("����������λ��  ");
//	for (i = 1; i < 32; i += 2)
//	{
//		if ((a >> i) & 1 == 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//	}
//	return 0;
//}

int OneNumber(int a)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((a >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = OneNumber(a);
	printf("%d��1\n",ret);
	return 0;
}