#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;

    a = 402;
    printf("n=%d\n", a);
    reset_to_98(&a);
    printf("n=%d\n", a);
    return (0);
}
