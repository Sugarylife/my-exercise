#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k, left, right, mid;
	printf("������Ҫ���ҵ�����>");
	scanf("%d",&k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	left = 0;           //���±�
	right = sz - 1;     //���±�
	while (left <= right)
	{
		mid = (left + right) / 2;//�۰�
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
			printf("�ҵ��ˣ��±���%d\n",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}