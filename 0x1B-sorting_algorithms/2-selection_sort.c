#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, new_position;

	for (i = 0; i < size - 1; i++)
	{
		new_position = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[new_position])
				new_position = j;
		}
		if (new_position != i)
		{
			swap_int(&array[i], &array[new_position]);
			print_array(array, size);
		}
	}
}
/**
 * swap_int - swap 2 values a and b.
 * @a: first value
 * @b: second value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
