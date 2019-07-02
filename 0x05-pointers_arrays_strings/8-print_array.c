#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print every 2 char
 * @a: array
 * @n: n numbers of values in the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
/* n=5 */
/* *a = array[] */
for (i = 0; i <= n - 1; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
printf("%d\n", a[i]);
}
}
