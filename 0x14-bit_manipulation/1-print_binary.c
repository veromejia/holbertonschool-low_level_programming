#include "holberton.h"
/**
 * print_binary - print a binary number
 * @n: number
 * Description: print binary using bit manipulations
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
