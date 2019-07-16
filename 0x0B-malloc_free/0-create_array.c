#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* create_array - creates an array of chars
* @size: size of the array
* @c: char
* Return: a pointer
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
if (size > 0)
{
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
return(NULL);
}
else
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
