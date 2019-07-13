#include "holberton.h"
#include <stdio.h>
/**
* _atoi - function atoi
* @s: string
* Return: an integer
*/

int _atoi(char *s)
{
int i;
i = 0;
while (*s != 0)
{
i++;
s++;
}
return (i);
}
