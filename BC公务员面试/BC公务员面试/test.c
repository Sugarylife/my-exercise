#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	double avg = 0;
	int score[7] = { 0 };
	int sz = sizeof(score) / sizeof(score[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 1; i < sz; i++)
	{
		if (score[0] < score[i])
		{
			int tmp;
			tmp = score[0];
			score[0] = score[i];
			score[i] = tmp;
		}
	}
	score[0] = 0;
	for (i = 2; i < sz; i++)
	{
		if (score[1] > score[i])
		{
			int tmp;
			tmp = score[1];
			score[1] = score[i];
			score[i] = tmp;
		}
	}
	score[1] = 0;
	for (i = 2; i < sz; i++)
	{
		avg += score[i];
	}
	avg /= sz - 2;
	printf("%.2lf", avg);


	return 0;
}
