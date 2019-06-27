#include <stdio.h>
#include "holberton.h"
/**
 * print_square - print a square in the terminal
 * @size: size of the square
 * Return: always 0
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
