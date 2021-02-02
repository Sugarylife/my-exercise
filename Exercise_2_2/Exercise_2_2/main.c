#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印
//要求：不能使用C函数库中的字符串操作函数

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char * string)
//{
//	int len = my_strlen(string);
//	char* left = string;
//	char* right = string + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "I am a student";
//	printf("%s\n",arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////递归实现
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char * string)
//{
//	int len = my_strlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (len > 2)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "I am a student";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



////全局变量在初始化时置0
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))//i被强制转换成无符号数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//写一个函数返回参数二进制中 1 的个数
//比如： 15    0000 1111    4 个 1
//int OneBitNum(int n)
//{
//	int i = 0;
//	int count = 0;
//	while (i < 32)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//		i++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	int ret = OneBitNum(num);
//	printf("%d\n",ret);
//	return 0;
//}

//int OneBitNum(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);    // 1111  n
//		count++;            // 1110  n-1
// 	}                       // 1110  n         count=1
//	return count;           // 1101  n-1
//}                           // 1100  n         count=2
//                            // 1011  n-1
//int main()                  // 1000  n         count=3
//{                           // 0111  n-1
//	int num = 0;            // 0000  n         count=4
//	scanf("%d",&num);
//	int ret = OneBitNum(num);
//	printf("%d\n",ret);
//	return 0;
//}


//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//int DifferentBit(int a, int b)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d",&a,&b);
//	int ret = DifferentBit(a, b);
//	printf("%d\n",ret);
//	return 0;
//}

//int DifferentBit(int a, int b)
//{
//	int count = 0;
//	int tmp = a ^ b;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d",&a,&b);
//	int ret = DifferentBit(a, b);
//	printf("%d\n",ret);
//	return 0;
//}


////写一个代码，判断n是否为2的m次方
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	if ( (n&(n - 1)) == 0)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int i = 0;
	int k = 0;
	scanf("%d %d",&a,&n);
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d\n", sum);
	return 0;
}


