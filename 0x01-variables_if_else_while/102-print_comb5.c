#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;
int j = 0;
int k = 0;
int l = 0;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; ++j)
{
for (k = i; k < 10; ++k)
{
for (l = ((i == k) ? j + 1 : 0); l < 10; ++l)
{
putchar ('0' + i);
putchar ('0' + j);
putchar (' ');
putchar ('0' + k);
putchar ('0' + l);
if (i != 9 || j != 8 || k != 9 || l != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar ('\n');
return (0);
}
