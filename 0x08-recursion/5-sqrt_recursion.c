#include <stdio.h>

/**
* _square -find a numbert i multiply by itself is equal n
* @i: counter
* @n: number
* Return: natural square
*/
int _square(int i, int n)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_square(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number..
 * @n: number
 * Return: sqrt of a number, -1 if number does not natural square root
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n < 0)
return (-1);
else
return (_square(1, n));
}
