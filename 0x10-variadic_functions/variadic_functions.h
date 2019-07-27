#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct printing
{
	char *ptr_format;
	void (*funct_pointer)();
}
#endif /*HOLBERTON_H*/
