#include<stdio.h>

//����һ���ҳ�ȱʧ������ð�����򷨣�ʱ�临�Ӷ�O(N^2)
int main()
{
	int arr[5] = { 1,4,3,0,5 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int k = 0; k < 4; k++)
	{
		if ((arr[k] + 1) != arr[k + 1])
		{
			printf("%d\n",arr[k]+1);
			break;
		}
	}

	return 0;
}