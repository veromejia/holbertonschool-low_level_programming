#include <stdio.h>
#include "holberton.h"
/**
 * print_line - print a line in the terminal
 * @n: is the number of times to print n
 * Return: always 0
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
if (n > 0)
_putchar('_');
_putchar('\n');
}
