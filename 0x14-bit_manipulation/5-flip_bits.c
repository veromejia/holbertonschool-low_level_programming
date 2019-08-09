#include "holberton.h"
/**
 * flip_bits - return the number of bits yo would need to flip
 * @n: first number
 * @m: second number
 * Return: numbers of tits you would need to flip to get.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int i = 0;

	result = n ^ m;

	while (result)
	{
		if (result & 1)
			i++;
		result = result >> 1;
	}
	return (i);
}
