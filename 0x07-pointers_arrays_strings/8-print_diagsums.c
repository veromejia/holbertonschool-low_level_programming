#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 * @a: array
 * @size; size of the array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int sum;
int sum2;
for (i = 0; i < size * size; i = 1 + size + i)
{
sum = sum + a[i];
}
for (j = size - 1; j < (size * size - 1); j = j + (size - 1))
{
sum2 = sum2 + a[j];
}
printf("%i, %i\n", sum, sum2);
}

