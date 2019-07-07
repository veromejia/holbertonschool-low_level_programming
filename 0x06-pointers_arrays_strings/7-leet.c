#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @a: string
 * Return: string into 1337.
 */

char *leet(char *a)
{
int i;
int j;
char c[] = {'A', '4', 'a', '4', 'E', '3', 'e', '3', 'o',
'0', 'O', '0', 't', '7', 'T', '7', 'L', '1', 'l', '1'};
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; j < 20; j = j + 2)
{
if (a[i] == c[j])
{
a[i] = c[j + 1];
}
}
}
return (a);
}
