#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include "function_pointers.h"
/**
* array_iterator - exec. a funct given as a  param. on each element of an array
* @array: array of integers
* @size: array size of type size_t
* @action: pointer to a function that we use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action && size)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}

