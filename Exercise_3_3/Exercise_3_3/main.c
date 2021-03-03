#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
int main()
{
	char c = 1;
	printf("%u\n",sizeof(c));
	printf("%u\n", sizeof(+c));//参与表达式运算发生整型提升
	printf("%u\n", sizeof(!c));
	return 0;
}
*/



//       *
//      *
//     *
//*   *
// * *
//  *

/*
int main()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 7-i; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		if (i > 0)
		{
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
		}
		printf("*");
		for (j = 3; j>=1+2*i; j--)
		{
			printf(" ");
		}
		if (i != 2)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
*/

/*
#define pi 3.14
int main()
{
	int r = 0;
	double V = 0;
	printf("球体的半径为:");
	scanf("%d",&r);
	V = (4.0 / 3)*pi*r*r*r;
	printf("球体体积V=%.2lf\n",V);
	return 0;
}
*/

/*
int main()
{
	printf("Enter an amount:");
	double n = 0;
	double ret = 0;
	scanf("%lf",&n);
	ret = 1.05*n;
	printf("With tax added: $%.2lf\n",ret);
	return 0;
}
*/


/*
int main()
{
	double x = 0;
	double ret = 0;
	scanf("%f",&x);
	ret = ((((3 * x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
	printf("%.2lf", ret);
	return 0;
}
*/



/*
int main()
{
	int count = 0;
	int dollar = 0;
	scanf("%d",&dollar);
	count = dollar / 20;
	dollar %= 20;
	printf("$20 bills: %d\n",count);
	
	count = dollar / 10;
	dollar %= 10;
	printf("$10 bills: %d\n",count);

	count = dollar / 5;
	dollar %= 5;
	printf("$5 bills: %d\n",count);

	count = dollar;
	printf("$1 bills: %d\n",count);
	return 0;
}
*/


int main()
{
	double loan = 0;
	double rate = 0;
	double payment = 0;
	
	printf("Enter amount of loan:");
	scanf("%lf",&loan);
	double ret = loan;

	printf("Enter interest rate:");
	scanf("%lf",&rate);

	printf("Enter monthly payment:");
	scanf("%lf",&payment);

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		ret = ret - payment + ret * (rate / 100.0 / 12);
		printf("Balance remaining after %d payment: %.2lf\n",i+1,ret);
	}

	return 0;
}



