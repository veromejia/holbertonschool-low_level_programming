#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - function that checks for lowercase character.
 * @c: First operand
 * Description: verify is uppercase or no
 * Return: the value 1 if uppercase or 0 otherwise
 *
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
