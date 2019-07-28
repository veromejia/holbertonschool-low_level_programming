#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _printf(const char *format, ...);

typedef struct validTypes
{
	char *valid;
	void (*f)();
}v_types;
#endif /*HOLBERTON_H*/
