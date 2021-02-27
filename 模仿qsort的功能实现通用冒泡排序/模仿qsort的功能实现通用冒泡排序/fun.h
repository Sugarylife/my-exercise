#pragma once
#include<stdio.h>
#include<string.h>
struct Stu
{
	char name[10];
	size_t age;
};


int cmp_int(const void* e1, const void* e2);//整型比较
int cmp_double(const void* e1, const void* e2);//浮点型比较
int cmp_char(const void* e1, const void* e2);//字符型比较
int cmp_str_age(const void* e1, const void* e2);//结构体按整型比较
int cmp_str_name(const void* e1, const void* e2);//结构体按字符串比较
void print_arr(int* arr, size_t sz);//打印整型
void print_arr_double(double* arr, size_t sz);//打印浮点型
void print_arr_char(char* arr, size_t sz);//打印字符数组
void print_str(struct Stu* p, size_t sz);//打印结构体