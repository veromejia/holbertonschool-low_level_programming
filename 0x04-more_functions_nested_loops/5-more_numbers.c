#include <stdio.h>
#include "holberton.h"
/**
 * more_numbers - print 10 times form 0 to 14
 *
 * Return: always 0;
 */

void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j <= 9)
_putchar('0' + j);
else
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
}
_putchar('\n');
}
}
