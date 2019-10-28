#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of integeres to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int tmp;

	if (size < 2)
		return;


	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
