#include <stdio.h>
#include "holberton.h"
/**
 * times_table - print the nine times tables
 */

void times_table(void)
{
int i;
int j;
int result;
for (i = 0 ; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
result = i * j;
if (result <= 9)
{
if (j == 0)
{
_putchar('0' + result);
_putchar(',');
_putchar (' ');
}
else
{
_putchar(' ');
_putchar('0' + result);
if (j != 9)
{
_putchar(',');
_putchar (' ');
}
}
}
else
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
