#define _CRT_SECURE_NO_WARNINGS 1
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char password[10] = "";
	
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�˳�����\n");
	}
	else
	{
		printf("��¼�ɹ���\n");
	}
	
	return 0;
}