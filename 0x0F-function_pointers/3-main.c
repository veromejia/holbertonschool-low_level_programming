#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - principal function
 * @argc: numbers of parameters
 * @argv: arguments
 * Return: always 0
*/

int main(int argc, char *argv[])
{
int result;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}
result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);
return (0);
}
