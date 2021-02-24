#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
int main()
{
	//一维数组的数组指针
	int arr[10] = {0};
	int* p = arr;
	int(*p)[10] = &arr;

	//二维数组的数组指针
	int arr2[3][4] = { 0 };
	int(*p)[4] = arr2; //首元素的地址即第一行的地址，第一行是一个一维数组
	int(*p)[3][4] = &arr2;
	return 0;
}

*/


/*

//函数指针
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int ret = Add(1, 1);
	printf("%p\n",&Add);
	printf("%p\n",Add);//同上
	printf("%d\n",ret);
	//函数指针如何定义？
	int(*pf) (int, int) = &Add;
	printf("%p\n",pf);
	//利用指针调用函数
	ret = pf(2, 3);//*可以省略
	printf("%d\n",ret);
}

*/

#include<assert.h>

/*

int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);

	int(*pf)(char*) = my_strlen;
	printf("%d\n",pf("Hello China!"));
    return 0;
}

*/



/*

typedef void(*pfun)(int);
//typedef void(*)(int) pfun  是错误的写法
int main()
{
	(          *(       void(*)()       )       0       )       ();
	// 解引用得到函数      函数指针           强制类型转换         函数调用
	//实际上是把 0 进行强制类型转换成一个地址，即函数的地址，然后解引用得到函数，在进行调用

	void   (*      signal(int, void(*)(int)  )    )  (int);
    //             signal函数名和参数类型
	//除去signal函数的函数名和参数类型就是函数的返回类型
	// void (*)(int) 就是函数的返回类型
	//这是一个函数声明，声明了signal函数
	pfun signal(int, pfun);
}

*/


//函数指针的数组
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int a = 10;
	int b = 20;
	int(*   pfArr[4])(int, int)  = { &Add, &Sub, &Mul, &Div };
	//注： 当除去数组名与数组大小，剩下的就是数组的类型，即 int(*)(int,int),函数指针类型
	return 0;
}