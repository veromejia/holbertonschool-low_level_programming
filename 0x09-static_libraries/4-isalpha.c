#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - function that checks for lowercase character.
 * @c: First operand
 * Description: verify is lowercase or no
 * Return: the value 1 if lowercase or 0 otherwise
 *
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
