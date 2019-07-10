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
for (; *s != '\0';  s++)
{
if (*s == c)
{
return (s);
}
}
if (*s == c)
return (s);
else
return (NULL);
}
