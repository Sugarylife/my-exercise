#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*(str) != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	char* left = str;
//	char* right = str + my_strlen(str) - 1;
//	while (left <= right)
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
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}


////递归实现
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*(str) != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + my_strlen(str) - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//size_t Digitsum(size_t n)
//{
//	if (n > 9)
//	{
//		return n % 10 + Digitsum(n / 10);
//	}
//	else
//		return n;
//}
//int main()
//{
//	size_t num = 0;
//	scanf("%u",&num);
//	size_t ret = Digitsum(num);
//	printf("%u\n",ret);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现

//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d",&n,&k);
//	double ret = Pow(n, k);
//	printf("%lf\n",ret);
//	return 0;
//}


