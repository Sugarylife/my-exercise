#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


/*
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void swap(char* left, char* right, size_t width)
{
	size_t i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width)>0)
			{
				swap((char*)base + j * width, (char*)base+(j + 1)*width, width);
			}
		}
	}
}

void print_arr(int* arr,size_t sz)
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
	int arr[] = {8,6,3,1,4,5,7,0,2,9};
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	print_arr(arr,sz);
	return 0;
}

*/

/*

int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n",sizeof(a));//16
	printf("%d\n", sizeof(a+0));//4
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4/8
	printf("%d\n", sizeof(*&a));//16
	printf("%d\n", sizeof(&a+1));//4/8
	printf("%d\n", sizeof(&a[0]));//4
	printf("%d\n", sizeof(&a[0]+1));//4
	return 0;
}

*/


/*

#include<string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n",sizeof(arr));//6
	printf("%d\n", sizeof(arr+0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr+1));//4/8
	printf("%d\n", sizeof(&arr[0]+1));//4/8

	printf("%d\n",strlen(arr));//随机
	printf("%d\n", strlen(arr+0));//随机
	//printf("%d\n", strlen(*arr));//error strlen函数参数是地址
	//printf("%d\n", strlen(arr[1]));//error 同上
	printf("%d\n", strlen(&arr));//随机
	printf("%d\n", strlen(&arr+1));//随机-6
	printf("%d\n", strlen(&arr[0]+1));//随机-1
	return 0;
}

*/


/*
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//error
	//printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}
*/


/*
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p+1));//4
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p+1));//4
	printf("%d\n", sizeof(&p[0]+1));//4

	printf("%d\n",strlen(p));//6
	printf("%d\n", strlen(p+1));//5
	//printf("%d\n", strlen(*p));//error
	//printf("%d\n", strlen(p[0]));//error
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p+1));//随机值
	printf("%d\n", strlen(&p[0]+1));//5
}
*/


