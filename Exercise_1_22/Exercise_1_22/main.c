#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("%d\n",printf("%d",printf("%d",43)));
//	printf("%d",4321);
//
//	return 0;
//}

//int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n",ret);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}


////�ݹ�
//#include<windows.h>
//int main()
//{
//	printf("hello!\n");
//	Sleep(1000);
//	main();
//	return 0;
//}
////stack overflow ջ���

//void Print(int num)
//{
//	if (num > 9)
//	{
//		Print(num / 10);
//	}
//	printf("%d ",num%10);
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	Print(num);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr[] = "abcdefgh";
//	printf("%d ",strlen(arr));
//	return 0;
//}



//�Զ���ʵ�����ַ�������
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int ret = my_strlen(arr);
//	printf("%d",ret);
//	return 0;
//}


//���n��쳲�������
//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}
//���õݹ���쳲���������ʱ�临�ӶȽϸߣ�����ѭ���ή��ʱ�临�Ӷ�

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) 
//	{                
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

//��n�Ľ׳�
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//}

//int Fac(int n)
//{
//	int mul = 1;
//	while (n >= 1)
//	{
//		mul *= n;
//		n--;
//	}
//	return mul;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int ret = Fac(n);
//	printf("%d\n",ret);
//	return 0;
//}

//void Print(num)
//{
//	if (num > 9)
//	{
//		Print(num / 10);
//	}
//	printf("%d ",num % 10);
//	
//}
//int  main()
//{
//	int num;
//	scanf("%d",&num);
//	Print(num);
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return n * Fac(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int ret = Fac(n);
//	printf("%d",ret);
//}

//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}


