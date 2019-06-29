#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int n3;
int result;
int n5;
n3 = 0;
n5 = 0;
for (n = 0; n < 1024; n++)
{
if (n % 3 == 0)
n3 = n3 + n;
else
if (n % 5 == 0)
n5 = n5 + n;
result = n3 + n5;
}
printf("%d\n", result);
return (0);
}
