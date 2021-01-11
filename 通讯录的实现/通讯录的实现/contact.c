#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֻ��0������
}

void AddContact(struct Contact* ps)
{
	if (MAX == ps->size)
	{
		printf("ͨѶ¼�������޷���������\n");
	}
	else
	{
		printf("������������>\n");
		scanf("%s", &(ps->data[ps->size].name));
		printf("���������䣺>\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�>\n");
		scanf("%s", &(ps->data[ps->size].sex));
		printf("������绰��>\n");
		scanf("%s", &(ps->data[ps->size].tele));
		printf("�������ַ��>\n");
		scanf("%s", &(ps->data[ps->size].addr));

		ps->size++;
		printf("��ӳɹ���\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��!\n");
	}
	else
	{
		int i = 0;
		printf("%-6s\t%-4s\t%-5s\t%-12s\t%-8s\n", "����", "����", "�Ա�", "�绰", "סַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-6s\t%-4d\t%-5s\t%-12s\t%-8s\n",
				ps->data[i].name,
				ps->data[i].age, ps->data[i].sex,
				ps->data[i].tele, ps->data[i].addr);
		}
	}
}

 static int FindByName(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//�Ҳ��������
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵����֣�>\n");
	scanf("%s", name);
	//����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ�������-1
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫɾ�����˲����ڣ�\n");
	}
	//��ʼɾ��
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
	}
	ps->size--;
	printf("ɾ���ɹ�!\n");
}

void SearchContact( struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵����֣�>\n");
	scanf("%s", name);
	//����
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲����ڣ�\n");
	}
	else
	{
		printf("%-6s\t%-4s\t%-5s\t%-12s\t%-8s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-6s\t%-4d\t%-5s\t%-12s\t%-8s\n", ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele, ps->data[pos].addr);
	}
}

void ModifyContact(const struct Contact* ps)//�޸�ָ����ϵ��
{
	char name[MAX_NAME];
	printf("������Ҫ�޸���Ϣ��������>\n");
	scanf("%s",name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ���Ϣ������!\n");
	}
	else
	{
		printf("������Ҫ�޸ĵ���Ϣ��>\n");
		printf("������>\n");
		scanf("%s",ps->data[pos].name);
		printf("���䣺>\n");
		scanf("%d",&(ps->data[pos].age));
		printf("�Ա�>\n");
		scanf("%s",ps->data[pos].sex);
		printf("�绰��>\n");
		scanf("%s",ps->data[pos].tele);
		printf("��ַ��>\n");
		scanf("%s",ps->data[pos].addr);

		printf("�޸ĳɹ���\n");
	}
}

