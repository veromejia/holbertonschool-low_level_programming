#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - Print alpabeths 10 times
 */
void print_alphabet_x10(void)
{
char i;
int count;
for (count = 0; count <= 9; count++)
{
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
}
