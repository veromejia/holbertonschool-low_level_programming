#include "sort.h"
#include <stdio.h>
/**
 * get_max - Search for the maximum element in an array.
 *
 * @array: Pointer to an array
 * @n: Size of the array
 *
 * Return: the maximum element of the array
 */

int get_max(int *array, int n)
{
	int i;
	int max = 0;

	for (i = 0; i < n; i++)
		if (array[i] > max)
			max = array[i];
	return (max);
}

/**
 * sum_count - construct an array that count all the sum
 *
 * @unique: pointer to an array
 * @m: the size of the array
 */
void sum_count(int *unique, int m)
{
	int i;

	for (i = 1; i < m + 1; i++)
		unique[i] += unique[i - 1];
}

/**
 * print_sorted - place all the copy of the original array
 *                into the result array
 *
 * @array: pointer to an array
 * @results: pointer to an array
 * @unique: pointer to an array
 * @size: the size of the array
 */
void print_sorted(int *array, int *results, int *unique, size_t size)
{
	while (size--)
		results[--(unique[array[size]])] = array[size];
}

/**
 * counting_sort - sort an array of integers in ascending order using
 *                 the Counting sort algorithm
 *
 * @array: pointer to an array
 * @size: Number of elements in @array
 */
void counting_sort(int *array, size_t size)
{
	int *aux;
	int *sortedA;
	size_t i;
	size_t k;

	if (size < 2)
		return;
	sortedA = malloc(sizeof(int) * size);
	if (sortedA == NULL)
		return;
	for (i = 0; i < size; i++)
		k = get_max(array, size);
	aux = malloc(sizeof(int) * (k + 1));
	if (aux == NULL)
		return;
	for (i = 0; i <= k; i++)
		aux[i] = 0;
	for (i = 0; i < size; i++)
		aux[array[i]]++;
	sum_count(aux, k + 1);
	print_array(aux, k + 1);
	print_sorted(array, sortedA, aux, size);
	while (size--)
		array[size] = sortedA[size];
	free(aux);
	free(sortedA);
}
