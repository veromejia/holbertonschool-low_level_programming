#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int j;
double a;
double b;
double c;
a = 1;
b = 2;
printf("%.0f, ", a);
printf("%.0f, ", b);
for (j = 0; j < 96; j++)
{
c = a + b;
a = b;
b = c;
printf("%.0f", c);
if (j != 95)
printf(", ");
}
printf("\n");
return (0);
}
