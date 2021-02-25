#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*

// 计算器
void menu()
{
	printf("******************\n");
	printf("** 1.Add   2.Sub**\n");
	printf("** 3.Mul   4.Div**\n");
	printf("** 0.Exit  *******\n");
	printf("******************\n");
}

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
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("请输入操作：\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("请输入两个操作数：");
			scanf("%d%d",&x,&y);
			ret = Add(x, y);
			printf("ret = %d\n",ret);
			break;
		case 2:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			ret = Sub(x, y);
			printf("ret = %d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			ret = Mul(x, y);
			printf("ret = %d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			ret = Div(x, y);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;

		}
	} while(input);
	return 0;
}


*/




/*

// 计算器优化
void menu()
{
	printf("******************\n");
	printf("** 1.Add   2.Sub**\n");
	printf("** 3.Mul   4.Div**\n");
	printf("** 0.Exit  *******\n");
	printf("******************\n");
}

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

int clc(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数：");
	scanf("%d%d",&x,&y);
	ret = p(x, y);
	printf("ret = %d\n",ret);
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("请输入操作：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			clc(Add);
			break;
		case 2:
			clc(Sub);
			break;
		case 3:
			clc(Mul);
			break;
		case 4:
			clc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;

		}
	} while (input);
	return 0;
}


*/



/*

//  再优化
void menu()
{
	printf("******************\n");
	printf("** 1.Add   2.Sub**\n");
	printf("** 3.Mul   4.Div**\n");
	printf("** 0.Exit  *******\n");
	printf("******************\n");
}

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
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		int(*pArr[])(int, int) = { 0,Add,Sub,Mul,Div };
		printf("请选择操作：");
		scanf("%d",&input);
		if (0 == input)
		{
			break;
		}
		else if (input > 0 && input <= 4)
		{
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			ret = pArr[input](x, y);
			printf("ret = %d\n",ret);
		}
		else
		{
			printf("输入错误，重新输入\n");
		}
		
	} while(input);
	return 0;
}


*/




/*

// 回调函数

void test1()
{
	printf("Ni Hao!\n");
}
void test2(void(*p)())
{
	p();
}
int main()
{
	test2(test1);
	return 0;
}

*/




/*

// 冒泡排序
int main()
{
	int arr[] = { 2,5,7,3,4,9,8,0,1,6 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}


*/




/*

// 快速排序 qsort  使用qsort排序整型数组
int cmp_int(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//void qsort(void* base, size_t sz, size_t width, int(*cmp)(void* e1, void* e2));

void print_arr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[]= { 2,5,7,3,4,9,8,0,1,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
	return 0;
}

*/



/*

//使用qsort排序结构体
#include<string.h>
struct Stu
{
	char name[10];
	int age;
};

int cmp_struct_age(void* e1, void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_struct_name(void* e1, void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void print_struct(struct Stu* pArr, size_t sz)
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ",(pArr+i)->name);
		printf("%d \n",(pArr+i)->age);
	}
	printf("\n");
}
int main()
{
	struct Stu Arr[] = { {"chenguoan",23},{"yuhui",23},{"our baby",0} };
	size_t sz = sizeof(Arr) / sizeof(Arr[0]);
	print_struct(Arr, sz);
	//qsort(Arr, sz, sizeof(Arr[0]), cmp_struct_age);
	qsort(Arr, sz, sizeof(Arr[0]), cmp_struct_name);
	print_struct(Arr,sz);
	return 0;
}

*/


#include<stdlib.h>

//可以排序任意元素的冒泡排序


int cmp_elem(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void exchange(char* buf1, char* buf2, size_t width)
{
	size_t i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


void bubble_sort(void* base, size_t sz, size_t width, int(*pcmp_elem)(const void* e1, const void* e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (pcmp_elem((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				exchange((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}

void print_arr(int* arr, size_t sz)
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
	int arr[]= { 2,5,7,3,4,9,8,0,1,6 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_elem);
	print_arr(arr, sz);
	return 0;
}





//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void _swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void*e1, const void*e2))
//{
//	size_t i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//相邻2个元素的比较
//			//base[j] base[j+1] 
//			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
//			{
//				//如果不满足顺序就交换
//				_swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//qsort 排序整形数组
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//}
//
