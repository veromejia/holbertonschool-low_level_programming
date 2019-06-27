#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
if (i % 5 == 0)
printf("FizzBuzz ");
else
printf("Fizz ");
}
else if (i % 5 == 0)
{
if (i % 3 == 0)
printf("FizzBuzz");
else
printf("Buzz ");
}
else if (i != 100)
printf("%d ", i);
else
printf("%d", i);
}
printf("\n");
return (0);
}
