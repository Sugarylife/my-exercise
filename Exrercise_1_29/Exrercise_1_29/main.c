#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	//strlen 返回类型为无符号整型，相减的结果也被强制转换为无符号整型
//	if (strlen("abc") - strlen("abcdef>") > 0)
//	{
//		printf("大于\n");
//	}
//	else
//	{
//		printf("小于\n");
//	}
//	return 0;
//}



////字符串逆序
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse_str(char* str)
//{
//	int len = my_strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right)
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
//	reverse_str(arr);
//	printf("%s\n",arr);
//}


//size_t DigitSum(size_t n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//		return n;
//}
//int main()
//{
//	size_t num = 0;
//	scanf("%u",&num);
//	size_t sum = DigitSum(num);
//	printf("%u\n",sum);
//}


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
//}

//Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int* arr, int sz)
//{
//	int i = 0;
//	while (i < (sz - i - 1))
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = tmp;
//		i++;
//	}
//}
//void Init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	Init(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int ncount(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	int n = ncount(num);
//	printf("%d\n",n);
//	return 0;
//}


//int diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d",&m,&n);
//	int ret = diff_bit(m,n);
//	printf("%d\n",ret);
//	return 0;
//}