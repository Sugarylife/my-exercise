#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a, b, i;
//	printf("������������:>");
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		i = (a < b) ? a : b;
//		for (; i >= 1; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				printf("���������%d\n", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//շת�����
int main()
{
	int a, b, c, d;
	printf("������������:>");
	scanf("%d %d",&a,&b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
//��С������=a*b/�������
	printf("���������%d\n",b);
	return 0;
}