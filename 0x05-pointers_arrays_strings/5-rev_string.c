#include "holberton.h"
#include <stdio.h>
/**
 * rev_string -reverse a string
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
int j;
char rev[10];

for (j = 9; j >= 0; j--)
{
  rev[9-j]=s[j];
  putchar(s[j]);
}
 
}
