#include "holberton.h"
/**
 *  _strlen_recursion - check the code for Holberton School students.
 * @s: string
 * Return: lenght of the string.
 */
int  _strlen_recursion(char *s)
{
if (*s != '\0')
{
s++;
return (_strlen_recursion(s) + 1);
}
else
return (0);
}
