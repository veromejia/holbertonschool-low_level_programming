#include "holberton.h"
/**
 * rev_string -reverse a string
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
int temp, i, end, count;

for (i = 0; s[i] != '\0'; i++)
{
count++;
}
end = (count - 1);
for (i = 0; i < end; i++, end--)
{
temp = s[i];
s[i] = s[end];
s[end] = temp;
}
}
