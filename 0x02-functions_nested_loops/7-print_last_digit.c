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
if (d < 0)
d  = d * -1;
int result;
result = d % 10;
_putchar ('0' + result);
return (result);
}
