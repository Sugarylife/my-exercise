#pragma once
#include"test.h"
int my_strlen_1(char* src)//�����������ַ�������
{
	int count = 0;
	while (*src++)
	{
		count++;
	}
	return count;
}

int my_strlen_2(char* src)//�ݹ鷨���ַ�������
{
	if (!(*src))
		return 0;
	else
		return 1 + my_strlen_2(src + 1);
}

int my_strlen_3(char* src)//ָ����������ַ�������
{
	char* cp = src;
	while ((*cp)!='\0')
	{
		cp++;
	}
	return cp-src;
}

char* my_strcpy(char* dest, const char* src)//�ַ�������
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while ((*dest++) = (*src++))
	{
		;
	}
	return ret;
}

char* my_strcat(char* dest, const char* src)//�ַ���׷��
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while ((*dest++) = (*src++))
	{
		;
	}
	return ret;
}

int my_strcmp(const char* dest,const char* src)//�ַ����Ƚ�
{
	assert(dest);
	assert(src);

	while (((*dest) == (*src))&&(*dest)&&(*src))
	{
		dest++;
		src++;
	}
	return (*dest) - (*src);
}

char* my_strstr(const char* string,const char* part)//Ѱ���Ӵ�
{
	assert(string&&part);
	const char* cp = string;

	if (*part == '\0')
	{
		return (char*)string;
	}
	while (*cp)
	{
		char* p1 = cp;
		char* p2 = part;
		while (*p1 == *p2 && (*p1) && (&p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return cp;
		cp++;
	}
	return NULL;
}

void my_memmove(void* dest, void* src, size_t size)
{
	assert(dest&&src);
	char* p1 = (char*)dest;
	char* p2 = (char*)src;
	if (p1 < p2)
	{
		for (int i = 0; i < size; i++)
		{
			*(p1 + i) = *(p2 + i);
		}
	}
	else
	{
		for (int j = 0; j < size; j++)
		{
			*(p2 + j) = *(p1 + j);
		}
	}
}