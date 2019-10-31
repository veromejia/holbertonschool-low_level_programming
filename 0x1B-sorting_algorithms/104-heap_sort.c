#include "sort.h"
/**
 * heapify - makes the max heap binary tree
 *
 * @array: pointer to an array
 * @n: size of the heap
 * @i: the root index
 * @size: size of the array
 */
void heapify(int *array, int n, int i, size_t size)
{
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int temp;

        if (l < n && array[l] > array[largest])
                largest = l;
        if (r < n && array[r] > array[largest])
                largest = r;
        if (largest != i)
        {
                temp = array[i];
                array[i] = array[largest];
                array[largest] = temp;
                print_array(array, size);
                heapify(array, n, largest, size);
        }
}

/**
 * heap_sort - Sorts an array of integers in ascending order using the Heap
 *             sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void heap_sort(int *array, size_t size)
{
        int i;
        int temp;

        for (i = size / 2; i >= 0; i--)
                heapify(array, size, i, size);
        for (i = size - 1; i >= 0; i--)
        {
                temp = array[0];
                array[0] = array[i];
                array[i] = temp;
                if (i != 0)
                        print_array(array, size);
                heapify(array, i, 0, size);
        }
}
