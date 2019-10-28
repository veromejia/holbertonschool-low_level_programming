#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	recursion_sort(array, size, 0, size - 1);
}

/**
 * recursion_sort - function that find the pivot element using recursion
 * @array: array of unsorted elements
 * @size: size of the array
 * @leftIdx: left index
 * @rightIdx: rightIdx
 */
void recursion_sort(int *array, size_t size, int leftIdx, int rightIdx)
{
	int pivot;

	if (leftIdx < rightIdx)
	{
		/*finding pivot element*/
		pivot = partition(array, size, leftIdx, rightIdx);
		recursion_sort(array, size, leftIdx, pivot - 1);
		recursion_sort(array, size, pivot + 1, rightIdx);
	}
}

/**
 * partition - function that split an  array between left and right index,
 * and swap the positions in ascendent order
 * @array: array to sort
 * @size: size of the array
 * @leftIdx: left index
 * @rightIdx: right index
 * Return: return the pivot position
 */
int partition(int *array, size_t size,  int leftIdx, int rightIdx)
{
	int j, i;

	i = leftIdx - 1;

	for (j = leftIdx; j < rightIdx; j++)
	{
		/* swap all elements less than pivot to left side*/
		if (array[j] < array[rightIdx])
		{
			i++;
			/* print correctly*/
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	/*swap if pivot is less than  i+1 wall element*/
	if (array[rightIdx] < array[i + 1])
	{
		swap_int(&array[i + 1], &array[rightIdx]);
		print_array(array, size);
	}
	/* return the correct position of pivot element*/
	return (i + 1);
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
