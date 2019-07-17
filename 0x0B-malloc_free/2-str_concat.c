#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates 2 string.
 *@s1:destination string
 *@s2:source string
 *Return: concatenate string or null on failure
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i, j, l, k;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
str = malloc(sizeof(char) * (i + j + 1));
if (str == NULL)
return (NULL);
for (l = 0; s1[l] != '\0'; l++)
str[l] = s1[l];
for (k = 0; s2[k] != '\0'; k++, l++)
str[l] = s2[k];
str[l] = '\0';
return (str);
}
