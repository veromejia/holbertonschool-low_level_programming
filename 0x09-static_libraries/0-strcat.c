#include <stdio.h>
#include "holberton.h"
/**
 * _strcat -concatenate 2 string
 * @dest: destination string to concatenate
 * @src: source string
 * Return: a string.
 */
char *_strcat(char *dest, char *src)
{
char *conc = dest;
while (*dest)
dest++;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (conc);
}
