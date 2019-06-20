#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int integerType;
float floatType;
long int longint;
long long longlong;
char charType;
printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld byte()\n", sizeof(integerType));
printf("Size of a long int: %ld byte\n", sizeof(longint));
printf("Size of a long long int: %ld byte\n", sizeof(longlong));
printf("Size of a float: %ld byte\n", sizeof(floatType));
return (0);
}
