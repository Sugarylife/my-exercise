#include"test.h"

int main()
{
	char arr[] = "abcdefgh";
	char buf[20];

	printf("%d\n",my_strlen_1(arr)); //�����������ַ�������
	printf("%d\n",my_strlen_2(arr)); //�ݹ鷨���ַ�������
	printf("%d\n",my_strlen_3(arr)); //ָ����������ַ�������

	char* newstr_cpy = my_strcpy(buf, arr);//�ַ�������
	printf("%s\n", newstr_cpy);
	char* newstr_cat = my_strcat(buf, arr);//�ַ���׷��
	printf("%s\n",newstr_cat);
	int ret_cmp = my_strcmp(arr, newstr_cat);//�ַ����Ƚ�
	printf("%d\n",ret_cmp);

	char* newstr_strstr = my_strstr(newstr_cat, "ghab");//Ѱ���Ӵ�
	if (newstr_strstr != NULL)
	{
		printf("%s\n",newstr_strstr);
	}
	else
	{
		printf("�Ҳ����Ӵ�\n");
	}

	int arr_int[] = { 1,2,3,4,5,6,7,8,9 };
	my_memmove(&arr_int[0], &arr_int[2], 4 * sizeof(arr_int[0]));
	for (int i = 0; i < sizeof(arr_int) / sizeof(arr_int[0]); i++)
	{
		printf("%d ",arr_int[i]);
	}
	return 0;
}