#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - find the length of an string.
 * @s: is the string
 * Return: the lenth of an string.
 */
int _strlen(char *s)
{
int i;
i = 0;
while (*s != 0)
{
i++;
s++;
}
return (i);
}
