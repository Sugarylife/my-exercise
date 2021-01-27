#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	p = 100;
//	printf("%p\n",p);
//	return 0;
//
//}

//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//	*p = 0;
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = &a;
//	if (*p == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}

//指针类型的作用时决定了指针访问的权限，也就是访问几个字节

//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	char* pc = arr;
//	printf("%p\n",arr);
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);  //指针类型决定了指针+1走多大的距离
//	printf("-----------\n");
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//p指向的内容已经被释放，这时p是一个野指针
//	printf("hehe\n");
//	printf("%d ",*p);  
//	return 0;
//}

//int main()
//{
//	int* p;//没有任何初始化-随机值-野指针
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 11; i++)//越界访问-野指针
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p = &a;
//	int* p = NULL;//用完了及时释放
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//NULL指向的空间是不能访问的
//	if (p != NULL)//指针使用之前检查有效性
//	{
//		*p = 20;
//	}
//	return 0;
//}

//int my_strlen(char* arr)   //求字符串长度
//{
//	char* start = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//	return arr - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d ",len);
//	return 0;
//}

//int my_strlen(char* arr)//求字符串长度
//{
//	int count = 0;
//	while ((*arr) != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d ",len);
//	return 0;
//}

//标准规定： 允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个那个内存位置的指针比较
//尽量向后越界，不要向前越界

//int main()
//{
//	char* p = "abcdef";
//	char* arr[] = { "abcdef","hello","bit" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s ",arr[i]);
//	}
//	return 0;
//}


////描述一个学生
//struct Point 
//{
//	int a;
//	int b;
//};
//struct Stu
//{
//	char name[10];
//	int age;
//	char tele[12];
//	char sex[5];
//	struct Point p;
//};
//int main()
//{
//	struct Stu s1 = { "陈国安",23,"18955664480","男" ,{2,3} };
//	printf("%s\n",s1.name);
//	printf("%d\n", s1.age); 
//	printf("%s\n", s1.tele);
//	printf("%s\n", s1.sex);
//	printf("%d %d\n", s1.p.a, s1.p.b);
//	struct Stu* p = &s1;
//	printf("%s\n",p->name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->tele);
//	printf("%s\n", p->sex);
//	printf("%d %d\n",p->p.a,p->p.b);
//	return 0;
//}