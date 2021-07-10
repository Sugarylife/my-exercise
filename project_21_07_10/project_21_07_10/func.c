#include"test.h"


int int_cmp(void*p1, void*p2)
{
	return *((int*)p1) - *((int*)p2);
}


void swap(void*p1, void*p2, size_t size)
{
	int i = 0;
	for (; i < size ; i++)//Öð×Ö·û½»»»
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void bubble_sort(void* base, size_t count, size_t size, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (; i < count - 1; i++)
	{
		for (; j < count - 1 - i; j++)
		{
			if ((cmp((char*)base + j * size, (char*)base + (j + 1)*size)) > 0)
			{
				swap((char*)base + j * size, (char*)base + (j + 1)*size, size);
			}
		}
	}
}

void print_array(int* array, size_t size)
{
	int i = 0;
	for (; i < size; i++)
	{
		printf("%d ",array[i]);
	}
}