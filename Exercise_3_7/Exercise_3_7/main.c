#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>


/*
//�ṹ���ڴ����
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
	printf("%d\n",offsetof(struct S1,c1));//ƫ����Ϊ0
	printf("%d\n", offsetof(struct S1, i));//ƫ����Ϊ4
	printf("%d\n", offsetof(struct S1, c2));//ƫ����Ϊ8
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
	struct S3 s3;//��������8
	double d;
};

int main()
{
	struct S4 s4;
	printf("%d\n",sizeof(s4));//32
	return 0;
}
*/

//�ṹ�崫�δ����ǽṹ��ĵ�ַ



struct A
{
	int a : 2;//ֻ��Ҫ2������λ
	int b : 5;//ֻ��Ҫ5������λ
	int c : 10;//ֻ��Ҫ10������λ
	int d : 30;//ֻ��Ҫ30������λ
};
int main()
{
	printf("%d\n",sizeof(struct A));
	return 0;
}



