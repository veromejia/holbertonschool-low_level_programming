#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -allocate memory for nmemb for an array
 * @nmemb: number os memor of bytes
 * @size: size of the array
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
/* char *ptr_char = (char *)ptr;*/
for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;
return (ptr);
}
