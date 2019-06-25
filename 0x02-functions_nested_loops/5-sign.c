#include <stdio.h>
#include "holberton.h"
/**
 * print_sign - function that checks for lowercase character.
 * @c: First operand
 * Description: verify is lowercase or no
 * Return: the value 1 if lowercase or 0 otherwise
 *
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar ('+');
return (1);
}
else if (c == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
