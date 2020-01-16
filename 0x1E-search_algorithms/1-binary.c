#include "search_algos.h"

/**
 * binary_search - function that searches for a value in
 * sorted array of integers using the binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int i, middle;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%i, ", array[i]);

		printf("%i\n", array[i]);

		middle = (l + r) / 2;

		if (array[middle] < value)
			l = middle + 1;
		else if (array[middle] > value)
			r = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
