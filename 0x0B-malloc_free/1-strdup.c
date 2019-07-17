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
size = 0;
if (str == NULL)
return (NULL);
while (str[size] != '\0')
size++;
ptr = malloc((size + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
for (j = 0; j < size; j++)
ptr[j] = str[j];
ptr[j] = '\0';
return (ptr);
}
