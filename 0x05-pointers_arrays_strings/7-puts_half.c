#include "holberton.h"
/**
 * puts_half - print every 2 char
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i;
int count;
int start;
for (i = 0; str[i] != '\0'; i++)
count++;
start = (count + 1) / 2;
for (i = start; i <= count - 1; i++)
_putchar (str[i]);
_putchar ('\n');
}
