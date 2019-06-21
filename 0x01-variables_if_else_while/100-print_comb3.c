#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int cont;
int i;
int j;
cont = 1;
for (i = 48; i < 58; i++)
{
for (j = 48 + cont; j < 58; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
}
if ((i + j) < 113)
{
putchar(',');
putchar(' ');
}
}
cont++;
}
putchar('\n');
return (0);
}
