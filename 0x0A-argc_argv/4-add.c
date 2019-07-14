#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * validate - verify if string is number
 * @p: pointer a char
 * Return: integer 1 if number 0 if diferrent
 */
int validate(char *p)
{
int i;
int result = 0;
for (i = 0; p[i] != '\0'; i++)
{
if (p[i] >= 48 && p[i] <= 57)
{
result = 1;
}
else
{
return (0);
}
}
return (result);
}
/**
 * main - function main
 * @argc: counter of arguments
 * @argv: string argument vector
 * Return: return always 0
 */
int main(int argc, char *argv[])
{
int result = 0;
int i;
for (i = 1; i < argc; i++)
{
if (validate(argv[i]) == 1)
{
result = result + atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%i\n", result);
return (0);
}
