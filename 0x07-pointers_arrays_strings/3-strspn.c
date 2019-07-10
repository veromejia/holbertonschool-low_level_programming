#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: consist only of bytes from accept
 * @accept: the size of the memory to print
 *
 * Return: Number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n;
n = 0;
int f;
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
f = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
f = 1;
n++;
}
}
if (f == 0)
{
break;
}
}
return (n);
}
