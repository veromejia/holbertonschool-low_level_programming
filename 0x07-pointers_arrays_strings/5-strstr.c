include "holberton.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0';)
{
char *start = haystack;
for (; *needle == *haystack && *needle != '\0' && *haystack != '\0';)
{
haystack++;
needle++;
}
if (*needle == '\0')
return (start);
haystack = start + 1;
}
return (NULL);
}
