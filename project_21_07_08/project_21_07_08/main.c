#include<stdio.h>

int main()
{
	int arr[] = {4,1,4,5};
	int ret = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	for (int i = 0; i < 4; i++)
	{
		ret ^= arr[i];//ret����x^y
	}
	//ret��λΪ1�ı�ʾ��һλx,y����ͬ
	for (; j < 32; ++j)
	{
		if (ret&((unsigned int)1 << j))
			break;
	}
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] & ((unsigned int)1 << j))//A�飬��λΪ1
		{
			x ^= arr[i];
		}
		else   //B�飬��λΪ0
		{
			y ^= arr[i];
		}
	}
	printf("%d %d ",x,y);
	return 0;
}