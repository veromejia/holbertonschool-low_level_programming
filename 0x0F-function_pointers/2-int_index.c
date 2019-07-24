#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - fuction that searches for an integer
 * @array: array of integers
 * @size: numbers of elements in the array
 * @cmp: pointer to a function to be used to compare values
 * Return: the index of the first element for which cmp function
 * does not return 0, if no elements maches return 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
i = 0;
if (size <= 0 || !(array) || !(cmp))
return (-1);
for (i = 0; i <= size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
