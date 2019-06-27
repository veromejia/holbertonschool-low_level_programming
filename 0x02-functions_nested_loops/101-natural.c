#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int n3;
int n5;
int result;
n5 = 0;
n3 = 0;
for (n = 0; n < 1024; n++)
{
if ((n % 3) == 0)
{
n3 =n3 + ( n / 3);
}
if ((n % 5) == 0)
{
n5 =n5 + ( n / 5);
}
} 
printf("%d\n",(n3 + n5));
}
