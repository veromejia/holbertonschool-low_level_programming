#include <stdio.h>
#include "holberton.h"
/**
 * _islower - function that checks for lowercase character.
 * @c: First operand
 * Description: verify is lowercase or no
 * Return: the value 1 if lowercase or 0 otherwise
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

