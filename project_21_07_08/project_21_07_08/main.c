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
		ret ^= arr[i];//ret就是x^y
	}
	//ret中位为1的表示这一位x,y不相同
	for (; j < 32; ++j)
	{
		if (ret&((unsigned int)1 << j))
			break;
	}
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] & ((unsigned int)1 << j))//A组，该位为1
		{
			x ^= arr[i];
		}
		else   //B组，该位为0
		{
			y ^= arr[i];
		}
	}
	printf("%d %d ",x,y);
	return 0;
}