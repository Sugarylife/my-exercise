#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//struct Stu
//{
//	char name[8];
//	int age;
//};
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	struct Stu arr[n];
//	return 0;
//}  变长数组  C99支持
// gcc 编译器可以编译 : gcc test.c -std=c99


//动态内存函数 1.malloc  2.free  3.calloc  4.realloc

//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int *)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//当动态申请的空间按不再使用的时候，就应该还给操作系统
//	free(p);//虽然p指向的内容被释放，但是p依然有能力找到这块空间
//	p = NULL;//让p找不到这块空间
//}


int main()
{
	//malloc(10*sizeof(int));
	int* p=(int*)calloc(10, sizeof(int));//与malloc不同： 1.函数参数形式不同  2.calloc初始化为0
	if (p == NULL)
	{
		printf("%s\n",strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ",*(p+i));
		}
		printf("\n");
	}
	//realloc 重新分配
	//realloc使用的注意事项：
	//1.如果p指向的空间之后有足够的空间可以追加，则直接追加后返回p
	//2.如果p指向的空间之后没有足够的空间可以追加，则realloc函数会重新找一个新的内存区域
	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回
	//新开辟的内存空间地址
	//3.得用一个新的变量来接受realloc函数的返回值

	
	int* ptr = realloc(p, 15 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;

		int i = 0;
		for (i = 0; i < 15; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;

	return 0;
}

