#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
printf("Fizz ");	}
else if (i % 5 == 0)
{
if (i % 3 == 0)
printf("FizzBuzz");
else
printf("Buzz ");
}
else
printf("%d ", i);
}
printf("\n");
}
