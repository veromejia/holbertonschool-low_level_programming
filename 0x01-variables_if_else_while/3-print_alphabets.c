#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char i;
i = 'a';
while (i <= 'z')
{
printf("%c", i);
i++;
}

i = 'A';
while (i <= 'Z')
{
printf("%c", i);
i++;
}
printf("\n");
return (0);
}
