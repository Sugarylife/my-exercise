#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()  //��д���룬��ʾ����ַ��������ƶ������м���
{
	int left, right;
	char arr1[] = "hello chen guoan!";
	char arr2[] = "#################";
	left = 0;
	right = strlen(arr1) - 1;
	printf("%s\n",arr2);
	system("cls");
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}