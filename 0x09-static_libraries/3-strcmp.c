#include "holberton.h"
/**
 * _strcmp -compare 2 string
 * @s1: first string
 * @s2: second string
 * Return: a string.
 */
int _strcmp(char *s1, char *s2)
{
for (; *s1 != '\0'; s1++, s2++)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
}
return (*s1 - *s2);
}
