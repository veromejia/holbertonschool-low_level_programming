#include <stdio.h>
#include "holberton.h"
/**
 * print_numbers - print numbers form 0 to 9
 *
 * Return: the numbers 0-9
 */
void print_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
_putchar(i);
}
_putchar('\n');
}
