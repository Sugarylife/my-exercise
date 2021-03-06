#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
int main()
{
	char ch;
	int len = 0;
	ch = getchar();
	while (ch != '\n')
	{
		len++;
		ch = getchar();
	}
	printf("Your message was %d characters long.\n",len);
	
	return 0;
}
*/



/*
int main()
{
	int len = 0;
	printf("Enter a message: ");
	while (getchar() != '\n')
		len++;
	printf("Your message was %d characters long.\n",len);
	return 0;
}
*/


/*
//最小公倍数
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d %d",&a,&b);
	for (i = 1;; i++)
	{
		if (a*i%b == 0)
		{
			printf("%d\n",a*i);
			break;
		}
	}
	return 0;
}
*/



/*
//辗转相除法先求最大公约数再求最小公倍数
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d",&a,&b);
	int m = a;
	int n = b;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d\n",m*n/a);
	return 0;
}
*/



/*
int main()
{
	char arr[100] = { 0 };
	//scanf 在输入字符串时遇到空格就停止
	scanf("%s",arr);// abc sd
	printf("%s\n",arr);//abc
}
*/




//自己的方法(单词倒置)
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	int n = len - 1;
	char* right = &arr[len - 1];
	int i = 0;
	while (n)
	{
		if (*right == ' ')
		{
			*right = '\0';
			printf("%s ",right+1);
		}
		right--;
		n--;
	}
	printf("%s",arr);
	return 0;
}



