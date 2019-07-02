#include "holberton.h"
#include <stdio.h>
/**
 * print_rev -reverse a string
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
i = 0;
int j;
int count;
while (s[i] != 0)
{
i++;
}
count = i - 1;
for (j = count; j >= 0; j--)
{
_putchar (s[j]);
}
_putchar ('\n');
}
