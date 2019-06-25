#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - print a-z
 */

void print_alphabet(void)
{
char i;
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
