#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//struct Stu
//{
//	char name[8];
//	int age;
//};
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	struct Stu arr[n];
//	return 0;
//}  �䳤����  C99֧��
// gcc ���������Ա��� : gcc test.c -std=c99


//��̬�ڴ溯�� 1.malloc  2.free  3.calloc  4.realloc

//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int *)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//����̬����Ŀռ䰴����ʹ�õ�ʱ�򣬾�Ӧ�û�������ϵͳ
//	free(p);//��Ȼpָ������ݱ��ͷţ�����p��Ȼ�������ҵ����ռ�
//	p = NULL;//��p�Ҳ������ռ�
//}


int main()
{
	//malloc(10*sizeof(int));
	int* p=(int*)calloc(10, sizeof(int));//��malloc��ͬ�� 1.����������ʽ��ͬ  2.calloc��ʼ��Ϊ0
	if (p == NULL)
	{
		printf("%s\n",strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ",*(p+i));
		}
		printf("\n");
	}
	//realloc ���·���
	//reallocʹ�õ�ע�����
	//1.���pָ��Ŀռ�֮�����㹻�Ŀռ����׷�ӣ���ֱ��׷�Ӻ󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻�Ŀռ����׷�ӣ���realloc������������һ���µ��ڴ�����
	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻�
	//�¿��ٵ��ڴ�ռ��ַ
	//3.����һ���µı���������realloc�����ķ���ֵ

	
	int* ptr = realloc(p, 15 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;

		int i = 0;
		for (i = 0; i < 15; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;

	return 0;
}

