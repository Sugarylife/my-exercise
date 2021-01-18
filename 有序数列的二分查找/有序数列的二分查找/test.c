#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k, left, right, mid;
	printf("请输入要查找的数：>");
	scanf("%d",&k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	left = 0;           //左下标
	right = sz - 1;     //右下标
	while (left <= right)
	{
		mid = (left + right) / 2;//折半
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下表是%d\n",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}