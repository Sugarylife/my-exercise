#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//
//	//����ʹ��realloc�������ٿռ�
//	int* p = realloc(NULL, 40);//�ȼ���malloc(40)
//	return 0;
//}




//�����Ķ�̬�ڴ����

int main()
{
	////1.�Կ�ָ��NULL�Ľ����ò���
	//int* p = (int*)malloc(40);//Ҫ��p������ص��ж�
	//*p = 10;//���malloc����ʧ�ܣ��ͻ��NULLָ�������


	////2.�Զ�̬�ڴ濪���ڴ��Խ�����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i <= 10; i++)//Խ��
	//{
	//	*(p + i) = i;
	//	printf("%d ",*(p+i));
	//}
	//free(p);
	//p = NULL;


	////3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	//int a = 10;
	//int* p = &a;
	//*p = 20;
	//free(p);//a��ջ�������ڶ�̬�ڴ�
	//p = NULL;


	////4.ʹ��freeʱֻ�ͷŶ�̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;//ѭ��������pָ���11��ռ䣬p�Ѿ������仯
	//}
	////���տռ�
	//free(p);//�ͷŵ��Ѿ�����ԭ����pָ��Ŀռ�
	//p = NULL;


	////5.��ͬһ�鶯̬�ڴ����ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}

	//free(p);
	//p = NULL;//�ǳ��б�Ҫ��һ��������ͬһ��ָ�뱻����ͷ�
	////...
	//free(p);


	//6.�Զ�̬���ٵĿռ������ͷţ��ڴ�й©��
	while (1)
	{
		malloc(1);
		Sleep(1000);
	}
	//free(p);
	
	return 0;
}