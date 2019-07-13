#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function main
 * @argc: counter of arguments
 * @argv: string argument vector
 * Return: return always 0
 */

int main(int argc, char *argv[])
{
int mul = 1;
if (argc > 1)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
else
printf("Error\n");
return (0);
}
