#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double MAX(double x, double y)
{
	return (x > y ? x : y);
}
int main()
{
	double a, b, ret;
	printf("������Ҫ�Ƚϵ���������>");
	scanf("%lf %lf",&a,&b);
	ret = MAX(a, b);
	printf("�ϴ������%lf\n",ret);
	return 0;
}