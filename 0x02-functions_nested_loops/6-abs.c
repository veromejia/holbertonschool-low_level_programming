#include <stdio.h>
#include "holberton.h"
/**
 * _abs - function that checks for lowercase character.
 * @c: First operand
 * Description: verify is lowercase or no
 * Return: the value 1 if lowercase or 0 otherwise
 *
 */
int _abs(int c)
{
int i;
if (c < 0)
{
i = (c * -1);
return (i);
}
else
{
i = c;
return (i);
}
}
