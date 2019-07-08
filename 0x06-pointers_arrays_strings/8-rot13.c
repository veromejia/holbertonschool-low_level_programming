#include "holberton.h"
/**
 * rot13 - reverse_array -reverses the content of an array of integers.
 * @a: array of integers
 * Return: encode string.
 */
char *rot13(char *a)
{
char *cpy = a;
for (; *a != '\0'; a++)
{
if ((*a >= 'a' && *a <= 'm') || (*a >= 'A' && *a <= 'M'))
{
*a = *a + 13;
}
else
{
while ((*a >= 'n' && *a <= 'z') || (*a >= 'N' && *a <= 'Z'))
{
*a = *a - 13;
}
}
}
return (cpy);
}
