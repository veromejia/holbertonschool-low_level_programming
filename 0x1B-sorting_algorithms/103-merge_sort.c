#include "sort.h"
/**
 * merge - merge the left and right array together.
 *
 * @array: A pointer to the current array
 * @temp: A pointer to the new array
 * @size: Number of elements in @array
 */

void merge(int *array, int *temp, size_t size)
{
	int i, j;
	int *l = array;
	int *r = array + size / 2;
	int l_side = size / 2;
	int r_side = size / 2 + size % 2;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(l, l_side);
	printf("[right]: ");
	print_array(r, r_side);


	for (i = 0, j = 0; i < l_side && j < r_side; temp++)
	{
		if (l[i] <= r[j])
		{
			*temp = l[i];
			i++;
		}
		else
		{
			*temp = r[j++];
		}
	}
	while (i < l_side)
	{
		*temp = l[i];
		i++;
		temp++;
	}
	while (j < r_side)
	{
		*temp++ = r[j++];
	}
	printf("[Done]: ");
	print_array(temp - size, size);
}
/**
 * recursion_merge - To divide everything into subarrays.
 *
 * @array: A pointer to the original array
 * @temp: A pointer to the new array
 * @size: Number of elements in @array
 */
void recursion_merge(int *array, size_t size, int *temp)
{

	if (size > 1)
	{
		recursion_merge(array, size / 2, temp);/*ptr at L origin*/
		recursion_merge(array + (size / 2), size / 2 + size % 2,
				temp + size / 2);/*now ptr at R*/
		merge(array, temp, size);
		while (size-- != 0)
			*array++ = *temp++;
	}
}
/**
 * merge_sort - sorting and merging the elements in array.
 *
 * @array: A pointer to the sorted array
 * @size: Number of elements in @array
 */
void merge_sort(int *array, size_t size)
{
	int *temp;

	if (size < 2)
		return;
	temp = malloc(sizeof(int) * size);
	if (temp == NULL)
		return;
	{
		recursion_merge(array, size, temp);
	}
	free(temp);
}
