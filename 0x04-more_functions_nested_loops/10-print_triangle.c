#include "holberton.h"
/**
 * print_triangle - print a square in the terminal
 * @size: size of the triangle
 * Return: always 0
 */

void print_triangle(int size)
{
int i;
int j;
if (size <= 0)
_putchar('\n');
for (i = 0; i < size; i++)
{
int spaces;
spaces = size - (i + 1);
for (j = 0; j <= size; j++)
{
if (spaces > j)
{
_putchar(' ');
}
if (j > spaces)
{
_putchar('#');
}
}
_putchar('\n');
}
}
