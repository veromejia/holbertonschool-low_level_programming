#include "holberton.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: counter of arguments
 * @argv: string argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
if (argv[0] != NULL)
printf("%d\n", argc - 1);
return (0);
}
