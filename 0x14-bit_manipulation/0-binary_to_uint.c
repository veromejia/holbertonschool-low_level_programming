#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - convert a binary number to unsign int
 * @b: number to be convert
 * Return: an equivalent unsigned int number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int pow;
	int len, i, j;

	result = 0;
	pow = 1;
	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	if (len == 1)
	{
		if (b[0] == '0' || b[0] == '1')
		return ((b[0] - '0'));
}

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = len - 1; j > 0; j--)
		pow = pow * 2;
		result = result + (pow * (b[i] - '0'));
		len--;
		pow = 1;
	}
	return (result);
}
