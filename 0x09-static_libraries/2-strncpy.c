#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy -concatenate 2 string
 * @dest: destination string to concatenate
 * @src: source string
 * @n: number of bytes to be coppy
 * Return: a string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
