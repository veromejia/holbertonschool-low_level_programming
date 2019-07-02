#include "holberton.h"
/**
 * puts2 -print every 2 char
 * @str: string
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
int count;
for (i = 0; str[i] != '\0'; i++)
count++;
for (i = 0; i <= count - 1; i = i + 2)
_putchar (str[i]);
_putchar ('\n');
}
