#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()  //把三个数按从大到小的顺序排列
//{
//	int arr[3] = {0};
//	printf("请输入三个数:>");
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			int tmp;
//			tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}   
//	}
//	if (arr[0] < arr[1])
//	{
//		int tmp;
//		tmp = arr[0];
//		arr[0] = arr[1];
//		arr[1] = tmp;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()    //求1-100的所有3的倍数
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//int main()   //最大公因数
//{
//	int a, b, min,i,factor;
//	printf("请输入两个数：>");
//	scanf("%d %d",&a,&b);
//	if (a < b)
//	{
//		min = a;
//	}
//	else
//	{
//		min = b;
//	}
//	for (i = 1; i <= min; i++)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			factor = i;
//		}
//	}
//	printf("最大公因数是%d\n",factor);
//	return 0;
//}

//int main() //打印1000-2000年的闰年
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}


//#include<math.h>  //求100-200的所有素数
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//int main()  // 1-100之间9的个数
//{
//	int i,count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			if (i % 10 == 9 && i / 10 == 9)
//			{
//				count = count + 2;
//			}
//			else
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);  // 9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 96 97 98 99
//	return 0;
//}


//#include<math.h>  //求1/1-1/2+1/3-1/4+1/5-...-1/100的值
//int main()
//{
//	int i;
//	double ret = 0;
//	for (i = 0; i < 100; i++)
//	{
//		ret += pow(-1,i)*1.0 / (i + 1);
//	}
//	printf("%lf\n",ret);
//	return 0;
//}

//int main()   //求10个整数的最大值
//{
//	int i = 0;
//	int arr[10] = {0};
//	printf("请输入10个整数：>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int j;
//	for (j = 1; j <= 9; j++)
//	{
//		if (arr[0] < arr[j])
//		{
//			int tmp;
//			tmp = arr[0];
//			arr[0] = arr[j];
//			arr[j] = tmp;
//		}
//	}
//	printf("%d\n",arr[0]);
//	return 0;
//}


//int main()  //九九乘法表
//{
//	int i;
//	for (i = 1; i <= 9;i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d×%2d = %2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二分查找
int main()
{
	int k,left,right,mid;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	printf("请输入要查找的数:>");
	scanf("%d",&k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	left = 0;
	right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是%d\n",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}