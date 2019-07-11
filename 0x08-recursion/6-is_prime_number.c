#include <stdio.h>
/**
 * _prime - verify if number is prime or no
 * @n: number
 * @i: counter
 * Return: 1 if prime 0 otherwise
 */
int _prime(int n, int i)
{
if (n % i == 0 || n <= 1)
return (0);
else if (i == n - 1)
return (1);
else if (n > i)
return (_prime(n, i + 1));
return (1);
}

/**
 * is_prime_number - verify if number is prime or no
 * @n: number
 * Return:  1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
int i;
i = 2;
return (_prime(n, i));
}
