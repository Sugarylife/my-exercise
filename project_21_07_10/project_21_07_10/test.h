#include<stdio.h>
#include<string.h>

int int_cmp(void* p1, void*p2);//�ȽϺ�������
void bubble_sort(void* base, size_t count, size_t size, int(*cmp)(void*, void*));//ð������������
