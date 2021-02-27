#define _CRT_SECURE_NO_WARNINGS 1
#include"fun.h"

//���ͱȽ�
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//�����ͱȽ�
int cmp_double(const void* e1, const void* e2)
{
	return (*(double*)e1 > *(double*)e2) ? 1 : -1;
}

//�ַ��ͱȽ�
int cmp_char(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}

//�ṹ�尴���ͱȽ�
int cmp_str_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

//�ṹ�尴�ַ����Ƚ�
int cmp_str_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//��ӡ��������
void print_arr(int* arr, size_t sz)
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//��ӡ����������
void print_arr_double(double* arr, size_t sz)
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");
}

//��ӡ�ַ�����
void print_arr_char(char* arr, size_t sz)
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
}

//��ӡ�ṹ������
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