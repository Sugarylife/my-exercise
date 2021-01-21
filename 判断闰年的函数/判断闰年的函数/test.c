#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leap_year(i)
{
	return (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0));
}
int main()
{
	int i;
	for (i = 1000; i < 2000; i++)
	{
		if (1 == is_leap_year(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}