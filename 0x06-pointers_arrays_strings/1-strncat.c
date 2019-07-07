#include <stdio.h>
#include "holberton.h"
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
for(len=0;dest[i]!='\0'; len++);
for (i = 0 ;i < n & src[i] != '\0' ; i++){
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return dest;
}
