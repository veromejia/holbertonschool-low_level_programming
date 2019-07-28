#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add the value of the list of parameters
 * @n: numbers to add
 * @...: arguments
 * Return: addition of the list of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum;

	sum = 0;
	va_start(numbers, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
