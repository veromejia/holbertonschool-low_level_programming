#include "holberton.h"
#include <stdio.h>
/**
 * _islower - verify is the string is lower or not
 * @c: is an integer
 * Return: 1 if is true and 0 if is false
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @a: string
 * Return: an upper string
 */
char *string_toupper(char *a)
{
int j = 0;
for (j = 0; a[j] != '\0'; j++)
{
if (_islower(a[j]))
a[j] = a[j] - 32;
}
return (a);
}
