#include "holberton.h"
#include<stdio.h>
/**
 * reverse_array -reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array
 * Return: an array.
 */
void reverse_array(int *a, int n)
{
int temp, i, end;
end = n - 1;
for (i = 0; i < end; i++, end--)
{
temp = a[i];
a[i] = a[end];
a[end] = temp;
}
}
