#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


/*
int main()
{
	int a[3][4] = { 0 };

	printf("%d\n",sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16  a[0]是二维数组第一行的数组名
	printf("%d\n", sizeof(a[0]+1));//4  a[0]没有单独放到sizeof内部，所以a[0]代表第一行首元素的地址
	printf("%d\n", sizeof(*(a[0]+1)));//4
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(*(a+1)));//16
	printf("%d\n", sizeof(&a[0]+1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16  明确了类型就可以确定大小，不考虑越界
	return 0;
}
*/

/*
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d %d",*(a+1),*(ptr-1));//2 5
	return 0;
}
*/

/*
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p的值为0x100000
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n",p+0x1);//0x00100014
	printf("%p\n",(unsigned long)p+0x1);//0x00100001
	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
	return 0;
}
*/


/*
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x",ptr1[-1],*ptr2);//4 2000000
}
*/


/*
int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };// 1  3
	int* p;                             // 5  0
	p = a[0];                           // 0  0
	printf("%d",p[0]);//1
	return 0;
}
*/

/*
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;//第一行地址
	printf("%p,%d\n",&p[4][2]-&a[4][2], &p[4][2] - &a[4][2]);
	//ffff fffc  -4
	return 0;
}
*/


/*
int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d %d",*(ptr1-1),*(ptr2-1));//10 5
	return 0;
}
*/


/*
int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n",*pa);//at
	return 0;
}
*/


int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n",**++cpp);//POINT
	printf("%s\n",*--*++cpp+3);//ER
	printf("%s\n",*cpp[-2]+3);//ST
	printf("%s\n",cpp[-1][-1]+1);//EW
	return 0;
}
