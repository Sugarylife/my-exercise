#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


int my_strlen_1(char* src);//计数器法求字符串长度
int my_strlen_2(char* src);//递归法求字符串长度
int my_strlen_3(char* src);//指针相减法求字符串长度

char* my_strcpy(char* dest, const char* src);//字符串拷贝
char* my_strcat(char* dest, const char* src);//字符串追加
int my_strcmp(char* dest, char* src);//字符串比较

char* my_strstr(char* string, char* part);//寻找子串
void my_memmove(void* dest, void* src, size_t size);//内存移动