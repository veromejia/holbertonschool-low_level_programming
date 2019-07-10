#include "holberton.h"

/**
 * factorial - print the factorial of n number
 * @n:given number
 * Return: factorial of a number.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
 else if (n > 0)
return (n * factorial(n-1));
else
return (0);
}
