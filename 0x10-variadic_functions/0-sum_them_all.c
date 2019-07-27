#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all- add all the parameters.
 * @n: numbers of arguments
 * Return: the addicion of the parameters given
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list numbers_to_add;

	if (n == 0)
		return (0);

	va_start(numbers_to_add, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers_to_add, int);

	va_end(numbers_to_add);

	return (sum);
}
