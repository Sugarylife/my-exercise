#define _CRT_SECURE_NO_WARNINGS 1

//1.���1000�����ѵ���Ϣ
//���֡��绰���Ա�סַ������
//2.���Ӻ��ѵ���Ϣ
//3.ɾ��ָ�����ֵĺ�����Ϣ
//4.���Һ��ѵ���Ϣ
//5.�޸ĺ��ѵ���Ϣ
//6.��ӡ���ѵ���Ϣ
//7.����
#include<stdio.h>
#include "contact.h"
#include<string.h>
void menu()
{
	printf("********************************************\n");
	printf("*********       Contact        *************\n");
	printf("********* 1.add       2.delet  *************\n");
	printf("********* 3.search    4.modify *************\n");
	printf("********* 5.show      6.sort   *************\n");
	printf("********* 0.exit               *************\n");
	printf("********************************************\n");
}



int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//���1000���˵���Ϣ���������1000��Ԫ�ص������size
	InitContact(&con);//��ʼ��ͨѶ¼,�ṹ�崫��
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DELET:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}