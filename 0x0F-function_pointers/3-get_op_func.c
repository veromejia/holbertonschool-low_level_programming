#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func - option of operation
 *@s: character of type
 * Return: an option
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 5)
{
if (ops[i].op[0] == s[0] && strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}