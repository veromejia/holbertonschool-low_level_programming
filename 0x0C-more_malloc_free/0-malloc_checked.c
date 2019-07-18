#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: type of variable
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(sizeof(b));
if (ptr == NULL)
exit(98);
return (ptr);
}
