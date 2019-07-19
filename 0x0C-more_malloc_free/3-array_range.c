#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array of integer
 * @min: min number
 * @max: max number
 * Return: new array.
 */
int *array_range(int min, int max)
{
int *ptr;
int i;
int size = (max - min);
if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * (size + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i <= size; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
