#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//
//	//可以使用realloc函数开辟空间
//	int* p = realloc(NULL, 40);//等价于malloc(40)
//	return 0;
//}




//常见的动态内存错误

int main()
{
	////1.对空指针NULL的解引用操作
	//int* p = (int*)malloc(40);//要对p进行相关的判断
	//*p = 10;//如果malloc开辟失败，就会对NULL指针解引用


	////2.对动态内存开辟内存的越界访问
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i <= 10; i++)//越界
	//{
	//	*(p + i) = i;
	//	printf("%d ",*(p+i));
	//}
	//free(p);
	//p = NULL;


	////3.对非动态开辟内存使用free释放
	//int a = 10;
	//int* p = &a;
	//*p = 20;
	//free(p);//a在栈区，不在动态内存
	//p = NULL;


	////4.使用free时只释放动态开辟内存的一部分
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;//循环结束后，p指向第11块空间，p已经发生变化
	//}
	////回收空间
	//free(p);//释放的已经不是原来的p指向的空间
	//p = NULL;


	////5.对同一块动态内存多次释放
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}

	//free(p);
	//p = NULL;//非常有必要的一步，避免同一个指针被多次释放
	////...
	//free(p);


	//6.对动态开辟的空间忘记释放（内存泄漏）
	while (1)
	{
		malloc(1);
		Sleep(1000);
	}
	//free(p);
	
	return 0;
}