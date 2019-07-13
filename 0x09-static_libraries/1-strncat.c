#include <stdio.h>
#include "holberton.h"
/**
 *_strlen -return the length of a string
 *@param: string to detereminate the length
 *Return: a int.
 */
int _strlen(char *param)
{
int i;
for (i = 0; *param != '\0'; i++, param++)
{
}
return (i);
}
/**
 * _strncat -concatenate 2 string with n limit bytes
 * @dest: destination string to concatenate
 * @src: source string
 * @n: number of bytes to be concatenates
 * Return: a string.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int len;
len = _strlen(dest);
for (i = 0; (i < n) & (src[i] != '\0'); i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
