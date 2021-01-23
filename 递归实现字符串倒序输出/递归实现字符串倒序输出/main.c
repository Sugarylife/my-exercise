#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void reverse_string(char* string)
{
	if (*(string + 1) != '\0')
	{
		reverse_string(string + 1);
	}
	printf("%c", *string);
}
int main()
{
	char arr[10] = "";
	scanf("%s", arr);
	reverse_string(arr);
	return 0;
}