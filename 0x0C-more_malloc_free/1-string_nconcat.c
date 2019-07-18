#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - reserve memory for s1 + n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: n bytes of string s2
 * Return: a new concatenate string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, j, k;
if (s2 == NULL)
s2 = " ";
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
if (n >= j)
k = j;
else
k = n;
ptr = malloc(i + (n * sizeof(*s2) + 1) *  sizeof(*ptr));
if (ptr == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; s2[j] != '\0' && j < k; j++, i++)
ptr[i] = s2[j];
ptr[i] = '\0';
return (ptr);
}
