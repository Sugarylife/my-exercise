#include<stdio.h>
#include<string.h>

int int_cmp(void* p1, void*p2);//比较函数声明
void bubble_sort(void* base, size_t count, size_t size, int(*cmp)(void*, void*));//冒泡排序函数声明
