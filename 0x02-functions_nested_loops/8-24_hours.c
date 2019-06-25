#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - print a-z
 */

void jack_bauer(void)
{
  char m;
  char m1;
  char s;
  char s1;
  for (m = 0; m < 3; m++)
    {
      for (m1 = 0; m1 < 10; m1++)
	{
	  if (m < 2)
	    {
	  for (s = 0; s < 6; s++)
	    {
	      for (s1 = 0; s1 < 10; s1++)
		{
		  _putchar('0' + m);
		  _putchar('0' + m1);
		  _putchar(':');
		  _putchar('0' + s);
		  _putchar('0' + s1);
		  _putchar('\n');
		}
	    }
	    }
	  
	  	 
	  
 
	}
    }
}
