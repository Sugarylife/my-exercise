#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>


/*
//结构体内存对齐
//offsetof
struct S1
{
	char c1;
	int i;
	char c2;
};
int main()
{
	struct S1 s1;
	printf("%d\n",sizeof(s1));
	printf("%d\n",offsetof(struct S1,c1));//偏移量为0
	printf("%d\n", offsetof(struct S1, i));//偏移量为4
	printf("%d\n", offsetof(struct S1, c2));//偏移量为8
	return 0;
}
*/


/*
struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;//最大对齐数8
	double d;
};

int main()
{
	struct S4 s4;
	printf("%d\n",sizeof(s4));//32
	return 0;
}
*/

//结构体传参传的是结构体的地址



struct A
{
	int a : 2;//只需要2个比特位
	int b : 5;//只需要5个比特位
	int c : 10;//只需要10个比特位
	int d : 30;//只需要30个比特位
};
int main()
{
	printf("%d\n",sizeof(struct A));
	return 0;
}



