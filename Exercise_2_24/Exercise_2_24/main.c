#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
int main()
{
	//һά���������ָ��
	int arr[10] = {0};
	int* p = arr;
	int(*p)[10] = &arr;

	//��ά���������ָ��
	int arr2[3][4] = { 0 };
	int(*p)[4] = arr2; //��Ԫ�صĵ�ַ����һ�еĵ�ַ����һ����һ��һά����
	int(*p)[3][4] = &arr2;
	return 0;
}

*/


/*

//����ָ��
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int ret = Add(1, 1);
	printf("%p\n",&Add);
	printf("%p\n",Add);//ͬ��
	printf("%d\n",ret);
	//����ָ����ζ��壿
	int(*pf) (int, int) = &Add;
	printf("%p\n",pf);
	//����ָ����ú���
	ret = pf(2, 3);//*����ʡ��
	printf("%d\n",ret);
}

*/

#include<assert.h>

/*

int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);

	int(*pf)(char*) = my_strlen;
	printf("%d\n",pf("Hello China!"));
    return 0;
}

*/



/*

typedef void(*pfun)(int);
//typedef void(*)(int) pfun  �Ǵ����д��
int main()
{
	(          *(       void(*)()       )       0       )       ();
	// �����õõ�����      ����ָ��           ǿ������ת��         ��������
	//ʵ�����ǰ� 0 ����ǿ������ת����һ����ַ���������ĵ�ַ��Ȼ������õõ��������ڽ��е���

	void   (*      signal(int, void(*)(int)  )    )  (int);
    //             signal�������Ͳ�������
	//��ȥsignal�����ĺ������Ͳ������;��Ǻ����ķ�������
	// void (*)(int) ���Ǻ����ķ�������
	//����һ������������������signal����
	pfun signal(int, pfun);
}

*/


//����ָ�������
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int a = 10;
	int b = 20;
	int(*   pfArr[4])(int, int)  = { &Add, &Sub, &Mul, &Div };
	//ע�� ����ȥ�������������С��ʣ�µľ�����������ͣ��� int(*)(int,int),����ָ������
	return 0;
}