#pragma once
#include<stdio.h>
#include<string.h>
struct Stu
{
	char name[10];
	size_t age;
};


int cmp_int(const void* e1, const void* e2);//���ͱȽ�
int cmp_double(const void* e1, const void* e2);//�����ͱȽ�
int cmp_char(const void* e1, const void* e2);//�ַ��ͱȽ�
int cmp_str_age(const void* e1, const void* e2);//�ṹ�尴���ͱȽ�
int cmp_str_name(const void* e1, const void* e2);//�ṹ�尴�ַ����Ƚ�
void print_arr(int* arr, size_t sz);//��ӡ����
void print_arr_double(double* arr, size_t sz);//��ӡ������
void print_arr_char(char* arr, size_t sz);//��ӡ�ַ�����
void print_str(struct Stu* p, size_t sz);//��ӡ�ṹ��