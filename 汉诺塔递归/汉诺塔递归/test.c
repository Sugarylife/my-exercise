#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int hanoi(char A, char B, char C, int n)
{
	if (n == 1)
	{
		return 1;
	}
	return hanoi(A, C, B, n - 1) + hanoi(B, A, C, n - 1)+1;
	
}
int main()
{
	int n;
	scanf("%d", &n);
	int sum = hanoi('A', 'B', 'C', n);
	printf("%d\n",sum);
	return 0;
}