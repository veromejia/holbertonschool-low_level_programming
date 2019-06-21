#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int count;
for (count = 1; count <=9; count++)
putchar(count%10 + '0');
putchar('\n');
return (0);
}
