#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* alloc_grid - ponter to a 2D array of integers
* @width: with of the grid
* @height: height of the grid
* Return: pointer to a pointer
*/
int **alloc_grid(int width, int height)
{
int w;
int h;
int **ptr;
if (width < 1 || height < 1)
return (NULL);
ptr = malloc(sizeof(int *) * (height));
if (ptr == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
ptr[h] = malloc(sizeof(int) * width);
if (ptr[h] == NULL)
{
while (h >= 0)
{
h--;
free(ptr[h]);
}
free(ptr);
return (NULL);
}
for (w = 0; w < width; w++)
ptr[h][w] = 0;
}
return (ptr);
}
