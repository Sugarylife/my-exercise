#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()  //�����������Ӵ�С��˳������
//{
//	int arr[3] = {0};
//	printf("������������:>");
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

//int main()    //��1-100������3�ı���
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


//int main()   //�������
//{
//	int a, b, min,i,factor;
//	printf("��������������>");
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
//	printf("���������%d\n",factor);
//	return 0;
//}

//int main() //��ӡ1000-2000�������
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


//#include<math.h>  //��100-200����������
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


//int main()  // 1-100֮��9�ĸ���
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


//#include<math.h>  //��1/1-1/2+1/3-1/4+1/5-...-1/100��ֵ
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

//int main()   //��10�����������ֵ
//{
//	int i = 0;
//	int arr[10] = {0};
//	printf("������10��������>");
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


//int main()  //�žų˷���
//{
//	int i;
//	for (i = 1; i <= 9;i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d��%2d = %2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//���ֲ���
int main()
{
	int k,left,right,mid;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	printf("������Ҫ���ҵ���:>");
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
			printf("�ҵ��ˣ��±���%d\n",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}