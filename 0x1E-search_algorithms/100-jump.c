#include "search_algos.h"
/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located or -1 if fail or NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	int sqr = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (a < size && array[a] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", a, array[a]);
		a += sqr;
	}

	printf("Value found between indexes [%li] and [%lu]\n", a - sqr, a);
	a -= sqr;

	while (array[a] <= value && a < size)
	{
		printf("Value checked array[%lu] = [%i]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}
