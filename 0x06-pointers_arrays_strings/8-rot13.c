#include "holberton.h"
/**
 * root13 - reverse_array -reverses the content of an array of integers.
 * @a: array of integers
 * Return: encode string.
 */

char *rot13(char *a)
{
char aux[] = {'A', 'N', 'B', 'O', 'C', 'P', 'D', 'Q', 'E', 'R', 'F', 'S', 'G', 'T', 'H', 'U', 'I', 'V', 'J', 'W', 'K', 'X', 'L', 'Y', 'M', 'Z', 'N', 'A', 'O', 'B', 'P', 'C', 'Q', 'D', 'R', 'E', 'S', 'F', 'T', 'G', 'U', 'H', 'V', 'I', 'W', 'J', 'X', 'K', 'Y', 'L', 'Z', 'M', 'a', 'n', 'b', 'o', 'c', 'p', 'd', 'q', 'e', 'r', 'f', 's', 'g', 't', 'h', 'u', 'i', 'v', 'j', 'w', 'k', 'x', 'l', 'y', 'm', 'z', 'n', 'a', 'o', 'b', 'p', 'c', 'q', 'd', 'r', 'e', 's', 'f', 't', 'g', 'u', 'h', 'v', 'i', 'w', 'j', 'x', 'k', 'y', 'l', 'z', 'm'};
int i;
int j;
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; j < 64; j = j + 2)
{
if (a[i] == aux[j])
{
a[i] = aux[j + 1];
}
}
}
return (a);
}
