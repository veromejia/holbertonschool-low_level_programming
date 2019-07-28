#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
  * print_c - prints characters
  * @c: character to print
  */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
  * print_i - prints integers
  * @i: integer to print
  */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
  * print_f - prints floats
  * @f: float to print
  */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
  * print_s - prints strings
  * @s: string to print
  */
void print_s(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
  * print_all - prints any argument passed into it
  * @format: formats symbols in order
  */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *aux;
	va_list argp;
	v_types printTypes[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};
	i = j = 0;
	aux = "";
	va_start(argp, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *printTypes[j].valid)
			{
				printf("%s", aux);
				printTypes[j].f(argp);
				aux = " ,";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
