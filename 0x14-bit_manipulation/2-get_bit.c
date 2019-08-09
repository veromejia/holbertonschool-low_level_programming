#include "holberton.h"
/**
 * get_bit - returns the value of a bit at given index
 * @n: number to convert in binary
 * @index: given position
 * Return: a value  of a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
