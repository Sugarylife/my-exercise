#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现库函数strlen
#include<stdio.h>
#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*(str++))
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "I am a student";
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*(str) != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "I am a student";
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	char* start = str;
//	while (*(++str) != '\0')
//	{
//		;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "I am a student";
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}

////模拟实现库函数strcpy
//
//char* my_strcpy(char* dest, const char* src)
//{
//	
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* first = dest;
//	while (*(dest++) = *(src++))
//	{
//		;
//	}
//	return first;
//}
//int main()
//{
//	char arr1[20] = "";
//	char arr2[] = "I am a student";
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//}


//调整数组使奇数全部都位于偶数前面
void Adjust(int* str, int sz)
{
	assert(str != NULL);
	int left = 0;//数组的左端下标
	int right = sz - 1;//数组的右端下标
	while (left <= right)
	{
		//如果左为偶，右为奇，左右交换
		if ((*(str + left) % 2 == 0) && (*(str + right)%2 == 1))
		{
			int tmp = *(str + left);
			*(str + left) = *(str + right);
			*(str + right) = tmp;
			left++;
			right--;
		}
		//如果左为奇，右为偶，比较下一组
		else if ((*(str + left) % 2 == 1) && (*(str + right) % 2 == 0))//
		{
			left++;
			right--;
		}
		//如果左右都为奇，左边的奇数位置不变，左下标+1再与右边的奇数比较
		else if ((*(str + left) % 2 == 1) && (*(str + right) % 2 == 1))
		{
			left++;
		}
		//如果左右都为偶，右边的偶数位置不变，右下标-1再与左边的偶数比较
		else
		{
			right--;
		}
	}
}
void Print(int* str, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(str+i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Adjust(arr, sz);//调整奇数位于偶数前面
	Print(arr, sz);//打印数组
	return 0;
}