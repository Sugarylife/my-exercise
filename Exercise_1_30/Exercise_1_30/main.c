#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba

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


////�ݹ�ʵ��
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



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

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

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

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


