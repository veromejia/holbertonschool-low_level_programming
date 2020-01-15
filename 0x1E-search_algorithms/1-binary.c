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
	if (!array)
		return (-1);
	return (recursive_binarySearch(array, 0, (int)size - 1, value));
}

/**
 * recursive_binarySearch - functiont that search for a value
 * using recursion
 * @arr: pointer to the first element of the array
 * @l: left position
 * @r: right position
 * @x: value to search
 * Return: a integer where value is located
 */
int recursive_binarySearch(int *arr, int l, int r, int x)
{
	if (r >= l)
	{
		printf("Searching in array: ");
		print_sub_array(l, r);
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return (mid);
		if (arr[mid] > x)
			return (recursive_binarySearch(arr, l, mid - 1, x));
		return (recursive_binarySearch(arr, mid + 1, r, x));
	}
	return (-1);
}

/**
 * print_sub_array - print the subarray
 * @l: left position
 * @r: right position
 */
void print_sub_array(int l, int r)
{
	int i;

	for (i = l; i <= r; i++)
	{
		printf("%i", i);
		if (i != r)
			printf(", ");
	}
	printf("\n");
}
