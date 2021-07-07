#include<stdio.h>

/*
//消失的数字，方法二，求和做差法，时间复杂度O(N)
int main()
{
	int arr[] = { 2,1,4,5,0 };
	int sum = 0;
	int sz = sizeof(arr) / sizeof(int);
	sum = ((sz+1) * sz) / 2;
	for (int i = 0; i < sz; i++)
	{
		sum -= arr[i];
	}
	printf("%d", sum);
	return 0;
}
*/


//缺失的数字，方法三，异或法
int main()
{
	int arr[] = { 0,1,2,4,5,6,7,8,9 };
	int buf[] = { 1,2,3,4,5,6,7,8,9,0 };
	int ret = arr[0];
	int sz_arr = sizeof(arr) / sizeof(int);
	int sz_buf = sizeof(buf) / sizeof(int);

	for (int i = 0; i < sz_arr; ++i)
	{
		ret ^= arr[i];
	}
	for (int j = 0; j < sz_buf; ++j)
	{
		ret ^= buf[j];
	}
	printf("%d ",ret);
	return 0;
}