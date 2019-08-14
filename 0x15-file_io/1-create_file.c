#include <stdio.h>
#include "holberton.h"
/**
 * create_file - function that create a file
 * @filename: file to be created
 * @text_content: content of the file
 * Return: 1 if success -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int file, i;

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (write(file, text_content, i) == -1)
		return (-1);
	close(file);
	return (1);
}
