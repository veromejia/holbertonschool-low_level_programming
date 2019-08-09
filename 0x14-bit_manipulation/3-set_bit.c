#include "holberton.h"
/**
 * set_bit - set a bit in a given index
 * @n: numbert
 * @index: position given
 * Return: set value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(8) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
