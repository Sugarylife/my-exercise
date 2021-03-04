#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int main()
{
	int a, b, c = 0;
	scanf("%d -%d -%d",&a,&b,&c);
	printf("%d %d %d",a,b,c);
	return 0;
}
*/

/*
int main()
{
	float a = 0;
	scanf("%f ", &a);
	printf("%f", a);
	return 0;
}
*/

/*
int main()
{
	float a = 0;
	float b = 0;
	scanf("%f, %f",&a,&b);
	printf("%f %f",a,b);
	return 0;
}
*/

/*
int main()
{
	int i = 0;
	float x = 0;
	int j = 0;
	scanf("%d%f%d",&i,&x,&j);
	printf("%d %f %d",i,x,j);
	return 0;
}
*/


/*
int main()
{
	float x, y = 0;
	int i = 0;
	scanf("%f%d%f", &x, &i, &y);
	printf("%f %d %f",x,i,y);
	return 0;
}
*/

/*
int main()
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter first fraction: ");
	scanf("%d / %d",&num1,&denom1);

	printf("Enter second fraction: ");
	scanf("%d / %d",&num2,&denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n",result_num,result_denom);

	return 0;
}
*/

/*
int main()
{
	size_t day, mon, year = 0;
	printf("Enter a date(mm/dd/yyyy): " );
	scanf("%u/%u/%u",&mon,&day,&year);

	printf("You entered the date %.4u%.2u%.2u",year,mon,day);
	return 0;
}
*/

/*
int main()
{
	int num, d_day, d_mon, d_year = 0;
	float price = 0;
	printf("Enter item number: ");
	scanf("%d",&num);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d",&d_mon,&d_day,&d_year);

	printf("Item\tUnit\t\tPurchase\n");
	printf("\tPrice\t\tDate\n");
	printf("%d\t$%7.2f\t%.2d/%.2d/%.4d\n",num,price,d_mon,d_day,d_year);
	return 0;
}
*/

/*
int main()
{
	int prefix, iden, code, num, digit = 0;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d",&prefix,&iden,&code,&num,&digit);

	printf("GS1 prefix: %d\n",prefix);
	printf("Group identifier: %d\n", iden);
	printf("Publisher code: %d\n", code);
	printf("Item number: %d\n", num);
	printf("Check digit: %d\n", digit);
	return 0;
}
*/


/*
int main()
{
	int part1, part2, part3 = 0;
	printf("Enter phonr number: [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d",&part1,&part2,&part3);

	printf("You entered %d.%d.%d\n",part1,part2,part3);
	return 0;
}
*/


/*
#define row 4
#define col 4
int main()
{
	int arr[row][col] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%2d  ", arr[i][j]);
		}
		printf("\n");
	}

	int row_sum1 = 0, row_sum2 = 0, row_sum3 = 0, row_sum4 = 0;
	for (j = 0; j < col; j++)
	{
		row_sum1 += arr[0][j];
	}
	for (j = 0; j < col; j++)
	{
		row_sum2 += arr[1][j];
	}
	for (j = 0; j < col; j++)
	{
		row_sum3 += arr[2][j];
	}
	for (j = 0; j < col; j++)
	{
		row_sum4 += arr[3][j];
	}

	int col_sum1 = 0, col_sum2 = 0, col_sum3 = 0, col_sum4 = 0;
	for (i = 0; i < row; i++)
	{
		col_sum1 += arr[i][0];
	}
	for (i = 0; i < row; i++)
	{
		col_sum2 += arr[i][1];
	}
	for (i = 0; i < row; i++)
	{
		col_sum3 += arr[i][2];
	}
	for (i = 0; i < row; i++)
	{
		col_sum4 += arr[i][3];
	}

	int x_sum1 = 0, x_sum2 = 0;
	for (i = 0; i < row; i++)
	{
		x_sum1 += arr[i][i];
	}
	for (i = 0; i < row; i++)
	{
		x_sum2 += arr[i][col - 1 - i];
	}

	printf("Row sums: %d %d %d %d\n",row_sum1,row_sum2,row_sum3,row_sum4);
	printf("Column sums: %d %d %d %d\n",col_sum1,col_sum2,col_sum3,col_sum4);
	printf("Diagonal sums: %d %d\n",x_sum1,x_sum2);
}
*/

int main()
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d / %d+%d / %d", &num1, &denom1, &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);


	return 0;
}