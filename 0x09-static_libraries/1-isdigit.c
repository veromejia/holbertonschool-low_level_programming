#include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - functions that checks if a variable is digit or not
 *@c: variable
 *Description: verify is c is a digit from 0-9
 *Return:value 1 if c is digit 0 in otherwise
 *
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
