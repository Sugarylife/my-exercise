#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


int my_strlen_1(char* src);//�����������ַ�������
int my_strlen_2(char* src);//�ݹ鷨���ַ�������
int my_strlen_3(char* src);//ָ����������ַ�������

char* my_strcpy(char* dest, const char* src);//�ַ�������
char* my_strcat(char* dest, const char* src);//�ַ���׷��
int my_strcmp(char* dest, char* src);//�ַ����Ƚ�

char* my_strstr(char* string, char* part);//Ѱ���Ӵ�
void my_memmove(void* dest, void* src, size_t size);//�ڴ��ƶ�