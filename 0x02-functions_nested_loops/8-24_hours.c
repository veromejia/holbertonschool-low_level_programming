#include <stdio.h>
#include "holberton.h"
/**
 * jack_bauer - print hour and minutes
 * Description: print hours in munutes with 24hr format
 */

void jack_bauer(void)
{
int m;
int s;
for (m = 00; m < 24 ; m++)
{
for (s = 00; s < 60; s++)
{
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar(':');
_putchar(s / 10 + '0');
_putchar(s % 10 + '0');
_putchar('\n');
}
}
}
