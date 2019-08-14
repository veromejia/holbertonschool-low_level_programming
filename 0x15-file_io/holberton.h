#ifndef HOLBERTON_H
#define HOLBERTON_H

#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /*HOLBERTON_H*/