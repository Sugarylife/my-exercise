#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//���0��100000֮������С�ˮ�ɻ����������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�����
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
//	unsigned int j = 10;//11111111 11111111 11111111 11101011  -20����
//	printf("%d\n",i+j); //11111111 11111111 11111111 11101100  -20����
//}                       //00000000 00000000 00000000 00001010
//                        //11111111 11111111 11111111 11110110   (-1 ��ȡ��)
//                        //11111111 11111111 11111111 11110101
//                        //10000000 00000000 00000000 00001010  -10

//int main()
//{//��ѭ��
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
//	int s = 1, h;                    // ��ֵ�͸߶�
//	int i, j;                        // ѭ������
//	scanf("%d", &h);                 // �������
//	printf("1\n");                   // �����һ�� 1
//	for (i = 2; i <= h; s = 1, i++)  // ���� i �� 2 �����
//	{
//		printf("1 ");                // ��һ�� 1
//		for (j = 1; j <= i - 2; j++) // ��λ�� j �ƹ���һ��ֱ�ӿ�ʼѭ��
//		{
//			printf("%d ", (s = (i - j) * s / j));
//		}
//		printf("1\n");               // ���һ�� 1������
//	}
//	getchar();                       // ��ͣ�ȴ�
//	return 0;
//}



//int main()
//{
//	char str1[] = "hello chenguoan";//����洢��������ͬ�Ŀռ䣬���Ե�ַ��ͬ
//	char str2[] = "hello chenguoan";
//	char* str3 = "hello chenguoan";//�ַ�������ֻ��һ����ָ��ͬһ����ַ
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
//	const char* p = "abcdef"; //Ҫ��const����
//	return 0;
//}


//int main()
//{
//	char ch[5];
//	char(*p3)[5] = &ch;//����ָ�룬ָ�������ָ��
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

int main()//ͨ������ָ������������ÿ��Ԫ��
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