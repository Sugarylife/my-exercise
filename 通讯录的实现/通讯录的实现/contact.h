#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];
	int size;
};


//����ѡ��ɶ���
enum Option
{
	EXIT,//0
	ADD,//1
	DELET,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6
};

//��������
void InitContact(struct Contact* ps);//��ʼ��ͨѶ¼�ĺ���
void AddContact(struct Contact* ps);//������Ϣ�ĺ���
void ShowContact(const struct Contact* ps);//��ӡͨѶ¼����Ϣ�ĺ���
void DelContact(struct Contact* ps);//ɾ��ָ������ϵ��
void SearchContact( struct Contact* ps);//����ָ������ϵ��
void ModifyContact(const struct Contact* ps);//�޸�ָ����ϵ�˵���Ϣ
void SortContact(struct Contact* ps);//��ͨѶ¼��ϵ�˽�����������