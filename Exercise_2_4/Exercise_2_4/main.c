#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//����ָ����һά�����Ӧ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;  // *p --> arr����Ԫ�ص�ַ��
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//		printf("%d ", *((*p) + i));
//		printf("%d ", p[0][i]);
//		printf("%d ", *(*(p + 0) + i));
//	}
//	return 0;
//}



//����ָ���ڶ�ά�����Ӧ��
//void print1(int arr[3][3], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[3], int row, int col)//��ά���鴫�δ���Ԫ�ص�ַ������һ�еĵ�ַ��������ָ�����
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	print1(arr, 3, 3);
//	print2(arr, 3, 3);
//	return 0;
//}


//strcat��ģ��ʵ��
#include<assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[20] = "chenguan!";
//	printf("%s\n",my_strcat(arr1,arr2));
//	return 0;
//}

//strcat����׷���Լ�


////strstr��ģ��ʵ��
//char* my_strstr(const char* s1, const char*s2)
//{
//	assert(s1&&s2);
//	const char* cp = s1;
//	const char* p1 = s1;
//	const char* p2 = s2;
//	while (*cp)
//	{
//		p1 = cp;
//		p2 = s2;
//		while ((*p1) && (*p2) && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbbcde";
//	char arr2[] = "bbc";
//	if (my_strstr != NULL)
//	{
//		printf("%s\n", my_strstr(arr1, arr2));
//	}
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}


////strcmp��ģ��ʵ��
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	printf("%d ",my_strcmp("abcd","abcde"));
//	return 0;
//}


////strcpy��ģ��ʵ��
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "";
//	char arr2[] = "hello chenguoan!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//ģ��ʵ��strlen
int my_strlen(const char* str)
{
	assert(str != NULL);
	char* sta = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - sta;
}
int main()
{
	printf("%d ",my_strlen("hello chenguoan!"));
}