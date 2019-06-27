#include <stdio.h>
#include "holberton.h"
/**
 * print_most_numbers - print numbers form 0 to 9
 *
 * Return: the numbers 0-9
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (!(i == 2 || i == 4))
_putchar('0' + i);
}
_putchar('\n');
}
