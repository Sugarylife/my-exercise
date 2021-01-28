#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ�ֿ⺯��strlen
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

////ģ��ʵ�ֿ⺯��strcpy
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


//��������ʹ����ȫ����λ��ż��ǰ��
void Adjust(int* str, int sz)
{
	assert(str != NULL);
	int left = 0;//���������±�
	int right = sz - 1;//������Ҷ��±�
	while (left <= right)
	{
		//�����Ϊż����Ϊ�棬���ҽ���
		if ((*(str + left) % 2 == 0) && (*(str + right)%2 == 1))
		{
			int tmp = *(str + left);
			*(str + left) = *(str + right);
			*(str + right) = tmp;
			left++;
			right--;
		}
		//�����Ϊ�棬��Ϊż���Ƚ���һ��
		else if ((*(str + left) % 2 == 1) && (*(str + right) % 2 == 0))//
		{
			left++;
			right--;
		}
		//������Ҷ�Ϊ�棬��ߵ�����λ�ò��䣬���±�+1�����ұߵ������Ƚ�
		else if ((*(str + left) % 2 == 1) && (*(str + right) % 2 == 1))
		{
			left++;
		}
		//������Ҷ�Ϊż���ұߵ�ż��λ�ò��䣬���±�-1������ߵ�ż���Ƚ�
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
	Adjust(arr, sz);//��������λ��ż��ǰ��
	Print(arr, sz);//��ӡ����
	return 0;
}