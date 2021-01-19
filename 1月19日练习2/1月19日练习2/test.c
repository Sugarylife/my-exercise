#define _CRT_SECURE_NO_WARNINGS 1
//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char password[10] = "";
	
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			break;
		}
		else
		{
			printf("密码错误！\n");
		}
	}
	if (i == 3)
	{
		printf("退出程序\n");
	}
	else
	{
		printf("登录成功！\n");
	}
	
	return 0;
}