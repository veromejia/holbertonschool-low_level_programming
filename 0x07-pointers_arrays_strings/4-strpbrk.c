#include "holberton.h"
#include <stddef.h>
/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: consist only of bytes from accept
 * @accept: the size of the memory to print
 * Return:  pointer to the byte in s that matches one of the bytes in accept
 * or NUll if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{
int min = 100000;
int i;
int j;
int f = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
if (i < min)
{
min = i;
f = 1;
}
}
}
}
if (f == 1)
return (s + min);
else
return (NULL);
}

