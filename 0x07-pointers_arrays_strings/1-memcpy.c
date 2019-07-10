#include "holberton.h"
/**
 *  _memcpy - copy src in dest
 * @dest: pointer of destiny
 * @src: source pointer
 * @n: limit
 * Return: pointer to char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
