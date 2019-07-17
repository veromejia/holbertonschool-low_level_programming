#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - copy of the string given as a parameter.
 *@str: string
 *Return: a pointer to a new string which is a duplicate of the string str.
 */
char *_strdup(char *str)
{
char *ptr;
unsigned int size;
unsigned int j;

if (str == NULL)
return (NULL);
for (size = 0; str[size] != 0; size++)
{
}
if (size < 1)
return (NULL);
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (j = 0; j < size; j++)
ptr[j] = str[j];
ptr[j] = '\0';
return (ptr);
}
