#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double MAX(double x, double y)
{
	return (x > y ? x : y);
}
int main()
{
	double a, b, ret;
	printf("请输入要比较的两个数：>");
	scanf("%lf %lf",&a,&b);
	ret = MAX(a, b);
	printf("较大的数是%lf\n",ret);
	return 0;
}