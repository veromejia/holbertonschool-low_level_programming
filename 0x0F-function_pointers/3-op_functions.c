#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numers
 * @a: fist number
 * @b: second number
 * Return: result of the addition
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - substract two numers
 * @a: fist number
 * @b: second number
 * Return: result of the substraction
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: fist number
 * @b: second number
 * Return: result of the multiplication
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - add two numbers
 * @a: fist number
 * @b: second number
 * Return: result of the addition
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - calculate the module of 2 numbers
 * @a: fist number
 * @b: second number
 * Return: the result of the mod
*/
int op_mod(int a, int b)
{
if (a % b)
{
printf("error\n");
exit(100);
}
return (a % b);
}
