#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - swap 2 values a and b.
 * @a: first value
 * @b: second value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int aux;
/* saving in aux the value of the pointer a thru the operator */
aux = *a;
/* if i write only a i have to write memory address*/
*a = *b;
*b = aux;
}
