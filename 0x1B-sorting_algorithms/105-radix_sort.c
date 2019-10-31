#include "sort.h"

/**
 * countingSort - function that sort using LSD
 * @array: array to sort
 * @size: size of the array
 * @place: less significant digit (LSD)
 */
void countingSort(int *array, int size, int place)
{
	int *output, i;
	int count[10] = {0};

	output = malloc(sizeof(int) * size);

	for (i = 0; i < size; i++)
		count[(array[i] / place) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = size - 1; i >= 0; i--)
	{
		output[count[(array[i] / place) % 10] - 1] = array[i];
		count[(array[i] / place) % 10]--;
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(output);
}


/**
 * radix_sort - function that sorts an array of integers in ascending order
 * using the Radix sort algorithm
 * @array: array to be sort
 * @size: size of the array
 */
void radix_sort(int *array, size_t size)
{
	int max, digit;

	if (size < 2)
		return;

	max = get_max(array, size);

	for (digit = 1; max / digit > 0; digit *= 10)
	{
		countingSort(array, size, digit);
		print_array(array, size);
	}
}

/**
 *get_max - function that get the maximun value of the array
 * @array: given array
 * @size: size of the array
 * Return: the maximun value of the array
 */
int get_max(int *array, size_t size)
{
	int max = array[0];
	unsigned int i;

	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	return (max);
}
