#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


/*
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void exch(char* left, char*right, size_t width)
{
	size_t i = 0;
	//按每个字节的内容进行交换
	for (i = 0; i < width; i++)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right++;
	}
}
void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)//比较的趟数
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)//每一趟比较的次数
		{
			//如果前一个数比后一个数大
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
				//交换两个数
				exch((char*)base + j * width, (char*)base + (j + 1)*width, width);
		}
	}
}

void print_arr(int* arr, size_t sz)
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 2,5,4,9,7,1,0,3,6,8 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);//数组长度
	print_arr(arr, sz);//打印数组
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);//冒泡排序
	print_arr(arr, sz);//打印数组
	return 0;
}
*/


#include"fun.h"
void fun0()
{
	char arr[] = { 'd','a','f','c' };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	print_arr_char(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_char);
	print_arr_char(arr, sz);
}
void fun1()
{
	int arr[] = { 67,23,98,65,10 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr,sz);
}

void fun2()
{
	double arr[] = { 43.56,87.09,32.4536,8.67 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	print_arr_double(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_double);
	print_arr_double(arr, sz);
}



void fun3()
{
	struct Stu arr[] = { {"zhangsan",23},{"lisi",15},{"wangwu",40} };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	print_str(arr, sz);
	qsort(arr,sz,sizeof(arr[0]),cmp_str_age);
	print_str(arr, sz);
}

void fun4()
{
	struct Stu arr[] = { {"zhangsan",23},{"lisi",15},{"wangwu",40} };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	print_str(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_str_name);
	print_str(arr, sz);
}
int main()
{
	fun0();//对字符类型数组排序
	printf("\n");
	fun1();//对整型数组进行排序
	printf("\n");
	fun2();//对浮点型数组进行排序
	printf("\n");
	fun3();//对结构体按年龄排序
	printf("\n");
	fun4();//对结构体按姓名排序
	return 0;
}

