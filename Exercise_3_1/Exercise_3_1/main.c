#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

/*

//strcpy的模拟实现

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest&&src);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "**************";
	char arr2[] = "hello hefei";
	printf("%s\n",arr1);
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

*/


/*

//strlen实现的三种方法：1.计数器法 2.递归法 3.指针减指针法
size_t my_strlen1(const char* src)
{
	assert(src != NULL);
	size_t count = 0;
	while (*src++)
	{
		count++;
	}
	return count;
}

size_t my_strlen2(const char* src)
{
	assert(src != NULL);
	if (*src)
	{
		return 1 + my_strlen2(++src);
	}
	else
		return 0;
}

size_t my_strlen3(const char* src)
{
	assert(src != NULL);
	char* sta = src;
	while (*src)
	{
		src++;
	}
	return src - sta;
}
int main()
{
	char arr[] = "hello hefei";
	printf("字符串长度为%u\n",my_strlen1(arr));
	printf("字符串长度为%u\n", my_strlen2(arr));
	printf("字符串长度为%u\n", my_strlen3(arr));
	return 0;
}

*/



/*
//模拟实现strstr

char* my_strstr(const char* s1, const char* s2)
{
	assert(s1&&s2);
	const char* cp = s1;
	if(*s2=='\0')
	{
	    return (char*)s1;
	}
	while (*cp)
	{
		const char* p1 = cp;
		const char* p2 = s2;
		while ((*p1) && (*p2) && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cd";
	char* ret = my_strstr(arr1, arr2);
	if (ret != NULL)
	{
		printf("%s\n",ret);
	}
	else
	{
		printf("找不到子串\n");
	}
	return 0;
}

*/


/*
//strtok
int main()
{
	char arr[] = "953882438@qq.com/vip";
	char* p = "@./";
	char* ret= NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n",ret);
	}
	return 0;
}

*/


/*
//模拟实现memcoy
void* my_memcpy(char* dest, const char* src,size_t count)
{
	assert(dest&&src);
	void* ret = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr1, 16);
	size_t sz = sizeof(arr2) / sizeof(arr2[0]);
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	return 0;
}
*/


//模拟实现memmove
void* my_memmove(char* dest, const char* src, size_t count)
{
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
}

void printArr(int* arr,size_t sz)
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
	int arr[] = { 1,2,3,4,5,6,7,8 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	printArr(arr,sz);
	my_memmove(arr + 2, arr, 16);
	printArr(arr,sz);
	return 0;
}