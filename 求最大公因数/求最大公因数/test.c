#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a, b, i;
//	printf("请输入两个数:>");
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		i = (a < b) ? a : b;
//		for (; i >= 1; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				printf("最大公因数是%d\n", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//辗转相除法
int main()
{
	int a, b, c, d;
	printf("请输入两个数:>");
	scanf("%d %d",&a,&b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
//最小公倍数=a*b/最大公因数
	printf("最大公因数是%d\n",b);
	return 0;
}