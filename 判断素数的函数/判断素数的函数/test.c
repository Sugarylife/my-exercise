#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_prime(int x)
{
	int j;
	int flag = 1;
	for (j = 2; j <= sqrt(x); j++)
	{
		if (x%j == 0)
		{
			flag = 0;
			break;
		}

	}
	return flag;
}
int main()
{
	int i;
	for (i = 101; i < 200; i += 2)
	{
		if (1 == is_prime(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}