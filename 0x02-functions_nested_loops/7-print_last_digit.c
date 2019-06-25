#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - function that checks for lowercase character.
 * @d: First operand
 * Description: verify is lowercase or no
 * Return: the value 1 if lowercase or 0 otherwise
 *
 */
int print_last_digit(int d)
{
int result;
int j;
if (d < 0)
{
j = d * (-1);
result = j % 10;
_putchar ('0' + result);
}
else
{
result = d % 10;
_putchar ('0' + result);
}
return (result);
}
