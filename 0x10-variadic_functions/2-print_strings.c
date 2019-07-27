 #include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/** 
 * print_strings - print n numbers of string
 * @separator: character that separatate the strings
 * n number of string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list strings;
  unsigned int i;
  char *ptr;
  

  va_start(strings, n);

  
  for (i = 0; i < n; i++)
    {
      ptr = va_arg(strings, char *);
      if (ptr  == NULL)
	printf("nil");
      else
	printf("%s", ptr);
      if ( i < (n-1))
	
	printf("%s", separator);
      
    }
  va_end(strings);
  printf("\n");
}
