#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - return the first incidence of a character
 *@s: pointer with the string
 *@c: character to find
 *Return:  pointer to a char
 */
char *_strchr(char *s, char c)
{
char *p;
p = NULL;
int i;
for (i = 0; s[i] != '\0';  i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (p);
}
