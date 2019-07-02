#include "holberton.h"
/**
 * print_rev -reverse a string
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
int count;
for (i = 0; s[i] != '\0'; i++)
count++;
for (i = count - 1; i >= 0; i--)
_putchar (s[i]);
_putchar ('\n');
}
