#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//求1-100里有多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d ",count);
//	return 0;
//}

//int main()
//{
//	int i;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf ",sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			int tmp;
//			tmp = arr[0];
//			arr[0] = arr[i];
//			arr[i] = tmp;
//		}
//	}
//	printf("\n%d\n",arr[0]);
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char arr[] = "chenguoan";
//	char arr2[] = "XXXXXXXXXXXXXXX";
//	strcpy(arr2, arr);
//	printf("%s\n",arr2);
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr[] = "chenguoannihao";
//	memset(arr, '6', 6);
//	printf("%s\n",arr);
//	return 0;
//}

//void swap(int* x, int*y)
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//void swap(int** x, int** y)
//{
//	int tmp;
//	tmp = **x;
//	**x = **y;
//	**y = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	int* pa = &a;
//	int* pb = &b;
//	swap(&pa, &pb);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//int bin_search(int* arr, int k, int sz)
//{
//	int left = 0;
//	int mid;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	scanf("%d",&k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = bin_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n",ret);
//	}
//	return 0;
//}

//void Add(int* num)
//{
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	int a = 1;
//	int b = 2;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	printf("%d ",num);
//	return 0;
//}


//int is_prime(int i)
//{
//	int j;
//	for (j = 2; j < i; j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int ret = is_prime(i);
//		if (1 == ret)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int year;
//	printf("请输入要判断的年份:\n");
//	while (scanf("%d", &year) != EOF)
//	{
//		int ret = is_leap_year(year);
//		if (ret == 1)
//		{
//			printf("%d年是闰年\n", year);
//		}
//		else
//		{
//			printf("%d年不是闰年\n", year);
//		}
//	}
//	return 0;
//}


//void swap(int* a, int* b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a, b;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}


//void mul_tab(int n)
//{
//	int i,j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d×%2d=%3d ",j,i,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入要打印的行数:\n");
//	scanf("%d",&n);
//	mul_tab(n);
//	return 0;
//}


//int main()
//{
//	int i;
//	double avg = 0;
//	int score[7] = { 0 };
//	int sz = sizeof(score) / sizeof(score[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d",&score[i]);
//	}
//	for (i = 1; i < sz; i++)
//	{
//		if (score[0] < score[i])
//		{
//			int tmp;
//			tmp = score[0];
//			score[0] = score[i];
//			score[i] = tmp;
//		}
//	}
//	score[0] = 0;
//	for (i = 2; i < sz; i++)
//	{
//		if (score[1] > score[i])
//		{
//			int tmp;
//				tmp = score[1];
//				score[1] = score[i];
//				score[i] = tmp;
//		}
//	}
//	score[1] = 0;
//	for (i = 2; i < sz; i++)
//	{
//		avg += score[i];
//	}
//	avg /= sz - 2;
//	printf("%.2lf",avg);
//
//	
//	return 0;
//}



int main()
{
	int year, month;
	printf("请输入年月：\n");
	while (scanf("%d %d", &year, &month) != EOF)
	{
		switch (month)
		{
		case 2:
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			{
				printf("29\n");
			}
			else
			{
				printf("28\n");
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30\n");
			break;
		}
	}

		return 0;
}