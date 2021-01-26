#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////求两个数二进制中不同位的个数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int a = 0;//a的二进制有几个1则m和n就有几个二进制位不同
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

////打印整数二进制的奇数位和偶数位
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int i = 0;
//	printf("二进制偶数位： ");
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
//	printf("二进制奇数位：  ");
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
	printf("%d个1\n",ret);
	return 0;
}