#include "holberton.h"
/**
 *  _memset - fills the first n bytes of memory pointed to by s
 * @s:pointer to a character
 * @n: limit of bytes to be modify
 * @b: char to be modify
 * Return: pointer to char
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *p = s;
for (i = 0; i < n; i++,s++)
*s=b;
return (p);
}
