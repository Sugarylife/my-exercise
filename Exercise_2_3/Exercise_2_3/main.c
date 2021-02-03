#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//求出0～100000之间的所有“水仙花数”并输出
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		int sum = 0;
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	char a = -128;   // 10000000 00000000 00000000 10000000-> 11111111 11111111 11111111 01111111-> 11111111 11111111 11111111 10000000-> 10000000  ->11111111 11111111 11111111 10000000
//	printf("%u\n",a);//4294967168
//	return 0;
//}


//int main()
//{
//	char a = 128; // 00000000 00000000 00000000 10000000-> 10000000-> 11111111 11111111 11111111 10000000
//	printf("%u\n",a);//4294967168
//	return 0;
//}

//int main()
//{
//	int i = -20;  //      10000000 00000000 00000000 00010100
//	unsigned int j = 10;//11111111 11111111 11111111 11101011  -20反码
//	printf("%d\n",i+j); //11111111 11111111 11111111 11101100  -20补码
//}                       //00000000 00000000 00000000 00001010
//                        //11111111 11111111 11111111 11110110   (-1 再取反)
//                        //11111111 11111111 11111111 11110101
//                        //10000000 00000000 00000000 00001010  -10

//int main()
//{//死循环
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}



//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n",strlen(a));
//	return 0;
//}


#include <stdlib.h>
//int main()
//{
//	int s = 1, h;                    // 数值和高度
//	int i, j;                        // 循环计数
//	scanf("%d", &h);                 // 输入层数
//	printf("1\n");                   // 输出第一个 1
//	for (i = 2; i <= h; s = 1, i++)  // 行数 i 从 2 到层高
//	{
//		printf("1 ");                // 第一个 1
//		for (j = 1; j <= i - 2; j++) // 列位置 j 绕过第一个直接开始循环
//		{
//			printf("%d ", (s = (i - j) * s / j));
//		}
//		printf("1\n");               // 最后一个 1，换行
//	}
//	getchar();                       // 暂停等待
//	return 0;
//}



//int main()
//{
//	char str1[] = "hello chenguoan";//数组存储是两个不同的空间，所以地址不同
//	char str2[] = "hello chenguoan";
//	char* str3 = "hello chenguoan";//字符串常量只有一个，指向同一个地址
//	char* str4 = "hello chenguoan";
//	if (str1 == str2)
//	{
//		printf("same\n");
//	}
//	else
//	{
//		printf("not same\n");//not same
//	}
//	if (str3 == str4)
//	{
//		printf("same\n");//same
//	}
//	else
//	{
//		printf("not same\n");
//	}
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef"; //要加const修饰
//	return 0;
//}


//int main()
//{
//	char ch[5];
//	char(*p3)[5] = &ch;//数组指针，指向数组的指针
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

int main()//通过数组指针来访问数组每个元素
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ",(*p)[i]);
	}
	return 0;
}