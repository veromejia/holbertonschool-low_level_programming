#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int count;
char i;
for (count = 0; count <= 9; count++)
putchar(count % 10 + '0');
for (i = 'a'; i <= 'e'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
