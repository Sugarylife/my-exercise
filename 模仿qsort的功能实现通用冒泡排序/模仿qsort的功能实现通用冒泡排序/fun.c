#define _CRT_SECURE_NO_WARNINGS 1
#include"fun.h"

//整型比较
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//浮点型比较
int cmp_double(const void* e1, const void* e2)
{
	return (*(double*)e1 > *(double*)e2) ? 1 : -1;
}

//字符型比较
int cmp_char(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}

//结构体按整型比较
int cmp_str_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

//结构体按字符串比较
int cmp_str_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//打印整型数组
void print_arr(int* arr, size_t sz)
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//打印浮点型数组
void print_arr_double(double* arr, size_t sz)
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");
}

//打印字符数组
void print_arr_char(char* arr, size_t sz)
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
}

//打印结构体数组
void print_str(struct Stu* p, size_t sz)
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ",(p+i)->name);
		printf("%d ",(p+i)->age);
	}
	printf("\n");
}