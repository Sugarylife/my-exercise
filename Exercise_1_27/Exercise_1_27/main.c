#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	p = 100;
//	printf("%p\n",p);
//	return 0;
//
//}

//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//	*p = 0;
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = &a;
//	if (*p == 1)
//	{
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//	return 0;
//}

//ָ�����͵�����ʱ������ָ����ʵ�Ȩ�ޣ�Ҳ���Ƿ��ʼ����ֽ�

//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	char* pc = arr;
//	printf("%p\n",arr);
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);  //ָ�����;�����ָ��+1�߶��ľ���
//	printf("-----------\n");
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//pָ��������Ѿ����ͷţ���ʱp��һ��Ұָ��
//	printf("hehe\n");
//	printf("%d ",*p);  
//	return 0;
//}

//int main()
//{
//	int* p;//û���κγ�ʼ��-���ֵ-Ұָ��
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 11; i++)//Խ�����-Ұָ��
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p = &a;
//	int* p = NULL;//�����˼�ʱ�ͷ�
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//NULLָ��Ŀռ��ǲ��ܷ��ʵ�
//	if (p != NULL)//ָ��ʹ��֮ǰ�����Ч��
//	{
//		*p = 20;
//	}
//	return 0;
//}

//int my_strlen(char* arr)   //���ַ�������
//{
//	char* start = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//	return arr - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d ",len);
//	return 0;
//}

//int my_strlen(char* arr)//���ַ�������
//{
//	int count = 0;
//	while ((*arr) != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d ",len);
//	return 0;
//}

//��׼�涨�� ����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��Ǹ��ڴ�λ�õ�ָ��Ƚ�
//�������Խ�磬��Ҫ��ǰԽ��

//int main()
//{
//	char* p = "abcdef";
//	char* arr[] = { "abcdef","hello","bit" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s ",arr[i]);
//	}
//	return 0;
//}


////����һ��ѧ��
//struct Point 
//{
//	int a;
//	int b;
//};
//struct Stu
//{
//	char name[10];
//	int age;
//	char tele[12];
//	char sex[5];
//	struct Point p;
//};
//int main()
//{
//	struct Stu s1 = { "�¹���",23,"18955664480","��" ,{2,3} };
//	printf("%s\n",s1.name);
//	printf("%d\n", s1.age); 
//	printf("%s\n", s1.tele);
//	printf("%s\n", s1.sex);
//	printf("%d %d\n", s1.p.a, s1.p.b);
//	struct Stu* p = &s1;
//	printf("%s\n",p->name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->tele);
//	printf("%s\n", p->sex);
//	printf("%d %d\n",p->p.a,p->p.b);
//	return 0;
//}