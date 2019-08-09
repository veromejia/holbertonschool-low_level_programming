#include "holberton.h"
/**
 * print-binary - print a binary number
 * @n: number
 * Return: the binary representation of the number
 */
void print_binary(unsigned long int n)
{
	int i, flag, number;
	if (n == 0)
		_putchar('0');

	for (i = 63; i >= 0; i--)
	{
		number = n >> i;

		if (number & 1)
		{
			flag = 0;
			_putchar ('1');
		}
		else if (flag == 0)
			_putchar ('0');
	}
}
