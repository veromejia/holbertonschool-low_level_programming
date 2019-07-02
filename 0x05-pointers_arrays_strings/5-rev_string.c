#include "holberton.h"
#include <stdio.h>
/**
 * rev_string -reverse a string
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
  int lenght, c;
 char *begin, *end, temp;
 
   lengthl = 10;
   begin  = s;
   end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
 
}
