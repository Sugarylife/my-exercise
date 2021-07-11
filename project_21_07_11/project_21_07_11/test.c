#include"test.h"

int main()
{
	char arr[] = "abcdefgh";
	char buf[20];

	printf("%d\n",my_strlen_1(arr)); //计数器法求字符串长度
	printf("%d\n",my_strlen_2(arr)); //递归法求字符串长度
	printf("%d\n",my_strlen_3(arr)); //指针相减法求字符串长度

	char* newstr_cpy = my_strcpy(buf, arr);//字符串拷贝
	printf("%s\n", newstr_cpy);
	char* newstr_cat = my_strcat(buf, arr);//字符串追加
	printf("%s\n",newstr_cat);
	int ret_cmp = my_strcmp(arr, newstr_cat);//字符串比较
	printf("%d\n",ret_cmp);

	char* newstr_strstr = my_strstr(newstr_cat, "ghab");//寻找子串
	if (newstr_strstr != NULL)
	{
		printf("%s\n",newstr_strstr);
	}
	else
	{
		printf("找不到子串\n");
	}

	int arr_int[] = { 1,2,3,4,5,6,7,8,9 };
	my_memmove(&arr_int[0], &arr_int[2], 4 * sizeof(arr_int[0]));
	for (int i = 0; i < sizeof(arr_int) / sizeof(arr_int[0]); i++)
	{
		printf("%d ",arr_int[i]);
	}
	return 0;
}