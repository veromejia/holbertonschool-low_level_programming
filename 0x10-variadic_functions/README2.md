# _printf

## Description:

This _Printf() function was created based on the requirements of
Holberton school to Write our own printf function.

This function write its output to stdout, the standard output stream.
Returns the count of printed characters when the function is successful


## General Requirements

- All your files will be compiled on Ubuntu 14.04 LTS
- Your code should use the Betty style. It will be checked using betty-style.pl
and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file
called holberton.h

## Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

## Compilation

$ gcc -Wall -Werror -Wextra -pedantic *.c


##  Prototype and Formats re-created

Prototype: int _printf(const char *format, ...);

%s  prints a string of character
%c prints a single character
%% prints % simbol
%d prints Signed decimal integer
%i prints a Signed decimal integer

## Files

- Holberton.h : Header file which contains all functions prototypes
- and the definition of the structure.
- _printf.c : contains all the logic  to re-create the printf function
- format_function.c : contains all auxiliary functions to print the given formats
- Print_numbers.c: contains the code to re-create  the format %d and %i
- _Putchar: contains the code to print character by character

## Peers
Leah Holland
Veronica Mejia