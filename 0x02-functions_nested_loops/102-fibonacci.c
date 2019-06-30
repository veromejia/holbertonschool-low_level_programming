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
a= 1;
b = 2;
printf("%0.f, ", a);
printf("%0.f, ", b);
for (j = 0; j<48; j++)
{
c = a + b;
a = b;
b = c;
if (j != 47)
printf("%.0f, ", c);
}
printf("%.0f\n", c);
return (0);
}
