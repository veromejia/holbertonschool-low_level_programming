#include "sort.h"
/**
 * shell_sort -  function that sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: array to sort
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t inner, outer;
	size_t interval = 1;
	int valueToInsert;
	int i = 0;

	if (size < 2)
		return;

	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}
	while (interval > 0)
	{
		for (outer = interval; outer < size; outer++)
		{
			valueToInsert = array[outer];
			inner = outer;
			while (inner > interval - 1 && array[inner - interval]
			      >= valueToInsert)
			{
				array[inner] = array[inner - interval];
				inner -= interval;
			}
			array[inner] = valueToInsert;
		}
		print_array(array, size);
		interval = (interval - 1) / 3;
		i++;
	}
}
