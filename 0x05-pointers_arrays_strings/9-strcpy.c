#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - print every 2 char
 * @dest: array
 * @src: n numbers of values in the array
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
