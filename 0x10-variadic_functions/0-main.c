#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(0, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 'a', 1024, 402, -1024);
    printf("%d\n", sum);
    return (0);
}
