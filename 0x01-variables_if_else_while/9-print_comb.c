#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
i = 0;
while (i <= 9)
{
if (i == 9)
{
putchar(i % 10 + '0');
i++;
}
else
{
putchar(i % 10 + '0');
putchar(',');
putchar(' ');
i++;
}
}
return (0);
}