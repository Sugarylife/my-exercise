#include"test.h"

int main()
{
	int array[] = { 2,5,3,9,6 };
	int count = sizeof(array) / sizeof(array[0]);
	bubble_sort(array, count, sizeof(array[0]), int_cmp);
	print_array(array, count);
	return 0;
}