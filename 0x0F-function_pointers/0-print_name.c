#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_name - prints a name
  * @name: input string
  * @f: function pointer casted to char pointer
  */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || name  == NULL)
return;
(f)(name);
}
